/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: TestCase
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/TestCase.cpp
*********************************************************************/

//## auto_generated
#include "TestCase.h"
//## link itsEmbeddedSystemX
#include "EmbeddedSystemX.h"
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
//## dependency RunRealTime
#include "RunRealTime.h"
//## dependency SelfTestFailed
#include "SelfTestFailed.h"
//## dependency SelfTestOk
#include "SelfTestOk.h"
//## dependency Simulate
#include "Simulate.h"
//## dependency Start
#include "Start.h"
//## dependency Stop
#include "Stop.h"
//## dependency Suspend
#include "Suspend.h"
//## package Application::Discrete

//## class TestCase
void TestCase::PerformTest() {
    //#[ operation PerformTest()
    // Template Method
    CreateTestCommands();
    ExecuteTestCommands();
    DestroyTestCommands();
    //#]
}

void TestCase::Display(char* name) {
    //#[ operation Display(char*)
    std::cout << name << std::endl;
    //#]
}

void TestCase::ExecuteTestCommands() {
    //#[ operation ExecuteTestCommands()
    Display("ExecuteTestCase");
    std::list<Command*>::const_iterator iter;
    iter = itsCommand.begin();
    while (iter != itsCommand.end()){
        Command *pCommand = *iter;
        itsEmbeddedSystemX->HandleCommand(pCommand);
        iter++;
    }
    //#]
}

std::list<Command*>::const_iterator TestCase::getItsCommand() const {
    std::list<Command*>::const_iterator iter;
    iter = itsCommand.begin();
    return iter;
}

void TestCase::addItsCommand(Command* p_Command) {
    itsCommand.push_back(p_Command);
}

void TestCase::removeItsCommand(Command* p_Command) {
    std::list<Command*>::iterator pos = std::find(itsCommand.begin(), itsCommand.end(),p_Command);
    if (pos != itsCommand.end()) {
    	itsCommand.erase(pos);
    }
}

void TestCase::clearItsCommand() {
    itsCommand.clear();
}

void TestCase::cleanUpRelations() {
    {
        itsCommand.clear();
    }
    if(itsEmbeddedSystemX != NULL)
        {
            itsEmbeddedSystemX = NULL;
        }
}

void TestCase::CreateCreators() {
    //#[ operation CreateCreators()
    pSelfTestOkCreator = new CommandCreator<SelfTestOk>;
    pInitializedCreator = new CommandCreator<Initialized>;
    pRestartCreator = new CommandCreator<Restart>;
    pExitCreator = new CommandCreator<Exit>;
    pConfigureCreator = new CommandCreator<Configure>;
    pConfigurationEndedCreator = new CommandCreator<ConfigurationEnded>;
    pStopCreator = new CommandCreator<Stop>;
    pStartCreator = new CommandCreator<Start>;
    pSuspendCreator = new CommandCreator<Suspend>;
    pResumeCreator = new CommandCreator<Resume>;
    pSelfTestFailedCreator = new CommandCreator<SelfTestFailed>;
    pchModeCreator = new CommandCreator<ChMode>; 
    pSimulateCreator = new CommandCreator<Simulate>;
    pRunRealTimeCreator = new CommandCreator<RunRealTime>;
    //#]
}

EmbeddedSystemX* TestCase::getItsEmbeddedSystemX() const {
    return itsEmbeddedSystemX;
}

void TestCase::setItsEmbeddedSystemX(EmbeddedSystemX* p_EmbeddedSystemX) {
    itsEmbeddedSystemX = p_EmbeddedSystemX;
}

void TestCase::DestroyCreators() {
    //#[ operation DestroyCreators()
    delete pSelfTestOkCreator;
    delete pInitializedCreator;
    delete pRestartCreator;
    delete pExitCreator;
    delete pConfigureCreator;
    delete pConfigurationEndedCreator;
    delete pStopCreator;
    delete pStartCreator;
    delete pSuspendCreator;
    delete pResumeCreator;
    delete pSelfTestFailedCreator;
    delete pchModeCreator; 
    delete pSimulateCreator;
    delete pRunRealTimeCreator;
    //#]
}

