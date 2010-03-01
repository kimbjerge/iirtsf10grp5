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
//## dependency Creator
#include "Creator.h"
//## dependency Initialized
#include "Initialized.h"
//## dependency Restart
#include "Restart.h"
//## dependency SelfTestOk
#include "SelfTestOk.h"
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
    pRestart = new CommandCreator<Restart>;
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

void TestCase::setPRestart(Creator* p_pRestart) {
    pRestart = p_pRestart;
}

Creator* TestCase::getPInitializedCreator() const {
    return pInitializedCreator;
}

Creator* TestCase::getPRestart() const {
    return pRestart;
}

void TestCase::setPSelfTestOkCreator(Creator* p_pSelfTestOkCreator) {
    pSelfTestOkCreator = p_pSelfTestOkCreator;
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/TestCase.cpp
*********************************************************************/
