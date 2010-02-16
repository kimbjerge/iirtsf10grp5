/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: RealTimeLoop
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/

//## auto_generated
#include "RealTimeLoop.h"
//## attribute _instance
#include "ESXState.h"
//## package Default

//## class RealTimeLoop
ESXState* RealTimeLoop::_instance;

RealTimeLoop::RealTimeLoop() {
}

RealTimeLoop::~RealTimeLoop() {
}

void RealTimeLoop::DisplayState() {
    //#[ operation DisplayState()
    Display("RealTimeLoop");
    //#]
}

void RealTimeLoop::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

ESXState* RealTimeLoop::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/
