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
//## link itsCommand
class Command;

//## dependency CommandCreator
#include "CommandCreator.h"
//## auto_generated
#include <oxf/omcollec.h>
//## dependency ChMode
class ChMode;

//## dependency ConfigurationEnded
class ConfigurationEnded;

//## dependency Configure
class Configure;

//## dependency Creator
class Creator;

//## dependency Exit
class Exit;

//## dependency Initialized
class Initialized;

//## dependency Restart
class Restart;

//## dependency Resume
class Resume;

//## dependency SelfTestFailed
class SelfTestFailed;

//## dependency SelfTestOk
class SelfTestOk;

//## dependency Start
class Start;

//## dependency Stop
class Stop;

//## dependency Suspend
class Suspend;

//## dependency eventX
class eventX;

//## dependency eventY
class eventY;

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

    Creator* pRestartCreator;		//## attribute pRestartCreator
    
    //## auto_generated
    Creator* getPConfigurationEndedCreator() const;
    
    //## auto_generated
    void setPConfigurationEndedCreator(Creator* p_pConfigurationEndedCreator);
    
    //## auto_generated
    Creator* getPConfigureCreator() const;
    
    //## auto_generated
    void setPConfigureCreator(Creator* p_pConfigureCreator);
    
    //## auto_generated
    Creator* getPExitCreator() const;
    
    //## auto_generated
    void setPExitCreator(Creator* p_pExitCreator);
    
    //## auto_generated
    Creator* getPInitializedCreator() const;
    
    //## auto_generated
    Creator* getPRestartCreator() const;
    
    //## auto_generated
    void setPRestartCreator(Creator* p_pRestartCreator);
    
    //## auto_generated
    Creator* getPResumeCreator() const;
    
    //## auto_generated
    void setPResumeCreator(Creator* p_pResumeCreator);
    
    //## auto_generated
    Creator* getPSelfTestFailedCreator() const;
    
    //## auto_generated
    void setPSelfTestFailedCreator(Creator* p_pSelfTestFailedCreator);
    
    //## auto_generated
    Creator* getPStartCreator() const;
    
    //## auto_generated
    void setPStartCreator(Creator* p_pStartCreator);
    
    //## auto_generated
    Creator* getPStopCreator() const;
    
    //## auto_generated
    void setPStopCreator(Creator* p_pStopCreator);
    
    //## auto_generated
    Creator* getPSuspendCreator() const;
    
    //## auto_generated
    void setPSuspendCreator(Creator* p_pSuspendCreator);
    
    //## auto_generated
    Creator* getPchModeCreator() const;
    
    //## auto_generated
    void setPchModeCreator(Creator* p_pchModeCreator);
    
    //## auto_generated
    Creator* getPeventXCreator() const;
    
    //## auto_generated
    void setPeventXCreator(Creator* p_peventXCreator);
    
    //## auto_generated
    Creator* getPeventYCreator() const;
    
    //## auto_generated
    void setPeventYCreator(Creator* p_peventYCreator);
    
    Creator* pConfigurationEndedCreator;		//## attribute pConfigurationEndedCreator
    
    Creator* pConfigureCreator;		//## attribute pConfigureCreator
    
    Creator* pExitCreator;		//## attribute pExitCreator
    
    Creator* pResumeCreator;		//## attribute pResumeCreator
    
    Creator* pSelfTestFailedCreator;		//## attribute pSelfTestFailedCreator
    
    Creator* pStartCreator;		//## attribute pStartCreator
    
    Creator* pStopCreator;		//## attribute pStopCreator
    
    Creator* pSuspendCreator;		//## attribute pSuspendCreator
    
    Creator* pchModeCreator;		//## attribute pchModeCreator
    
    Creator* peventXCreator;		//## attribute peventXCreator
    
    Creator* peventYCreator;		//## attribute peventYCreator
    
    //## auto_generated
    void setPSelfTestOkCreator(Creator* p_pSelfTestOkCreator);
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/TestCase.h
*********************************************************************/
