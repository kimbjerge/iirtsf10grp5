/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Loader
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Loader.cpp
*********************************************************************/

//## auto_generated
#include "Loader.h"
//## link itsSimulatorRealtime
#include "SimulatorRealtime.h"
//## package Application::Discrete

//## class Loader
Loader::Loader() {
    itsSimulatorRealtime = NULL;
}

Loader::~Loader() {
    cleanUpRelations();
}

SimulatorRealtime* Loader::getItsSimulatorRealtime() const {
    return itsSimulatorRealtime;
}

void Loader::setItsSimulatorRealtime(SimulatorRealtime* p_SimulatorRealtime) {
    itsSimulatorRealtime = p_SimulatorRealtime;
}

void Loader::cleanUpRelations() {
    if(itsSimulatorRealtime != NULL)
        {
            itsSimulatorRealtime = NULL;
        }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Loader.cpp
*********************************************************************/
