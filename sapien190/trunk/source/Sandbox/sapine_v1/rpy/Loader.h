/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Loader
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Loader.h
*********************************************************************/

#ifndef Loader_H
#define Loader_H

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
//## link itsConThread
class ConThread;

//## package Application::Discrete

//## class Loader
class Loader {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Loader();
    
    //## auto_generated
    ~Loader();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ConThread* getItsConThread() const;
    
    //## auto_generated
    void setItsConThread(ConThread* p_ConThread);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ConThread* itsConThread;		//## link itsConThread
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Loader.h
*********************************************************************/
