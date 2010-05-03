/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: SignalDistributer
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/SignalDistributer.cpp
*********************************************************************/

//## auto_generated
#include "SignalDistributer.h"
//## link itsFrameBuffer
#include "FrameBuffer.h"
//## package Application::Continuous

//## class SignalDistributer
SignalDistributer::SignalDistributer() {
    itsFrameBuffer = NULL;
}

SignalDistributer::~SignalDistributer() {
    cleanUpRelations();
}

FrameBuffer* SignalDistributer::getItsFrameBuffer() const {
    return itsFrameBuffer;
}

void SignalDistributer::setItsFrameBuffer(FrameBuffer* p_FrameBuffer) {
    itsFrameBuffer = p_FrameBuffer;
}

void SignalDistributer::cleanUpRelations() {
    if(itsFrameBuffer != NULL)
        {
            itsFrameBuffer = NULL;
        }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/SignalDistributer.cpp
*********************************************************************/
