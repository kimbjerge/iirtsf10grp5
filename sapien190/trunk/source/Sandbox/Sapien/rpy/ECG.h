/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECG
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ECG.h
*********************************************************************/

#ifndef ECG_H
#define ECG_H

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
//## class ECG
#include "Signal.h"
//## link itsEDR
class EDR;

//## auto_generated
class ExtOutAnalogue;

//## auto_generated
class ExtOutDigital;

//## auto_generated
class PatientModel;

//## package Application

//## class ECG
class ECG : public Signal {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ECG();
    
    //## auto_generated
    ~ECG();
    
    ////    Additional operations    ////
    
    //## auto_generated
    EDR* getItsEDR() const;
    
    //## auto_generated
    void setItsEDR(EDR* p_EDR);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    EDR* itsEDR;		//## link itsEDR
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsEDR(EDR* p_EDR);
    
    //## auto_generated
    void _setItsEDR(EDR* p_EDR);
    
    //## auto_generated
    void _clearItsEDR();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ECG.h
*********************************************************************/
