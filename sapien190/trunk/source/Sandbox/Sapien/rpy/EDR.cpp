/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: EDR
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/EDR.cpp
*********************************************************************/

//## auto_generated
#include "EDR.h"
//## link itsECG
#include "ECG.h"
//## auto_generated
#include "ExtOutAnalogue.h"
//## auto_generated
#include "ExtOutDigital.h"
//## auto_generated
#include "PatientModel.h"
//## package Application

//## class EDR
EDR::EDR() {
    itsECG = NULL;
}

EDR::~EDR() {
    cleanUpRelations();
}

ECG* EDR::getItsECG() const {
    return itsECG;
}

void EDR::setItsECG(ECG* p_ECG) {
    if(p_ECG != NULL)
        {
            p_ECG->_setItsEDR(this);
        }
    _setItsECG(p_ECG);
}

void EDR::cleanUpRelations() {
    if(itsECG != NULL)
        {
            EDR* p_EDR = itsECG->getItsEDR();
            if(p_EDR != NULL)
                {
                    itsECG->__setItsEDR(NULL);
                }
            itsECG = NULL;
        }
}

void EDR::__setItsECG(ECG* p_ECG) {
    itsECG = p_ECG;
}

void EDR::_setItsECG(ECG* p_ECG) {
    if(itsECG != NULL)
        {
            itsECG->__setItsEDR(NULL);
        }
    __setItsECG(p_ECG);
}

void EDR::_clearItsECG() {
    itsECG = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/EDR.cpp
*********************************************************************/
