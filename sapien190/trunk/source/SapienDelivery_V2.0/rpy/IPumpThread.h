/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: IPumpThread
//!	Generated Date	: Fri, 21, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpThread.h
*********************************************************************/

#ifndef IPumpThread_H
#define IPumpThread_H

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
//## link itsExtInputs
class ExtInputs;

//## link itsIPumpProtocol
class IPumpProtocol;

//## package Comm

//## class IPumpThread
class IPumpThread {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    IPumpThread();
    
    //## auto_generated
    ~IPumpThread();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ExtInputs* getItsExtInputs() const;
    
    //## auto_generated
    void setItsExtInputs(ExtInputs* p_ExtInputs);
    
    //## auto_generated
    IPumpProtocol* getItsIPumpProtocol() const;
    
    //## auto_generated
    void setItsIPumpProtocol(IPumpProtocol* p_IPumpProtocol);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ExtInputs* itsExtInputs;		//## link itsExtInputs
    
    IPumpProtocol* itsIPumpProtocol;		//## link itsIPumpProtocol
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpThread.h
*********************************************************************/
