/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: SimulatorRealtime
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/SimulatorRealtime.cpp
*********************************************************************/

//## auto_generated
#include "SimulatorRealtime.h"
//## dependency DistributerThread
#include "DistributerThread.h"
//## dependency FrameBufferPool
#include "FrameBufferPool.h"
//## dependency InfusionPumpModel
#include "InfusionPumpModel.h"
//## dependency Medicine
#include "Medicine.h"
//## dependency NormalModel
#include "NormalModel.h"
//## dependency PatientModel
#include "PatientModel.h"
//## dependency RealTimeThread
#include "RealTimeThread.h"
//## dependency RecordProxy
#include "RecordProxy.h"
//## dependency RecordSimulate
#include "RecordSimulate.h"
//## dependency RecordWfdb
#include "RecordWfdb.h"
//## operation AttachObserver(Observer*)
#include "Observer.h"
//## operation AlternateRecord(Record*)
#include "Record.h"
//## package Application::Continuous

//## class SimulatorRealtime
SimulatorRealtime::SimulatorRealtime() : state(Uninitialized) {
    itsDistributerThread = NULL;
    itsFrameBufferPool = NULL;
    itsPatientModel = NULL;
    itsRealTimeThread = NULL;
}

void SimulatorRealtime::CreatePatientModel(const SimulatorRealtime::MODEL_TYPES& modelType) {
    //#[ operation CreatePatientModel(MODEL_TYPES)
    if (state != Running)
    {
      if (itsPatientModel != NULL) delete itsPatientModel;
      setItsPatientModel(new PatientModel());  
        
      switch (modelType)  
      {
      	case Normal:
      		itsPatientModel->SetStrategy(new NormalModel());
       		break;
        case InfusionPump:
      		itsPatientModel->SetStrategy(new InfusionPumpModel());
        	break;
       };
       
       state = Initialized;
    }
       
    //#]
}

Record* SimulatorRealtime::CreateSimRecord() {
    //#[ operation CreateSimRecord()
    return new RecordSimulate;
    //#]
}

Record* SimulatorRealtime::CreateWfdbRecord(char* name, char* annotation) {
    //#[ operation CreateWfdbRecord(char*,char*)
    return new RecordProxy(new RecordWfdb(name, annotation));
    //#]
}

void SimulatorRealtime::SetMedicine(const SimulatorRealtime::MEDICINE_TYPES& type) {
    //#[ operation SetMedicine(MEDICINE_TYPES)
    if (itsPatientModel != NULL)
    	itsPatientModel->SetMedicine(new Medicine(type));
    //#]
}

PatientModel* SimulatorRealtime::getItsPatientModel() const {
    return itsPatientModel;
}

void SimulatorRealtime::setItsPatientModel(PatientModel* p_PatientModel) {
    itsPatientModel = p_PatientModel;
}

void SimulatorRealtime::cleanUpRelations() {
    if(itsDistributerThread != NULL)
        {
            itsDistributerThread = NULL;
        }
    if(itsFrameBufferPool != NULL)
        {
            itsFrameBufferPool = NULL;
        }
    if(itsPatientModel != NULL)
        {
            itsPatientModel = NULL;
        }
    if(itsRealTimeThread != NULL)
        {
            itsRealTimeThread = NULL;
        }
}

SimulatorRealtime::STATE_TYPES SimulatorRealtime::getState() const {
    return state;
}

void SimulatorRealtime::setState(SimulatorRealtime::STATE_TYPES p_state) {
    state = p_state;
}

SimulatorRealtime::SimulatorRealtime(int frameBufferSize) : state(Uninitialized) {
    itsRealTimeThread = NULL;
    itsPatientModel = NULL;
    itsFrameBufferPool = NULL;
    itsDistributerThread = NULL;
    //#[ operation SimulatorRealtime(int)
    itsFrameBufferPool = new FrameBufferPool(); 
    itsFrameBufferPool->CreateFrameBuffers(frameBufferSize);
    itsRealTimeThread = new RealTimeThread(); 
    itsRealTimeThread->setItsFrameBufferPool(itsFrameBufferPool);
    itsDistributerThread = new DistributerThread(); 
    itsDistributerThread->setItsFrameBufferPool(itsFrameBufferPool);
    //#]
}

DistributerThread* SimulatorRealtime::getItsDistributerThread() const {
    return itsDistributerThread;
}

void SimulatorRealtime::setItsDistributerThread(DistributerThread* p_DistributerThread) {
    itsDistributerThread = p_DistributerThread;
}

FrameBufferPool* SimulatorRealtime::getItsFrameBufferPool() const {
    return itsFrameBufferPool;
}

void SimulatorRealtime::setItsFrameBufferPool(FrameBufferPool* p_FrameBufferPool) {
    itsFrameBufferPool = p_FrameBufferPool;
}

RealTimeThread* SimulatorRealtime::getItsRealTimeThread() const {
    return itsRealTimeThread;
}

void SimulatorRealtime::setItsRealTimeThread(RealTimeThread* p_RealTimeThread) {
    itsRealTimeThread = p_RealTimeThread;
}

SimulatorRealtime::~SimulatorRealtime() {
    //#[ operation ~SimulatorRealtime()
    delete itsDistributerThread;
    delete itsRealTimeThread;
    delete itsFrameBufferPool;
    delete itsPatientModel;
    //#]
    cleanUpRelations();
}

bool SimulatorRealtime::SetRecord(Record* aRecord) {
    //#[ operation SetRecord(Record*)
    if (itsPatientModel != NULL) 
    {
    	state = Stopped;
    	return itsPatientModel->SetRecord(aRecord);
    }
    return false;
    //#]
}

void SimulatorRealtime::StartSimulation() {
    //#[ operation StartSimulation()
    if ( ((state == Initialized) || (state == Stopped)) && (itsPatientModel != NULL) )
    {
    	itsPatientModel->StartSimulation();
    	itsRealTimeThread->setItsPatientModel(itsPatientModel);
    	itsDistributerThread->start();
    	itsRealTimeThread->start();
    	state = Running;
    }    
    //#]
}

void SimulatorRealtime::StopSimulation() {
    //#[ operation StopSimulation()
    if ((state == Running) && (itsPatientModel != NULL))
    {
    	itsDistributerThread->kill();
    	itsRealTimeThread->kill();
    	state = Stopped;
    }    
    //#]
}

bool SimulatorRealtime::AlternateRecord(Record* aRecord) {
    //#[ operation AlternateRecord(Record*)
    if ((state == Running) && (itsPatientModel != NULL))
    {
       	return itsPatientModel->AlternateRecord(aRecord);
    } 
    return false;
    //#]
}

void SimulatorRealtime::AttachObserver(Observer* obs) {
    //#[ operation AttachObserver(Observer*)
    getItsDistributerThread()->Attach(*obs);
    //#]
}

void SimulatorRealtime::DetachObserver(Observer* obs) {
    //#[ operation DetachObserver(Observer*)
    getItsDistributerThread()->Detach(*obs);
    //#]
}

void SimulatorRealtime::SetSampleRate(int rate) {
    //#[ operation SetSampleRate(int)
    if (itsRealTimeThread != NULL)  
    {
    	itsRealTimeThread->SetSampleRate(rate);  
    }
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/SimulatorRealtime.cpp
*********************************************************************/
