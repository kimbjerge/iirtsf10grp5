/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Waveform
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Waveform.cpp
*********************************************************************/

//## auto_generated
#include "Waveform.h"
//## link itsPatientModel
#include "PatientModel.h"
//## package Application

//## class Waveform
Waveform::Waveform() {
    itsPatientModel = NULL;
}

Waveform::~Waveform() {
    cleanUpRelations();
}

PatientModel* Waveform::getItsPatientModel() const {
    return itsPatientModel;
}

void Waveform::setItsPatientModel(PatientModel* p_PatientModel) {
    if(p_PatientModel != NULL)
        {
            p_PatientModel->_setItsWaveform(this);
        }
    _setItsPatientModel(p_PatientModel);
}

void Waveform::cleanUpRelations() {
    if(itsPatientModel != NULL)
        {
            Waveform* p_Waveform = itsPatientModel->getItsWaveform();
            if(p_Waveform != NULL)
                {
                    itsPatientModel->__setItsWaveform(NULL);
                }
            itsPatientModel = NULL;
        }
}

void Waveform::__setItsPatientModel(PatientModel* p_PatientModel) {
    itsPatientModel = p_PatientModel;
}

void Waveform::_setItsPatientModel(PatientModel* p_PatientModel) {
    if(itsPatientModel != NULL)
        {
            itsPatientModel->__setItsWaveform(NULL);
        }
    __setItsPatientModel(p_PatientModel);
}

void Waveform::_clearItsPatientModel() {
    itsPatientModel = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Waveform.cpp
*********************************************************************/
