/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: Operational
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Operational.h
*********************************************************************/

#ifndef Operational_H
#define Operational_H

//## auto_generated
#include <oxf/oxf.h>
//## class Operational
#include "ESXState.h"
//## operation ChangeSubState(OpState*)
class OpState;

//## operation ConfigurationEnded(EmbeddedSystemX*)
class EmbeddedSystemX;

//## package Default

//## class Operational
class Operational : public ESXState {
public :

    friend class OpState;
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    virtual ~Operational();
    
    ////    Operations    ////
    
    //## operation Instance()
    static Operational* Instance();
    
    //## operation Restart(EmbeddedSystemX*)
    virtual void Restart(EmbeddedSystemX* esx);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    static Operational* _instance;		//## attribute _instance

public :

    //## operation Operational()
    Operational();
    
    //## operation ConfigurationEnded(EmbeddedSystemX*)
    virtual void ConfigurationEnded(EmbeddedSystemX* esx);
    
    //## operation Configure(EmbeddedSystemX*)
    virtual void Configure(EmbeddedSystemX* esx);
    
    //## operation Resume(EmbeddedSystemX*)
    virtual void Resume(EmbeddedSystemX* esx);
    
    //## operation Start(EmbeddedSystemX*)
    virtual void Start(EmbeddedSystemX* esx);
    
    //## operation Stop(EmbeddedSystemX*)
    virtual void Stop(EmbeddedSystemX* esx);
    
    //## operation Suspend(EmbeddedSystemX*)
    virtual void Suspend(EmbeddedSystemX* esx);

protected :

    //## auto_generated
    void cleanUpRelations();

private :

    //## operation ChangeSubState(OpState*)
    void ChangeSubState(OpState* state);

public :

    //## auto_generated
    OpState* getItsOpState() const;
    
    //## auto_generated
    void setItsOpState(OpState* p_OpState);

protected :

    OpState* itsOpState;		//## link itsOpState
    
    //## operation DisplayState()
    virtual void DisplayState();

public :

    //## operation chMode(EmbeddedSystemX *)
    virtual void chMode(EmbeddedSystemX * esx);

private :

    //## auto_generated
    static Operational* get_instance();
    
    //## auto_generated
    static void set_instance(Operational* p__instance);
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/Operational.h
*********************************************************************/
