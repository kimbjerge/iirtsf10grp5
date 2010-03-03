/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: EmbeddedSystemX
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/EmbeddedSystemX.h
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

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## operation setStrategy(EventStrategy*)
class EventStrategy;

//## link itsRealTimeThread
class RealTimeThread;

//## operation ChangeState(ESXState*)
class ESXState;

//## package Discrete

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
    
    //## operation responseEventX()
    void responseEventX();
    
    //## operation responseEventY()
    void responseEventY();
    
    //## operation setStrategy(EventStrategy*)
    void setStrategy(EventStrategy* aStrategy);
    
    //## auto_generated
    RealTimeThread* getItsRealTimeThread() const;
    
    //## auto_generated
    void setItsRealTimeThread(RealTimeThread* p_RealTimeThread);

protected :

    RealTimeThread* itsRealTimeThread;		//## link itsRealTimeThread
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/EmbeddedSystemX.h
*********************************************************************/
