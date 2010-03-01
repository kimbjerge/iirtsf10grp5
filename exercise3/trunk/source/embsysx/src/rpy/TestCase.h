/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: TestCase
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/TestCase.h
*********************************************************************/

#ifndef TestCase_H
#define TestCase_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## link itsCommand
class Command;

//## dependency CommandCreator
#include "CommandCreator.h"
//## auto_generated
#include <oxf/omcollec.h>
//## dependency Creator
class Creator;

//## dependency Initialized
class Initialized;

//## dependency Restart
class Restart;

//## dependency SelfTestOk
class SelfTestOk;

//## link itsEmbeddedSystemX
class EmbeddedSystemX;

//## package Default

//## class TestCase
class TestCase {
    ////    Friends    ////
    
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation PerformTest()
    void PerformTest();

protected :

    //## operation CreateTestCommands()
    virtual void CreateTestCommands() = 0;
    
    //## operation Display(char*)
    void Display(char* name);

private :

    //## operation ExecuteTestCommands()
    void ExecuteTestCommands();
    
    ////    Additional operations    ////

public :

    //## auto_generated
    OMIterator<Command*> getItsCommand() const;
    
    //## auto_generated
    void addItsCommand(Command* p_Command);
    
    //## auto_generated
    void removeItsCommand(Command* p_Command);
    
    //## auto_generated
    void clearItsCommand();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    OMCollection<Command*> itsCommand;		//## link itsCommand

private :

    //## operation CreateCreators()
    void CreateCreators();

public :

    //## auto_generated
    EmbeddedSystemX* getItsEmbeddedSystemX() const;
    
    //## auto_generated
    void setItsEmbeddedSystemX(EmbeddedSystemX* p_EmbeddedSystemX);

protected :

    Creator* pSelfTestOkCreator;		//## attribute pSelfTestOkCreator
    
    EmbeddedSystemX* itsEmbeddedSystemX;		//## link itsEmbeddedSystemX

private :

    //## operation DestroyCreators()
    void DestroyCreators();

protected :

    Creator* pInitializedCreator;		//## attribute pInitializedCreator

public :

    //## operation TestCase()
    TestCase();

protected :

    //## auto_generated
    void setPInitializedCreator(Creator* p_pInitializedCreator);

public :

    //## operation ~TestCase()
    ~TestCase();

protected :

    //## auto_generated
    void setPRestart(Creator* p_pRestart);
    
    Creator* pRestart;		//## attribute pRestart
    
    //## auto_generated
    Creator* getPInitializedCreator() const;
    
    //## auto_generated
    Creator* getPRestart() const;
    
    //## auto_generated
    void setPSelfTestOkCreator(Creator* p_pSelfTestOkCreator);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/TestCase.h
*********************************************************************/
