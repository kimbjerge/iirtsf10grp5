/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Test3
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Test3.cpp
*********************************************************************/

//## auto_generated
#include "Test3.h"
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

//## class Test3
Test3::Test3() {
}

Test3::~Test3() {
}

void Test3::CreateTestCommands() {
    //#[ operation CreateTestCommands()
    Display("CreateTest3");
    //#]
}

Test3::Test3(EmbeddedSystemX* esx) {
    //#[ operation Test3(EmbeddedSystemX*)
    itsEmbeddedSystemX = esx;
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Test3.cpp
*********************************************************************/
