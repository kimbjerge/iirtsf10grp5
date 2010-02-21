/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: EmbeddedSystemX
//!	Generated Date	: Sun, 21, Feb 2010  
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/EmbeddedSystemX.cpp
*********************************************************************/

//## auto_generated
#include "EmbeddedSystemX.h"
//## operation ChangeState(ESXState*)
#include "ESXState.h"
//## dependency Command
#include "Command.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
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
    itsESXState = PowerOnSelfTest::Instance();
    //#]
}

void EmbeddedSystemX::HandleCommand(Command* pCommand) {
    //#[ operation HandleCommand(Command*)
    pCommand->Execute(itsESXState, this);
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise2/source/embsysx/src/rpy/EmbeddedSystemX.cpp
*********************************************************************/
