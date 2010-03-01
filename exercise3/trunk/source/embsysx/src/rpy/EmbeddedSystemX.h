/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: EmbeddedSystemX
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/EmbeddedSystemX.h
*********************************************************************/

#ifndef EmbeddedSystemX_H
#define EmbeddedSystemX_H

//## auto_generated
#include <oxf/oxf.h>
//## dependency Command
class Command;

//## dependency PowerOnSelfTest
class PowerOnSelfTest;

//## operation ChangeState(ESXState*)
class ESXState;

//## package Default

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
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/EmbeddedSystemX.h
*********************************************************************/
