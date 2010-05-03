/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Loader
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Loader.cpp
*********************************************************************/

//## auto_generated
#include "Loader.h"
//## link itsConThread
#include "ConThread.h"
//## package Application::Discrete

//## class Loader
Loader::Loader() {
    itsConThread = NULL;
}

Loader::~Loader() {
    cleanUpRelations();
}

ConThread* Loader::getItsConThread() const {
    return itsConThread;
}

void Loader::setItsConThread(ConThread* p_ConThread) {
    itsConThread = p_ConThread;
}

void Loader::cleanUpRelations() {
    if(itsConThread != NULL)
        {
            itsConThread = NULL;
        }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Loader.cpp
*********************************************************************/
