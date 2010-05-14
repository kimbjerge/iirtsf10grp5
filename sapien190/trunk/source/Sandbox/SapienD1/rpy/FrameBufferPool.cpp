/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: FrameBufferPool
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/FrameBufferPool.cpp
*********************************************************************/

//## auto_generated
#include "FrameBufferPool.h"
//## operation AllocateFrameBuffer()
#include "FrameBuffer.h"
//## dependency GenericPool
#include "GenericPool.h"
//## dependency Mailbox
#include "Mailbox.h"
//## package Application::Continuous

//## class FrameBufferPool
FrameBufferPool::~FrameBufferPool() {
    //#[ operation ~FrameBufferPool()
    delete frameBufferPool;
    #ifdef _LINUX
    delete mailbox;
    #endif    
    //#]
}

void FrameBufferPool::CreateFrameBuffers(int size) {
    //#[ operation CreateFrameBuffers(int)
    if (frameBufferPool == NULL)
    { 
        frameBufferPool = new GenericPool<FrameBuffer, 2>; 
        for (int i = 0; i < 2; i++)
        {
        	FrameBuffer *fp = new FrameBuffer(size);
       	 	frameBufferPool->AddResource(fp);  
        }     
    }
    //#]
}

Mailbox<FrameBuffer*> * FrameBufferPool::getMailbox() const {
    return mailbox;
}

void FrameBufferPool::setMailbox(Mailbox<FrameBuffer*> * p_mailbox) {
    mailbox = p_mailbox;
}

GenericPool<FrameBuffer, 2> * FrameBufferPool::getFrameBufferPool() const {
    return frameBufferPool;
}

void FrameBufferPool::setFrameBufferPool(GenericPool<FrameBuffer, 2> * p_frameBufferPool) {
    frameBufferPool = p_frameBufferPool;
}

FrameBufferPool::FrameBufferPool() : frameBufferPool(NULL), mailbox(NULL) {
    //#[ operation FrameBufferPool()
    #ifdef _LINUX
    mailbox = new Mailbox<FrameBuffer*>(10,true);
    #else
    mailbox = new Mailbox<FrameBuffer*>();
    #endif
    //#]
}

FrameBuffer* FrameBufferPool::AllocateFrameBuffer() {
    //#[ operation AllocateFrameBuffer()
    FrameBuffer *fp = NULL;
    enter();     
    if (frameBufferPool != NULL)
    {
    	fp = frameBufferPool->Allocate();
    }
    exit();
    return fp;
    //#]
}

void FrameBufferPool::SendMail(FrameBuffer* fp) {
    //#[ operation SendMail(FrameBuffer*)
    if (mailbox != NULL)
    	mailbox->put(fp);
    //#]
}

void FrameBufferPool::ReleaseFrameBuffer(FrameBuffer* fp) {
    //#[ operation ReleaseFrameBuffer(FrameBuffer*)
    if (fp) fp->Clear();
    enter();     
    if (frameBufferPool != NULL)
    {   
    	frameBufferPool->Release(fp);
    }
    exit();
    //#]
}

FrameBuffer* FrameBufferPool::GetMail() {
    //#[ operation GetMail()
    if (mailbox != NULL)
    	return mailbox->get();
    return NULL;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/FrameBufferPool.cpp
*********************************************************************/
