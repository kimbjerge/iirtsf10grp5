/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: EmbeddedSystemX
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/EmbeddedSystemX.cpp
*********************************************************************/

//## auto_generated
#include "EmbeddedSystemX.h"
//## operation ChangeState(ESXState*)
#include "ESXState.h"
//## package Default

//## class EmbeddedSystemX
EmbeddedSystemX::~EmbeddedSystemX() {
    cleanUpRelations();
}

void EmbeddedSystemX::ChangeState(ESXState* s) {
    //#[ operation ChangeState(ESXState*)
    itsESXState = s;
    //#]
}

ESXState* EmbeddedSystemX::getItsESXState() const {
    return itsESXState;
}

void EmbeddedSystemX::setItsESXState(ESXState* p_ESXState) {
    itsESXState = p_ESXState;
}

void EmbeddedSystemX::cleanUpRelations() {
    if(itsESXState != NULL)
        {
            itsESXState = NULL;
        }
}

EmbeddedSystemX::EmbeddedSystemX() {
    itsESXState = NULL;
    //#[ operation EmbeddedSystemX()
    //KBE??? itsESXState = PowerOnSelfTest::Instance();
    //#]
}

/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/EmbeddedSystemX.cpp
*********************************************************************/
