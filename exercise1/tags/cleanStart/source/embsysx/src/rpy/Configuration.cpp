/********************************************************************
	Rhapsody	: 7.5
	Login		: phm
	Component	: DefaultComponent
	Configuration 	: LinuxSource
	Model Element	: Configuration
//!	Generated Date	: Mon, 15, Feb 2010
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Configuration.cpp
*********************************************************************/

//## auto_generated
#include "Configuration.h"
//## operation ConfigX(Operational*)
#include "Operational.h"
//## package Default

//## class Configuration
Configuration::Configuration() {
}

Configuration::~Configuration() {
}

void Configuration::ConfigX(Operational* op) {
    //#[ operation ConfigX(Operational*)
    defaultChange();
    //#]
}

void Configuration::ConfigurationEnded(Operational* op) {
    //#[ operation ConfigurationEnded(Operational*)
    defaultChange();
    //#]
}

OpState* Configuration::Instance() {
    //#[ operation Instance()
    if (_instance == 0)
    {
      _instance = new Configuration;
    }
    return _instance;
    //#]
}

OpState* Configuration::_instance = 0;

void Configuration::DisplayState() {
    //#[ operation DisplayState()
    Display("Configuration");
    //#]
}

void Configuration::set_instance(OpState* p__instance) {
    _instance = p__instance;
}

OpState* Configuration::get_instance() {
    return _instance;
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Configuration.cpp
*********************************************************************/
