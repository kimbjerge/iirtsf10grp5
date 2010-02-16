/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Ready
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Ready.h
*********************************************************************/

#ifndef Ready_H
#define Ready_H

//## auto_generated
#include <oxf/oxf.h>
//## class Ready
#include "Operational.h"
//## dependency Configuration
#include "Configuration.h"
//## dependency Mode1
class Mode1;

//## operation Instance()
class ESXState;

//## operation Configure(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class Ready
class Ready : public Operational {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Ready();
    
    //## auto_generated
    virtual ~Ready();
    
    ////    Operations    ////
    
    //## operation Configure(EmbeddedSystemX*)
    virtual void Configure(EmbeddedSystemX* esx);
    
    //## operation Instance()
    static ESXState* Instance();
    
    //## operation Start(EmbeddedSystemX*)
    virtual void Start(EmbeddedSystemX* esx);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    static ESXState* _instance;		//## attribute _instance
    
    //## operation DisplayState()
    virtual void DisplayState();

private :

    //## auto_generated
    static void set_instance(ESXState* p__instance);
    
    //## auto_generated
    static ESXState* get_instance();
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Ready.h
*********************************************************************/
