/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: SimulatorRealtime
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/SimulatorRealtime.h
*********************************************************************/

#ifndef SimulatorRealtime_H
#define SimulatorRealtime_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "wfdb/wfdb.h"
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## auto_generated
#include "Continuous.h"
//## dependency DistributerThread
class DistributerThread;

//## dependency FrameBufferPool
class FrameBufferPool;

//## dependency InfusionPumpModel
class InfusionPumpModel;

//## dependency Medicine
class Medicine;

//## dependency NormalModel
class NormalModel;

//## dependency PatientModel
class PatientModel;

//## dependency RealTimeThread
class RealTimeThread;

//## dependency RecordProxy
class RecordProxy;

//## dependency RecordSimulate
class RecordSimulate;

//## dependency RecordWfdb
class RecordWfdb;

//## operation AlternateRecord(Record*)
class Record;

//## operation AttachObserver(Observer*)
class Observer;

//## package Application::Continuous

//## class SimulatorRealtime
class SimulatorRealtime {
public :

    //## type MODEL_TYPES
    enum MODEL_TYPES {
        Normal,
        InfusionPump
    };
    
    //## type MEDICINE_TYPES
    enum MEDICINE_TYPES {
        Morphine
    };
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    SimulatorRealtime();
    
    ////    Operations    ////
    
    //## operation CreatePatientModel(MODEL_TYPES)
    void CreatePatientModel(const MODEL_TYPES& modelType);
    
    //## operation CreateSimRecord()
    Record* CreateSimRecord();
    
    //## operation CreateWfdbRecord(char*)
    Record* CreateWfdbRecord(char* name);
    
    //## operation SetMedicine(MEDICINE_TYPES)
    void SetMedicine(const MEDICINE_TYPES& type);
    
    ////    Additional operations    ////
    
    //## auto_generated
    PatientModel* getItsPatientModel() const;
    
    //## auto_generated
    void setItsPatientModel(PatientModel* p_PatientModel);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    PatientModel* itsPatientModel;		//## link itsPatientModel

public :

    //## type STATE_TYPES
    enum STATE_TYPES {
        Uninitialized = 0,
        Initialized = 1,
        Stopped = 2,
        Running = 3,
        Suspended = 4
    };
    
    //## auto_generated
    STATE_TYPES getState() const;
    
    //## auto_generated
    void setState(STATE_TYPES p_state);

protected :

    STATE_TYPES state;		//## attribute state

public :

    //## operation SimulatorRealtime(int)
    SimulatorRealtime(int frameBufferSize);
    
    //## auto_generated
    DistributerThread* getItsDistributerThread() const;
    
    //## auto_generated
    void setItsDistributerThread(DistributerThread* p_DistributerThread);
    
    //## auto_generated
    FrameBufferPool* getItsFrameBufferPool() const;
    
    //## auto_generated
    void setItsFrameBufferPool(FrameBufferPool* p_FrameBufferPool);
    
    //## auto_generated
    RealTimeThread* getItsRealTimeThread() const;
    
    //## auto_generated
    void setItsRealTimeThread(RealTimeThread* p_RealTimeThread);

protected :

    DistributerThread* itsDistributerThread;		//## link itsDistributerThread
    
    FrameBufferPool* itsFrameBufferPool;		//## link itsFrameBufferPool
    
    RealTimeThread* itsRealTimeThread;		//## link itsRealTimeThread

public :

    //## operation ~SimulatorRealtime()
    ~SimulatorRealtime();
    
    //## operation AssignRecord(Record*)
    bool AssignRecord(Record* aRecord);
    
    //## operation StartSimulation()
    void StartSimulation();
    
    //## operation StopSimulation()
    void StopSimulation();
    
    //## operation AlternateRecord(Record*)
    bool AlternateRecord(Record* aRecord);
    
    //## operation AttachObserver(Observer*)
    void AttachObserver(Observer* obs);
    
    //## operation DetachObserver(Observer*)
    void DetachObserver(Observer* obs);
    
    //## operation SetSampleRate(int)
    void SetSampleRate(int rate);
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/SimulatorRealtime.h
*********************************************************************/
