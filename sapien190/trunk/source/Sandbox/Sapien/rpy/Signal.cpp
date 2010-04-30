/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Signal
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Signal.cpp
*********************************************************************/

//## auto_generated
#include "Signal.h"
//## link itsExtOutAnalogue
#include "ExtOutAnalogue.h"
//## link itsExtOutDigital
#include "ExtOutDigital.h"
//## link itsPatientModel
#include "PatientModel.h"
//## package Application

//## class Signal
Signal::Signal() {
    {
        for (int pos = 0; pos < 2; pos++) {
        	itsExtOutAnalogue[pos] = NULL;
        }
    }
    itsExtOutDigital = NULL;
    itsPatientModel = NULL;
}

Signal::~Signal() {
    cleanUpRelations();
}

int Signal::getItsExtOutAnalogue() const {
    int iter = 0;
    return iter;
}

void Signal::addItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue) {
    if(p_ExtOutAnalogue != NULL)
        {
            p_ExtOutAnalogue->_setItsSignal(this);
        }
    _addItsExtOutAnalogue(p_ExtOutAnalogue);
}

void Signal::removeItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue) {
    if(p_ExtOutAnalogue != NULL)
        {
            p_ExtOutAnalogue->__setItsSignal(NULL);
        }
    _removeItsExtOutAnalogue(p_ExtOutAnalogue);
}

void Signal::clearItsExtOutAnalogue() {
    int iter = 0;
    while (iter < 2){
        (itsExtOutAnalogue[iter])->_clearItsSignal();
        iter++;
    }
    _clearItsExtOutAnalogue();
}

ExtOutDigital* Signal::getItsExtOutDigital() const {
    return itsExtOutDigital;
}

void Signal::setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital) {
    if(p_ExtOutDigital != NULL)
        {
            p_ExtOutDigital->_setItsSignal(this);
        }
    _setItsExtOutDigital(p_ExtOutDigital);
}

PatientModel* Signal::getItsPatientModel() const {
    return itsPatientModel;
}

void Signal::setItsPatientModel(PatientModel* p_PatientModel) {
    if(p_PatientModel != NULL)
        {
            p_PatientModel->_addItsSignal(this);
        }
    _setItsPatientModel(p_PatientModel);
}

void Signal::cleanUpRelations() {
    {
        int iter = 0;
        while (iter < 2){
            Signal* p_Signal = (itsExtOutAnalogue[iter])->getItsSignal();
            if(p_Signal != NULL)
                {
                    (itsExtOutAnalogue[iter])->__setItsSignal(NULL);
                }
            iter++;
        }
    }
    if(itsExtOutDigital != NULL)
        {
            Signal* p_Signal = itsExtOutDigital->getItsSignal();
            if(p_Signal != NULL)
                {
                    itsExtOutDigital->__setItsSignal(NULL);
                }
            itsExtOutDigital = NULL;
        }
    if(itsPatientModel != NULL)
        {
            PatientModel* current = itsPatientModel;
            if(current != NULL)
                {
                    current->_removeItsSignal(this);
                }
            itsPatientModel = NULL;
        }
}

void Signal::_addItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue) {
    for (int pos = 0; pos < 2; pos++) {
    	if (!itsExtOutAnalogue[pos]) {
    		itsExtOutAnalogue[pos] = p_ExtOutAnalogue;
    		break;
    	}
    }
}

void Signal::_removeItsExtOutAnalogue(ExtOutAnalogue* p_ExtOutAnalogue) {
    for (int pos = 0; pos < 2; pos++) {
    	if (itsExtOutAnalogue[pos] == p_ExtOutAnalogue) {
    		itsExtOutAnalogue[pos] = NULL;
    	}
    }
}

void Signal::_clearItsExtOutAnalogue() {
}

void Signal::__setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital) {
    itsExtOutDigital = p_ExtOutDigital;
}

void Signal::_setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital) {
    if(itsExtOutDigital != NULL)
        {
            itsExtOutDigital->__setItsSignal(NULL);
        }
    __setItsExtOutDigital(p_ExtOutDigital);
}

void Signal::_clearItsExtOutDigital() {
    itsExtOutDigital = NULL;
}

void Signal::__setItsPatientModel(PatientModel* p_PatientModel) {
    itsPatientModel = p_PatientModel;
}

void Signal::_setItsPatientModel(PatientModel* p_PatientModel) {
    if(itsPatientModel != NULL)
        {
            itsPatientModel->_removeItsSignal(this);
        }
    __setItsPatientModel(p_PatientModel);
}

void Signal::_clearItsPatientModel() {
    itsPatientModel = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Signal.cpp
*********************************************************************/
