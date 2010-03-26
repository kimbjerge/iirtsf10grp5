/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: EmbeddedSystemX
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/EmbeddedSystemX.h
*********************************************************************/

#ifndef EmbeddedSystemX_H
#define EmbeddedSystemX_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Discrete.h"
//## dependency Command
class Command;

//## dependency EventStrategy
class EventStrategy;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## link itsRealTimeThread
class RealTimeThread;

//## operation ChangeState(ESXState*)
class ESXState;

//## package Application::Discrete

//## class EmbeddedSystemX
class EmbeddedSystemX {
public :

    friend class ESXState;
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    ~EmbeddedSystemX();
    
    ////    Operations    ////

private :

    //## operation ChangeState(ESXState*)
    void ChangeState(ESXState* s);
    
    ////    Additional operations    ////

public :

    //## auto_generated
    ESXState* getItsESXState() const;
    
    //## auto_generated
    void setItsESXState(ESXState* p_ESXState);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ESXState* itsESXState;		//## link itsESXState
    
    ////    Framework operations    ////

public :

    //## operation EmbeddedSystemX()
    EmbeddedSystemX();
    
    //## operation HandleCommand(Command*)
    void HandleCommand(Command* pCommand);
    
    //## operation setStrategy(EventStrategy*)
    void setStrategy(EventStrategy* aStrategy);
    
    //## auto_generated
    RealTimeThread* getItsRealTimeThread() const;
    
    //## auto_generated
    void setItsRealTimeThread(RealTimeThread* p_RealTimeThread);

protected :

    RealTimeThread* itsRealTimeThread;		//## link itsRealTimeThread

public :

    //## operation start()
    void start();
    
    //## operation kill()
    void kill();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/EmbeddedSystemX.h
*********************************************************************/
