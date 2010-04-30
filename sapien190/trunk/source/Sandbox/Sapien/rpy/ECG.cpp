/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECG
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ECG.cpp
*********************************************************************/

//## auto_generated
#include "ECG.h"
//## link itsEDR
#include "EDR.h"
//## auto_generated
#include "ExtOutAnalogue.h"
//## auto_generated
#include "ExtOutDigital.h"
//## auto_generated
#include "PatientModel.h"
//## package Application

//## class ECG
ECG::ECG() {
    itsEDR = NULL;
}

ECG::~ECG() {
    cleanUpRelations();
}

EDR* ECG::getItsEDR() const {
    return itsEDR;
}

void ECG::setItsEDR(EDR* p_EDR) {
    if(p_EDR != NULL)
        {
            p_EDR->_setItsECG(this);
        }
    _setItsEDR(p_EDR);
}

void ECG::cleanUpRelations() {
    if(itsEDR != NULL)
        {
            ECG* p_ECG = itsEDR->getItsECG();
            if(p_ECG != NULL)
                {
                    itsEDR->__setItsECG(NULL);
                }
            itsEDR = NULL;
        }
}

void ECG::__setItsEDR(EDR* p_EDR) {
    itsEDR = p_EDR;
}

void ECG::_setItsEDR(EDR* p_EDR) {
    if(itsEDR != NULL)
        {
            itsEDR->__setItsECG(NULL);
        }
    __setItsEDR(p_EDR);
}

void ECG::_clearItsEDR() {
    itsEDR = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ECG.cpp
*********************************************************************/
