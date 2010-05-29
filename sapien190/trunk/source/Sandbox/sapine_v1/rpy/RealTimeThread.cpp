/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RealTimeThread
//!	Generated Date	: Fri, 21, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RealTimeThread.cpp
*********************************************************************/

//## link itsExtOutAnalogue
#include "ExtOutAnalogue.h"
//## attribute itsFrameBuffer
#include "FrameBuffer.h"
//## link itsPatientModel
#include "PatientModel.h"
//## link itsSerialProtocol
#include "SerialProtocol.h"
//## auto_generated
#include "RealTimeThread.h"
//## link itsFrameBufferPool
#include "FrameBufferPool.h"
//## package Application::Continuous

//## class RealTimeThread
RealTimeThread::~RealTimeThread() {
    //#[ operation ~RealTimeThread()
    delete itsSerialProtocol;
    delete itsExtOutAnalogue[1];
    delete itsExtOutAnalogue[0];
    
    //#]
    cleanUpRelations();
}

void RealTimeThread::GenerateSignals() {
    //#[ operation GenerateSignals()
    itsPatientModel->CalcSample();
    WFDB_Sample e0 = itsPatientModel->GetECGValue(0);
    //WFDB_Sample e1 = itsPatientModel->GetECGValue(1);
    WFDB_Sample r0 = itsPatientModel->GetEDRValue(0);
    //WFDB_Sample r1 = itsPatientModel->GetEDRValue(1); 
    itsExtOutAnalogue[0]->OutputSample(e0);
    itsExtOutAnalogue[1]->OutputSample(r0);
    if (itsFrameBuffer != NULL)
    	itsFrameBuffer->Insert(e0);     
    //#]
}

int RealTimeThread::getItsExtOutAnalogue() const {
    int iter = 0;
    return iter;
}

void RealTimeThread::addItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue) {
    for (int pos = 0; pos < 2; pos++) {
    	if (!itsExtOutAnalogue[pos]) {
    		itsExtOutAnalogue[pos] = p_ExtOutAnalogue;
    		break;
    	}
    }
}

void RealTimeThread::removeItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue) {
    for (int pos = 0; pos < 2; pos++) {
    	if (itsExtOutAnalogue[pos] == p_ExtOutAnalogue) {
    		itsExtOutAnalogue[pos] = NULL;
    	}
    }
}

void RealTimeThread::clearItsExtOutAnalogue() {
}

FrameBuffer* RealTimeThread::getItsFrameBuffer() const {
    return itsFrameBuffer;
}

void RealTimeThread::setItsFrameBuffer(FrameBuffer* p_itsFrameBuffer) {
    itsFrameBuffer = p_itsFrameBuffer;
}

PatientModel* RealTimeThread::getItsPatientModel() const {
    return itsPatientModel;
}

void RealTimeThread::setItsPatientModel(PatientModel* p_PatientModel) {
    itsPatientModel = p_PatientModel;
}

SerialProtocol* RealTimeThread::getItsSerialProtocol() const {
    return itsSerialProtocol;
}

void RealTimeThread::setItsSerialProtocol(SerialProtocol* p_SerialProtocol) {
    itsSerialProtocol = p_SerialProtocol;
}

void RealTimeThread::cleanUpRelations() {
    
    if(itsFrameBufferPool != NULL)
        {
            itsFrameBufferPool = NULL;
        }
    if(itsPatientModel != NULL)
        {
            itsPatientModel = NULL;
        }
    if(itsSerialProtocol != NULL)
        {
            itsSerialProtocol = NULL;
        }
}

RealTimeThread::RealTimeThread() : computeTime(0), counter(0), itsFrameBuffer(NULL), sampleRate(250), sampleTime(4000), timeToPulse(200), Thread(PRIORITY_NORMAL,"RealTimeThread") {
    {
        for (int pos = 0; pos < 2; pos++) {
        	itsExtOutAnalogue[pos] = NULL;
        }
    }
    itsFrameBufferPool = NULL;
    itsPatientModel = NULL;
    itsSerialProtocol = NULL;
    //#[ operation RealTimeThread()
    itsExtOutAnalogue[0] = new ExtOutAnalogue(0);
    itsExtOutAnalogue[1] = new ExtOutAnalogue(1);
    itsSerialProtocol = new SerialProtocol(); 
    
    //#]
}

