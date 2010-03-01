/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Initializing
//!	Generated Date	: Mon, 1, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Initializing.h
*********************************************************************/

#ifndef Initializing_H
#define Initializing_H

//## auto_generated
#include <oxf/oxf.h>
//## class Initializing
#include "ESXState.h"
//## auto_generated
#include "Default.h"
//## dependency Ready
class Ready;

//## operation Initialized(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class Initializing
class Initializing : public ESXState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Initializing();
    
    //## auto_generated
    virtual ~Initializing();
    
    ////    Operations    ////
    
    //## operation Initialized(EmbeddedSystemX*)
    virtual void Initialized(EmbeddedSystemX* esx);
    
    //## operation Instance()
    static ESXState* Instance();
    
    ////    Additional operations    ////

private :

    //## auto_generated
    static void set_instance(ESXState* p__instance);
    
    ////    Attributes    ////

protected :

    static ESXState* _instance;		//## attribute _instance
    
    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static ESXState* get_instance();
};

#endif
/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise3/source/embsysx/src/rpy/Initializing.h
*********************************************************************/