TestCase::TestCase() {
    itsEmbeddedSystemX = NULL;
    //#[ operation TestCase()
    CreateCreators();
    //#]
}

void TestCase::setPInitializedCreator(Creator* p_pInitializedCreator) {
    pInitializedCreator = p_pInitializedCreator;
}

TestCase::~TestCase() {
    //#[ operation ~TestCase()
    DestroyCreators();
    //#]
    cleanUpRelations();
}

void TestCase::setPConfigurationEndedCreator(Creator* p_pConfigurationEndedCreator) {
    pConfigurationEndedCreator = p_pConfigurationEndedCreator;
}

void TestCase::setPConfigureCreator(Creator* p_pConfigureCreator) {
    pConfigureCreator = p_pConfigureCreator;
}

void TestCase::setPExitCreator(Creator* p_pExitCreator) {
    pExitCreator = p_pExitCreator;
}

void TestCase::setPRestartCreator(Creator* p_pRestartCreator) {
    pRestartCreator = p_pRestartCreator;
}

void TestCase::setPResumeCreator(Creator* p_pResumeCreator) {
    pResumeCreator = p_pResumeCreator;
}

void TestCase::setPSelfTestFailedCreator(Creator* p_pSelfTestFailedCreator) {
    pSelfTestFailedCreator = p_pSelfTestFailedCreator;
}

void TestCase::setPStartCreator(Creator* p_pStartCreator) {
    pStartCreator = p_pStartCreator;
}

void TestCase::setPStopCreator(Creator* p_pStopCreator) {
    pStopCreator = p_pStopCreator;
}

void TestCase::setPSuspendCreator(Creator* p_pSuspendCreator) {
    pSuspendCreator = p_pSuspendCreator;
}

void TestCase::setPchModeCreator(Creator* p_pchModeCreator) {
    pchModeCreator = p_pchModeCreator;
}

std::list<Command*>::const_iterator TestCase::getItsCommandEnd() const {
    return itsCommand.end();
}

void TestCase::setPRunRealTimeCreator(Creator* p_pRunRealTimeCreator) {
    pRunRealTimeCreator = p_pRunRealTimeCreator;
}

void TestCase::setPSimulateCreator(Creator* p_pSimulateCreator) {
    pSimulateCreator = p_pSimulateCreator;
}

Creator* TestCase::getPConfigurationEndedCreator() const {
    return pConfigurationEndedCreator;
}

Creator* TestCase::getPConfigureCreator() const {
    return pConfigureCreator;
}

Creator* TestCase::getPExitCreator() const {
    return pExitCreator;
}

Creator* TestCase::getPInitializedCreator() const {
    return pInitializedCreator;
}

Creator* TestCase::getPRestartCreator() const {
    return pRestartCreator;
}

Creator* TestCase::getPResumeCreator() const {
    return pResumeCreator;
}

Creator* TestCase::getPRunRealTimeCreator() const {
    return pRunRealTimeCreator;
}

Creator* TestCase::getPSelfTestFailedCreator() const {
    return pSelfTestFailedCreator;
}

Creator* TestCase::getPSimulateCreator() const {
    return pSimulateCreator;
}

Creator* TestCase::getPStartCreator() const {
    return pStartCreator;
}

Creator* TestCase::getPStopCreator() const {
    return pStopCreator;
}

Creator* TestCase::getPSuspendCreator() const {
    return pSuspendCreator;
}

Creator* TestCase::getPchModeCreator() const {
    return pchModeCreator;
}

void TestCase::DestroyTestCommands() {
    //#[ operation DestroyTestCommands()
    Display(">>>>>> Destroy Test <<<<<<"); 
    clearItsCommand();
    //#]
}

void TestCase::setPSelfTestOkCreator(Creator* p_pSelfTestOkCreator) {
    pSelfTestOkCreator = p_pSelfTestOkCreator;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/TestCase.cpp
*********************************************************************/
