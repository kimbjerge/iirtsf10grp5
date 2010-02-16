/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Operational
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Operational.h
*********************************************************************/

#ifndef Operational_H
#define Operational_H

//## auto_generated
#include <oxf/oxf.h>
//## class Operational
#include "ESXState.h"
//## operation Restart(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class Operational
class Operational : public ESXState {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    virtual ~Operational();
    
    ////    Operations    ////
    
    //## operation Restart(EmbeddedSystemX*)
    virtual void Restart(EmbeddedSystemX* esx);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    static Operational* _instance;		//## attribute _instance
    
    //## operation DisplayState()
    virtual void DisplayState();

public :

    //## auto_generated
    Operational();

private :

    //## auto_generated
    static Operational* get_instance();
    
    //## auto_generated
    static void set_instance(Operational* p__instance);
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/Operational.h
*********************************************************************/
