/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Configuration
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Configuration.cpp
*********************************************************************/

//## auto_generated
#include "Configuration.h"
//## operation ConfigurationEnded(EmbeddedSystemX*)
#include "EmbeddedSystemX.h"
//## operation Instance()
#include "ESXState.h"
//## dependency Ready
#include "Ready.h"
//## package Default

//## class Configuration
Configuration::Configuration() {
}

Configuration::~Configuration() {
}

void Configuration::ConfigX(EmbeddedSystemX* esx) {
    //#[ operation ConfigX(EmbeddedSystemX*)
    defaultChange();
    //#]
}

void Configuration::ConfigurationEnded(EmbeddedSystemX* esx) {
    //#[ operation ConfigurationEnded(EmbeddedSystemX*)
    ChangeState(esx, Ready::Instance());
    //#]
}

ESXState* Configuration::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
      _instance = new Configuration;
    }
    return _instance;
    //#]
}

ESXState* Configuration::_instance;

void Configuration::DisplayState() {
    //#[ operation DisplayState()
    Display("Configuration");
    //#]
}

ESXState* Configuration::get_instance() {
    return _instance;
}

void Configuration::set_instance(ESXState* p__instance) {
    _instance = p__instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Configuration.cpp
*********************************************************************/
