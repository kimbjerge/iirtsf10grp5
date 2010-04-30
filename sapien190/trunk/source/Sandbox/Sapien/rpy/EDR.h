/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: EDR
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/EDR.h
*********************************************************************/

#ifndef EDR_H
#define EDR_H

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
//## class EDR
#include "Signal.h"
//## link itsECG
class ECG;

//## auto_generated
class ExtOutAnalogue;

//## auto_generated
class ExtOutDigital;

//## auto_generated
class PatientModel;

//## package Application

//## class EDR
class EDR : public Signal {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EDR();
    
    //## auto_generated
    ~EDR();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ECG* getItsECG() const;
    
    //## auto_generated
    void setItsECG(ECG* p_ECG);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ECG* itsECG;		//## link itsECG
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsECG(ECG* p_ECG);
    
    //## auto_generated
    void _setItsECG(ECG* p_ECG);
    
    //## auto_generated
    void _clearItsECG();
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/EDR.h
*********************************************************************/
