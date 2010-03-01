/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Exit
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Exit.cpp
*********************************************************************/

//## auto_generated
#include "Exit.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency ESXState
#include "ESXState.h"
//## package Default

//## class Exit
Exit::Exit() {
}

Exit::~Exit() {
}

void Exit::Execute(ESXState* s, EmbeddedSystemX* esx) {
    //#[ operation Execute(ESXState*,EmbeddedSystemX*)
    s->Exit(esx);
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Exit.cpp
*********************************************************************/
