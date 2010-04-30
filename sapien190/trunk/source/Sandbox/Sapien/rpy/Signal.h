/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Signal
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: DefaultComponent/DefaultConfig/Signal.h
*********************************************************************/

#ifndef Signal_H
#define Signal_H

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
#include "Application.h"
//## link itsExtOutAnalogue
class ExtOutAnalogue;

//## link itsExtOutDigital
class ExtOutDigital;

//## link itsPatientModel
class PatientModel;

//## package Application

//## class Signal
class Signal {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Signal();
    
    //## auto_generated
    ~Signal();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getItsExtOutAnalogue() const;
    
    //## auto_generated
    void addItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue);
    
    //## auto_generated
    void removeItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue);
    
    //## auto_generated
    void clearItsExtOutAnalogue();
    
    //## auto_generated
    ExtOutDigital* getItsExtOutDigital() const;
    
    //## auto_generated
    void setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital);
    
    //## auto_generated
    PatientModel* getItsPatientModel() const;
    
    //## auto_generated
    void setItsPatientModel(PatientModel* p_PatientModel);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ExtOutAnalogue* itsExtOutAnalogue[2];		//## link itsExtOutAnalogue
    
    ExtOutDigital* itsExtOutDigital;		//## link itsExtOutDigital
    
    PatientModel* itsPatientModel;		//## link itsPatientModel
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue);
    
    //## auto_generated
    void _removeItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue);
    
    //## auto_generated
    void _clearItsExtOutAnalogue();
    
    //## auto_generated
    void __setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital);
    
    //## auto_generated
    void _setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital);
    
    //## auto_generated
    void _clearItsExtOutDigital();
    
    //## auto_generated
    void __setItsPatientModel(PatientModel* p_PatientModel);
    
    //## auto_generated
    void _setItsPatientModel(PatientModel* p_PatientModel);
    
    //## auto_generated
    void _clearItsPatientModel();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Signal.h
*********************************************************************/
