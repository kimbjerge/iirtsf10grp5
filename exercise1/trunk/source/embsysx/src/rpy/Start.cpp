/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Start
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Start.cpp
*********************************************************************/

//## auto_generated
#include "Start.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency ESXState
#include "ESXState.h"
//## package Default

//## class Start
Start::Start() {
}

Start::~Start() {
}

void Start::Execute(ESXState* s, EmbeddedSystemX* esx) {
    //#[ operation Execute(ESXState*,EmbeddedSystemX*)
    s->Start(esx);
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/Start.cpp
*********************************************************************/
