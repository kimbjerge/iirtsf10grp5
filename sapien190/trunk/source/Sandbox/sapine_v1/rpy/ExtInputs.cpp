/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ExtInputs
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ExtInputs.cpp
*********************************************************************/

//## auto_generated
#include "ExtInputs.h"
//## link itsPatientModel
#include "PatientModel.h"
//## package AbstractHW

//## class ExtInputs
ExtInputs::ExtInputs() {
    itsPatientModel = NULL;
}

ExtInputs::~ExtInputs() {
    cleanUpRelations();
}

PatientModel* ExtInputs::getItsPatientModel() const {
    return itsPatientModel;
}

void ExtInputs::setItsPatientModel(PatientModel* p_PatientModel) {
    if(p_PatientModel != NULL)
        {
            p_PatientModel->_setItsExtInputs(this);
        }
    _setItsPatientModel(p_PatientModel);
}

void ExtInputs::cleanUpRelations() {
    if(itsPatientModel != NULL)
        {
            ExtInputs* p_ExtInputs = itsPatientModel->getItsExtInputs();
            if(p_ExtInputs != NULL)
                {
                    itsPatientModel->__setItsExtInputs(NULL);
                }
            itsPatientModel = NULL;
        }
}

void ExtInputs::__setItsPatientModel(PatientModel* p_PatientModel) {
    itsPatientModel = p_PatientModel;
}

void ExtInputs::_setItsPatientModel(PatientModel* p_PatientModel) {
    if(itsPatientModel != NULL)
        {
            itsPatientModel->__setItsExtInputs(NULL);
        }
    __setItsPatientModel(p_PatientModel);
}

void ExtInputs::_clearItsPatientModel() {
    itsPatientModel = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ExtInputs.cpp
*********************************************************************/
