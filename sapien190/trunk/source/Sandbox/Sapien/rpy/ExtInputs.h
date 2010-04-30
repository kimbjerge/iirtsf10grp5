/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ExtInputs
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ExtInputs.h
*********************************************************************/

#ifndef ExtInputs_H
#define ExtInputs_H

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
//## link itsPatientModel
class PatientModel;

//## package AbstractHW

//## class ExtInputs
class ExtInputs {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ExtInputs();
    
    //## auto_generated
    ~ExtInputs();
    
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
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ExtInputs.h
*********************************************************************/
