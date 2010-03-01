/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Test1
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Test1.cpp
*********************************************************************/

//## auto_generated
#include "Test1.h"
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
//## dependency CommandCreator
template <class TheCommand> class CommandCreator;

//## dependency Creator
class Creator;

//## dependency Initialized
class Initialized;

//## dependency SelfTestOk
class SelfTestOk;

//## package Default

//## class Test1
Test1::Test1() {
}

Test1::~Test1() {
}

void Test1::CreateTestCommands() {
    //#[ operation CreateTestCommands()
    Display("CreateTest1"); 
    addItsCommand(pSelfTestOkCreator->CreateCommand());
    addItsCommand(pInitializedCreator->CreateCommand());
    //#]
}

Test1::Test1(EmbeddedSystemX* esx) {
    //#[ operation Test1(EmbeddedSystemX*)
    itsEmbeddedSystemX = esx;
    //#]
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Test1.cpp
*********************************************************************/
