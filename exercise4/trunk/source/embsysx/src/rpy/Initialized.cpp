/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Initialized
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Initialized.cpp
*********************************************************************/

//## auto_generated
#include "Initialized.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency ESXState
#include "ESXState.h"
//## package Discrete

//## class Initialized
Initialized::Initialized() {
}

Initialized::~Initialized() {
}

void Initialized::Execute(ESXState* s, EmbeddedSystemX* esx) {
    //#[ operation Execute(ESXState*,EmbeddedSystemX*)
    s->Initialized(esx);
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/Initialized.cpp
*********************************************************************/
