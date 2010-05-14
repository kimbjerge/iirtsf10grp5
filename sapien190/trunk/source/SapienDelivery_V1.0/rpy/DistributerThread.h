/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: DistributerThread
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/DistributerThread.h
*********************************************************************/

#ifndef DistributerThread_H
#define DistributerThread_H

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
//## class DistributerThread
#include "Subject.h"
//## class DistributerThread
#include "Thread.h"
//## link itsFrameBufferPool
class FrameBufferPool;

//## attribute itsFrameBuffer
class FrameBuffer;

//## package Application::Continuous

//## class DistributerThread
class DistributerThread : public Subject, public Thread {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation run()
    virtual void run();
    
    ////    Additional operations    ////
    
    //## auto_generated
    FrameBuffer* getItsFrameBuffer() const;
    
    //## auto_generated
    void setItsFrameBuffer(FrameBuffer* p_itsFrameBuffer);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////

public :

    //## operation DistributerThread()
    DistributerThread();
    
    //## auto_generated
    virtual ~DistributerThread();
    
    //## auto_generated
    FrameBufferPool* getItsFrameBufferPool() const;
    
    //## auto_generated
    void setItsFrameBufferPool(FrameBufferPool* p_FrameBufferPool);

protected :

    FrameBuffer* itsFrameBuffer;		//## attribute itsFrameBuffer
    
    FrameBufferPool* itsFrameBufferPool;		//## link itsFrameBufferPool
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/DistributerThread.h
*********************************************************************/
