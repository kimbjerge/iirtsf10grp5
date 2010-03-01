/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Test2
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Test2.cpp
*********************************************************************/

//## auto_generated
#include "Test2.h"
//## dependency CommandCreator
template <class TheCommand> class CommandCreator;

//## auto_generated
#include "EmbeddedSystemX.h"
//## auto_generated
#include "Command.h"
//## dependency Creator
#include "Creator.h"
//## dependency Initialized
#include "Initialized.h"
//## dependency Restart
#include "Restart.h"
//## dependency SelfTestOk
#include "SelfTestOk.h"
//## dependency SelfTestOk
class SelfTestOk;

//## package Default

//## class Test2
Test2::Test2() {
}

Test2::~Test2() {
}

void Test2::CreateTestCommands() {
    //#[ operation CreateTestCommands()
    Display("CreateTest2");
    //#]
}

Test2::Test2(EmbeddedSystemX* esx) {
    //#[ operation Test2(EmbeddedSystemX*)
    itsEmbeddedSystemX = esx;
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Test2.cpp
*********************************************************************/
