/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: ConfigX
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/ConfigX.cpp
*********************************************************************/

//## auto_generated
#include "ConfigX.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency ESXState
#include "ESXState.h"
//## package Default

//## class ConfigX
ConfigX::ConfigX() {
}

ConfigX::~ConfigX() {
}

void ConfigX::Execute(ESXState* s, EmbeddedSystemX* esx) {
    //#[ operation Execute(ESXState*,EmbeddedSystemX*)
    s->ConfigX(esx);
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/ConfigX.cpp
*********************************************************************/
