/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RealTimeThread
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RealTimeThread.h
*********************************************************************/

#ifndef RealTimeThread_H
#define RealTimeThread_H

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
#include "Continuous.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## class RealTimeThread
#include "Thread.h"
//## link itsFrameBufferPool
class FrameBufferPool;

//## link itsExtOutAnalogue
class ExtOutAnalogue;

//## attribute itsFrameBuffer
class FrameBuffer;

//## link itsPatientModel
class PatientModel;

//## link itsSerialProtocol
class SerialProtocol;

//## package Application::Continuous

//## class RealTimeThread
class RealTimeThread : public Thread {
    ////    Constructors and destructors    ////
    
public :

    //## operation ~RealTimeThread()
    ~RealTimeThread();
    
    ////    Operations    ////
    
    //## operation GenerateSignals()
    void GenerateSignals();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getItsExtOutAnalogue() const;
    
    //## auto_generated
    void addItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue);
    
    //## auto_generated
    void removeItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue);
    
    //## auto_generated
    void clearItsExtOutAnalogue();

private :

    //## auto_generated
    FrameBuffer* getItsFrameBuffer() const;
    
    //## auto_generated
    void setItsFrameBuffer(FrameBuffer* p_itsFrameBuffer);

public :

    //## auto_generated
    PatientModel* getItsPatientModel() const;
    
    //## auto_generated
    void setItsPatientModel(PatientModel* p_PatientModel);
    
    //## auto_generated
    SerialProtocol* getItsSerialProtocol() const;
    
    //## auto_generated
    void setItsSerialProtocol(SerialProtocol* p_SerialProtocol);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ExtOutAnalogue* itsExtOutAnalogue[2];		//## link itsExtOutAnalogue
    
    PatientModel* itsPatientModel;		//## link itsPatientModel
    
    SerialProtocol* itsSerialProtocol;		//## link itsSerialProtocol

public :

    //## operation RealTimeThread()
    RealTimeThread();
    
    //## operation GeneratePulse()
    void GeneratePulse();
    
    //## operation run()
    virtual void run();

private :

    //## auto_generated
    int getCounter() const;
    
    //## auto_generated
    void setCounter(int p_counter);

protected :

    int counter;		//## attribute counter

public :

    //## auto_generated
    int getTimeToPulse() const;
    
    //## auto_generated
    void setTimeToPulse(int p_timeToPulse);

protected :

    int timeToPulse;		//## attribute timeToPulse

public :

    //## auto_generated
    FrameBufferPool* getItsFrameBufferPool() const;
    
    //## auto_generated
    void setItsFrameBufferPool(FrameBufferPool* p_FrameBufferPool);

protected :

    FrameBuffer* itsFrameBuffer;		//## attribute itsFrameBuffer
    
    FrameBufferPool* itsFrameBufferPool;		//## link itsFrameBufferPool

public :

    //## operation CheckFrameBuffer()
    void CheckFrameBuffer();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RealTimeThread.h
*********************************************************************/
