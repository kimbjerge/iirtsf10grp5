/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: FrameBufferPool
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/FrameBufferPool.h
*********************************************************************/

#ifndef FrameBufferPool_H
#define FrameBufferPool_H

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
//## class FrameBufferPool
#include "Monitor.h"
//## dependency GenericPool
template <class Resource, int nElements> class GenericPool;

//## dependency Mailbox
template <class Item> class Mailbox;

//## operation AllocateFrameBuffer()
class FrameBuffer;

//## package Application::Continuous

//## class FrameBufferPool
class FrameBufferPool : public Monitor {
    ////    Constructors and destructors    ////
    
public :

    //## operation ~FrameBufferPool()
    ~FrameBufferPool();
    
    ////    Operations    ////
    
    //## operation CreateFrameBuffers(int)
    void CreateFrameBuffers(int size);
    
    ////    Additional operations    ////
    
    //## auto_generated
    Mailbox<FrameBuffer*> * getMailbox() const;
    
    //## auto_generated
    void setMailbox(Mailbox<FrameBuffer*> * p_mailbox);

private :

    //## auto_generated
    GenericPool<FrameBuffer, 2> * getFrameBufferPool() const;
    
    //## auto_generated
    void setFrameBufferPool(GenericPool<FrameBuffer, 2> * p_frameBufferPool);
    
    ////    Attributes    ////

protected :

    GenericPool<FrameBuffer, 2> * frameBufferPool;		//## attribute frameBufferPool
    
    Mailbox<FrameBuffer*> * mailbox;		//## attribute mailbox

public :

    //## operation FrameBufferPool()
    FrameBufferPool();
    
    //## operation AllocateFrameBuffer()
    FrameBuffer* AllocateFrameBuffer();
    
    //## operation SendMail(FrameBuffer*)
    void SendMail(FrameBuffer* fp);
    
    //## operation ReleaseFrameBuffer(FrameBuffer*)
    void ReleaseFrameBuffer(FrameBuffer* fp);
    
    //## operation GetMail()
    FrameBuffer* GetMail();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/FrameBufferPool.h
*********************************************************************/
