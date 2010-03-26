/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Test2
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Test2.cpp
*********************************************************************/

//## auto_generated
#include "Test2.h"
//## dependency CommandCreator
template <class TheCommand> class CommandCreator;

//## auto_generated
#include "EmbeddedSystemX.h"
//## dependency Configure
class Configure;

//## dependency Exit
class Exit;

//## dependency Resume
class Resume;

//## dependency RunRealTime
#include "RunRealTime.h"
//## dependency SelfTestFailed
class SelfTestFailed;

//## dependency SelfTestOk
class SelfTestOk;

//## dependency Simulate
#include "Simulate.h"
//## dependency ChMode
#include "ChMode.h"
//## dependency ConfigurationEnded
#include "ConfigurationEnded.h"
//## dependency Configure
#include "Configure.h"
//## dependency Creator
#include "Creator.h"
//## dependency Exit
#include "Exit.h"
//## dependency Initialized
#include "Initialized.h"
//## dependency Restart
#include "Restart.h"
//## dependency Resume
#include "Resume.h"
//## dependency SelfTestFailed
#include "SelfTestFailed.h"
//## dependency SelfTestOk
#include "SelfTestOk.h"
//## dependency Start
#include "Start.h"
//## dependency Stop
#include "Stop.h"
//## dependency Suspend
#include "Suspend.h"
//## dependency RunRealTime
class RunRealTime;

//## dependency Simulate
class Simulate;

//## dependency Stop
class Stop;

//## dependency Suspend
class Suspend;

//## dependency Start
class Start;

//## dependency Restart
class Restart;

//## dependency ChMode
class ChMode;

//## dependency ConfigurationEnded
class ConfigurationEnded;

//## dependency Creator
class Creator;

//## dependency Initialized
class Initialized;

//## package Application::Discrete

//## class Test2
Test2::Test2() {
}

Test2::~Test2() {
}

void Test2::CreateTestCommands() {
    //#[ operation CreateTestCommands()
    Display(">>>>>> CreateTest2 <<<<<<");
    addItsCommand(pSelfTestOkCreator->CreateCommand());
    addItsCommand(pInitializedCreator->CreateCommand());
    addItsCommand(pConfigureCreator->CreateCommand()); 
    addItsCommand(pConfigurationEndedCreator->CreateCommand()); 
    addItsCommand(pStartCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pSuspendCreator->CreateCommand()); 
    addItsCommand(pResumeCreator->CreateCommand());     
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pchModeCreator->CreateCommand()); 
    addItsCommand(pRestartCreator->CreateCommand()); 
    //#]
}

Test2::Test2(EmbeddedSystemX* esx) {
    //#[ operation Test2(EmbeddedSystemX*)
    itsEmbeddedSystemX = esx;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/Test2.cpp
*********************************************************************/
