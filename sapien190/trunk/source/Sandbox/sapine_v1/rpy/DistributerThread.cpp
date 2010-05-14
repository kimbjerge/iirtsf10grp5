/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: DistributerThread
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/DistributerThread.cpp
*********************************************************************/

//## attribute itsFrameBuffer
#include "FrameBuffer.h"
//## auto_generated
#include "DistributerThread.h"
//## link itsFrameBufferPool
#include "FrameBufferPool.h"
//## package Application::Continuous

//## class DistributerThread
void DistributerThread::run() {
    //#[ operation run()
    #ifdef _LINUX                  
    while(isAlive()){
    #else 
    if (isAlive()) {
    #endif
    	itsFrameBuffer = itsFrameBufferPool->GetMail();
    	if (itsFrameBuffer != NULL) Notify(itsFrameBuffer); 
    	itsFrameBufferPool->ReleaseFrameBuffer(itsFrameBuffer);
    }
    //#]
}

FrameBuffer* DistributerThread::getItsFrameBuffer() const {
    return itsFrameBuffer;
}

void DistributerThread::setItsFrameBuffer(FrameBuffer* p_itsFrameBuffer) {
    itsFrameBuffer = p_itsFrameBuffer;
}

void DistributerThread::cleanUpRelations() {
    if(itsFrameBufferPool != NULL)
        {
            itsFrameBufferPool = NULL;
        }
}

DistributerThread::DistributerThread() : itsFrameBuffer(NULL), Thread(PRIORITY_NORMAL,"DistributerThread") {
    itsFrameBufferPool = NULL;
    //#[ operation DistributerThread()
    //#]
}

DistributerThread::~DistributerThread() {
    cleanUpRelations();
}

FrameBufferPool* DistributerThread::getItsFrameBufferPool() const {
    return itsFrameBufferPool;
}

void DistributerThread::setItsFrameBufferPool(FrameBufferPool* p_FrameBufferPool) {
    itsFrameBufferPool = p_FrameBufferPool;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/DistributerThread.cpp
*********************************************************************/
