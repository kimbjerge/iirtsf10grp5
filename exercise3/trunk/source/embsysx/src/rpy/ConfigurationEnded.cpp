/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: ConfigurationEnded
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/ConfigurationEnded.cpp
*********************************************************************/

//## auto_generated
#include "ConfigurationEnded.h"
//## operation Execute(ESXState*,EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## dependency ESXState
#include "ESXState.h"
//## package Default

//## class ConfigurationEnded
ConfigurationEnded::ConfigurationEnded() {
}

ConfigurationEnded::~ConfigurationEnded() {
}

void ConfigurationEnded::Execute(ESXState* s, EmbeddedSystemX* esx) {
    //#[ operation Execute(ESXState*,EmbeddedSystemX*)
    s->ConfigurationEnded(esx);
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/ConfigurationEnded.cpp
*********************************************************************/
