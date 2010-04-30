/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Waveform
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: DefaultComponent/DefaultConfig/Waveform.h
*********************************************************************/

#ifndef Waveform_H
#define Waveform_H

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
//## class Waveform
#include "Subject.h"
//## link itsPatientModel
class PatientModel;

//## package Application

//## class Waveform
class Waveform : public Subject {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Waveform();
    
    //## auto_generated
    ~Waveform();
    
    ////    Additional operations    ////
    
    //## auto_generated
    PatientModel* getItsPatientModel() const;
    
    //## auto_generated
    void setItsPatientModel(PatientModel* p_PatientModel);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    PatientModel* itsPatientModel;		//## link itsPatientModel
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsPatientModel(PatientModel* p_PatientModel);
    
    //## auto_generated
    void _setItsPatientModel(PatientModel* p_PatientModel);
    
    //## auto_generated
    void _clearItsPatientModel();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Waveform.h
*********************************************************************/
