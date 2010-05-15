/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: IPumpProtocol
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpProtocol.h
*********************************************************************/

#ifndef IPumpProtocol_H
#define IPumpProtocol_H

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

//## package Comm

//## class IPumpProtocol
class IPumpProtocol {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    IPumpProtocol();
    
    //## auto_generated
    ~IPumpProtocol();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ExtInputs* getItsExtInputs() const;
    
    //## auto_generated
    void setItsExtInputs(ExtInputs* p_ExtInputs);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ExtInputs* itsExtInputs;		//## link itsExtInputs
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/IPumpProtocol.h
*********************************************************************/