void RealTimeThread::GeneratePulse() {
    //#[ operation GeneratePulse()
    int pulse = itsPatientModel->GetPulse();
    itsSerialProtocol->OutputPulse(pulse);
    if (itsFrameBuffer != NULL)
    	itsFrameBuffer->setPulse(pulse);
    //#]
}

void RealTimeThread::run() {
    //#[ operation run()
    #ifdef _LINUX                  
    while(isAlive()){
    	usleep(sampleTime - computeTime);
    #else
    if (isAlive()) {
    #endif
    	LogTime();
    	GenerateSignals(); 
    	counter++;
    	if (counter > timeToPulse)
    	{
    		GeneratePulse();
    		counter = 0; 
    	}   
        CheckFrameBuffer();
        LogTime();
        // std::cout << "CTSample " << computeTime << std::endl;
    }   
    // Ensure that Distributer thread will die
    #ifdef _LINUX                  
    if ((itsFrameBuffer != NULL) && (itsFrameBufferPool != NULL))
       	itsFrameBufferPool->SendMail(itsFrameBuffer);
    #endif
    //#]
}

int RealTimeThread::getCounter() const {
    return counter;
}

void RealTimeThread::setCounter(int p_counter) {
    counter = p_counter;
}

int RealTimeThread::getTimeToPulse() const {
    return timeToPulse;
}

void RealTimeThread::setTimeToPulse(int p_timeToPulse) {
    timeToPulse = p_timeToPulse;
}

FrameBufferPool* RealTimeThread::getItsFrameBufferPool() const {
    return itsFrameBufferPool;
}

void RealTimeThread::setItsFrameBufferPool(FrameBufferPool* p_FrameBufferPool) {
    itsFrameBufferPool = p_FrameBufferPool;
}

void RealTimeThread::CheckFrameBuffer() {
    //#[ operation CheckFrameBuffer()
    bool initFrameBuffer = false;
    if (itsFrameBuffer != NULL)
    {            
       	if (itsFrameBuffer->isFull())
       	{   
       		itsFrameBufferPool->SendMail(itsFrameBuffer);
       		itsFrameBuffer = itsFrameBufferPool->AllocateFrameBuffer(); 
       		initFrameBuffer = (itsFrameBuffer != NULL);
       	}
    } 
    else
    {
     	itsFrameBuffer = itsFrameBufferPool->AllocateFrameBuffer();  
     	initFrameBuffer = (itsFrameBuffer != NULL);
    }
    if (initFrameBuffer)
    {   
    	itsFrameBuffer->Clear(); 
     	itsFrameBuffer->setSampleRate(sampleRate);
     	itsFrameBuffer->setPulse(itsPatientModel->GetPulse());  
    }
    //#]
}

void RealTimeThread::SetSampleRate(int rate) {
    //#[ operation SetSampleRate(int)
    unsigned long sampePeriode = 1000000/rate; 
    sampleRate = rate;
    sampleTime = sampePeriode;
    //#]
}

void RealTimeThread::LogTime() {
    //#[ operation LogTime()
    #ifdef _LINUX
    
    struct timeval tv;
    struct timezone zone;
    gettimeofday(&tv, &zone);
    unsigned long diffTime = 0; 
    unsigned long currTime = tv.tv_usec;
     
    if (currTime > prevTime)
    {   
    	diffTime = currTime - prevTime;
    	if (diffTime > sampleTime) 
    		diffTime = sampleTime;
    }
    computeTime = diffTime;
    prevTime = currTime;
    
    #endif
    //#]
}

unsigned long RealTimeThread::getComputeTime() const {
    return computeTime;
}

void RealTimeThread::setComputeTime(unsigned long p_computeTime) {
    computeTime = p_computeTime;
}

unsigned long RealTimeThread::getPrevTime() const {
    return prevTime;
}

void RealTimeThread::setPrevTime(unsigned long p_prevTime) {
    prevTime = p_prevTime;
}

unsigned long RealTimeThread::getSampleTime() const {
    return sampleTime;
}

void RealTimeThread::setSampleTime(unsigned long p_sampleTime) {
    sampleTime = p_sampleTime;
}

int RealTimeThread::getSampleRate() const {
    return sampleRate;
}

void RealTimeThread::setSampleRate(int p_sampleRate) {
    sampleRate = p_sampleRate;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RealTimeThread.cpp
*********************************************************************/
