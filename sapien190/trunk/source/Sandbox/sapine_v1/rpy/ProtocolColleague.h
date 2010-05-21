/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ProtocolColleague
//!	Generated Date	: Tue, 18, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ProtocolColleague.h
*********************************************************************/

#ifndef ProtocolColleague_H
#define ProtocolColleague_H

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
#include "wfdb/wfdb.h"
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## auto_generated
#include "Continuous.h"
//## link itsModelMediator
class ModelMediator;

//## package Application::Continuous

//## class ProtocolColleague
class ProtocolColleague {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ProtocolColleague();
    
    //## auto_generated
    ~ProtocolColleague();
    
    ////    Operations    ////
    
    //## operation Changed()
    void Changed();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ModelMediator* getItsModelMediator() const;
    
    //## auto_generated
    void setItsModelMediator(ModelMediator* p_ModelMediator);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ModelMediator* itsModelMediator;		//## link itsModelMediator
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ProtocolColleague.h
*********************************************************************/
