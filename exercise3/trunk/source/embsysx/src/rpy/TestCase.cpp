/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: TestCase
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/TestCase.cpp
*********************************************************************/

//## auto_generated
#include "TestCase.h"
//## link itsEmbeddedSystemX
#include "EmbeddedSystemX.h"
//## link itsCommand
#include "Command.h"
//## dependency ChMode
#include "ChMode.h"
//## dependency ConfigurationEnded
#include "ConfigurationEnded.h"
//## dependency Configure
#include "Configure.h"
//## dependency Creator
#include "Creator.h"
//## dependency eventX
#include "eventX.h"
//## dependency eventY
#include "eventY.h"
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
//## package Default

//## class TestCase
void TestCase::PerformTest() {
    //#[ operation PerformTest()
    // Template Method
    CreateTestCommands();
    ExecuteTestCommands();
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

OMIterator<Command*> TestCase::getItsCommand() const {
    OMIterator<Command*> iter(itsCommand);
    return iter;
}

void TestCase::addItsCommand(Command* p_Command) {
    itsCommand.add(p_Command);
}

void TestCase::removeItsCommand(Command* p_Command) {
    itsCommand.remove(p_Command);
}

void TestCase::clearItsCommand() {
    itsCommand.removeAll();
}

void TestCase::cleanUpRelations() {
    {
        itsCommand.removeAll();
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
    peventXCreator = new CommandCreator<eventX>;
    peventYCreator = new CommandCreator<eventY>;
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

Creator* TestCase::getPConfigurationEndedCreator() const {
    return pConfigurationEndedCreator;
}

void TestCase::setPConfigurationEndedCreator(Creator* p_pConfigurationEndedCreator) {
    pConfigurationEndedCreator = p_pConfigurationEndedCreator;
}

Creator* TestCase::getPConfigureCreator() const {
    return pConfigureCreator;
}

void TestCase::setPConfigureCreator(Creator* p_pConfigureCreator) {
    pConfigureCreator = p_pConfigureCreator;
}

Creator* TestCase::getPExitCreator() const {
    return pExitCreator;
}

void TestCase::setPExitCreator(Creator* p_pExitCreator) {
    pExitCreator = p_pExitCreator;
}

Creator* TestCase::getPInitializedCreator() const {
    return pInitializedCreator;
}

Creator* TestCase::getPRestartCreator() const {
    return pRestartCreator;
}

void TestCase::setPRestartCreator(Creator* p_pRestartCreator) {
    pRestartCreator = p_pRestartCreator;
}

Creator* TestCase::getPResumeCreator() const {
    return pResumeCreator;
}

void TestCase::setPResumeCreator(Creator* p_pResumeCreator) {
    pResumeCreator = p_pResumeCreator;
}

Creator* TestCase::getPSelfTestFailedCreator() const {
    return pSelfTestFailedCreator;
}

void TestCase::setPSelfTestFailedCreator(Creator* p_pSelfTestFailedCreator) {
    pSelfTestFailedCreator = p_pSelfTestFailedCreator;
}

Creator* TestCase::getPStartCreator() const {
    return pStartCreator;
}

void TestCase::setPStartCreator(Creator* p_pStartCreator) {
    pStartCreator = p_pStartCreator;
}

Creator* TestCase::getPStopCreator() const {
    return pStopCreator;
}

void TestCase::setPStopCreator(Creator* p_pStopCreator) {
    pStopCreator = p_pStopCreator;
}

Creator* TestCase::getPSuspendCreator() const {
    return pSuspendCreator;
}

void TestCase::setPSuspendCreator(Creator* p_pSuspendCreator) {
    pSuspendCreator = p_pSuspendCreator;
}

Creator* TestCase::getPchModeCreator() const {
    return pchModeCreator;
}

void TestCase::setPchModeCreator(Creator* p_pchModeCreator) {
    pchModeCreator = p_pchModeCreator;
}

Creator* TestCase::getPeventXCreator() const {
    return peventXCreator;
}

void TestCase::setPeventXCreator(Creator* p_peventXCreator) {
    peventXCreator = p_peventXCreator;
}

Creator* TestCase::getPeventYCreator() const {
    return peventYCreator;
}

void TestCase::setPeventYCreator(Creator* p_peventYCreator) {
    peventYCreator = p_peventYCreator;
}

void TestCase::setPSelfTestOkCreator(Creator* p_pSelfTestOkCreator) {
    pSelfTestOkCreator = p_pSelfTestOkCreator;
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/TestCase.cpp
*********************************************************************/
