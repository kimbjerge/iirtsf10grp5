/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Resume
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Resume.cpp
*********************************************************************/

//## auto_generated
#include "Resume.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency ESXState
#include "ESXState.h"
//## package Default

//## class Resume
Resume::Resume() {
}

Resume::~Resume() {
}

void Resume::Execute(ESXState* s, EmbeddedSystemX* esx) {
    //#[ operation Execute(ESXState*,EmbeddedSystemX*)
    s->Resume(esx);
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Resume.cpp
*********************************************************************/
