/*********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: EmbeddedSystemX
//!	Generated Date	: Tue, 16, Feb 2010  
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/EmbeddedSystemX.h
*********************************************************************/

#ifndef EmbeddedSystemX_H
#define EmbeddedSystemX_H

//## auto_generated
#include <oxf/oxf.h>
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

    //## operation ConfigX()
    void ConfigX();
    
    //## operation ConfigurationEnded()
    void ConfigurationEnded();
    
    //## operation Configure()
    void Configure();
    
    //## operation Exit()
    void Exit();
    
    //## operation Initialized()
    void Initialized();
    
    //## operation Restart()
    void Restart();
    
    //## operation Resume()
    void Resume();
    
    //## operation SelfTestFailed(int)
    void SelfTestFailed(int ErrorNo);
    
    //## operation SelftestOk()
    void SelftestOk();
    
    //## operation Start()
    void Start();
    
    //## operation Stop()
    void Stop();
    
    //## operation Suspend()
    void Suspend();
    
    //## operation chMode()
    void chMode();
    
    //## operation eventX()
    void eventX();
    
    //## operation eventY()
    void eventY();
    
    //## operation EmbeddedSystemX()
    EmbeddedSystemX();
};

#endif
/*********************************************************************
	File Path	: C:/Projects/TIIRTS/exercise1/source/embsysx/src/rpy/EmbeddedSystemX.h
*********************************************************************/
