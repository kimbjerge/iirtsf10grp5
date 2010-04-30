/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ExtOutDigital
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ExtOutDigital.cpp
*********************************************************************/

//## auto_generated
#include "ExtOutDigital.h"
//## link itsPulseUpdater
#include "PulseUpdater.h"
//## link itsSignal
#include "Signal.h"
//## package AbstractHW

//## class ExtOutDigital
ExtOutDigital::ExtOutDigital() {
    itsPulseUpdater = NULL;
    itsSignal = NULL;
}

ExtOutDigital::~ExtOutDigital() {
    cleanUpRelations();
}

PulseUpdater* ExtOutDigital::getItsPulseUpdater() const {
    return itsPulseUpdater;
}

void ExtOutDigital::setItsPulseUpdater(PulseUpdater* p_PulseUpdater) {
    if(p_PulseUpdater != NULL)
        {
            p_PulseUpdater->_setItsExtOutDigital(this);
        }
    _setItsPulseUpdater(p_PulseUpdater);
}

Signal* ExtOutDigital::getItsSignal() const {
    return itsSignal;
}

void ExtOutDigital::setItsSignal(Signal* p_Signal) {
    if(p_Signal != NULL)
        {
            p_Signal->_setItsExtOutDigital(this);
        }
    _setItsSignal(p_Signal);
}

void ExtOutDigital::cleanUpRelations() {
    if(itsPulseUpdater != NULL)
        {
            ExtOutDigital* p_ExtOutDigital = itsPulseUpdater->getItsExtOutDigital();
            if(p_ExtOutDigital != NULL)
                {
                    itsPulseUpdater->__setItsExtOutDigital(NULL);
                }
            itsPulseUpdater = NULL;
        }
    if(itsSignal != NULL)
        {
            ExtOutDigital* p_ExtOutDigital = itsSignal->getItsExtOutDigital();
            if(p_ExtOutDigital != NULL)
                {
                    itsSignal->__setItsExtOutDigital(NULL);
                }
            itsSignal = NULL;
        }
}

void ExtOutDigital::__setItsPulseUpdater(PulseUpdater* p_PulseUpdater) {
    itsPulseUpdater = p_PulseUpdater;
}

void ExtOutDigital::_setItsPulseUpdater(PulseUpdater* p_PulseUpdater) {
    if(itsPulseUpdater != NULL)
        {
            itsPulseUpdater->__setItsExtOutDigital(NULL);
        }
    __setItsPulseUpdater(p_PulseUpdater);
}

void ExtOutDigital::_clearItsPulseUpdater() {
    itsPulseUpdater = NULL;
}

void ExtOutDigital::__setItsSignal(Signal* p_Signal) {
    itsSignal = p_Signal;
}

void ExtOutDigital::_setItsSignal(Signal* p_Signal) {
    if(itsSignal != NULL)
        {
            itsSignal->__setItsExtOutDigital(NULL);
        }
    __setItsSignal(p_Signal);
}

void ExtOutDigital::_clearItsSignal() {
    itsSignal = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ExtOutDigital.cpp
*********************************************************************/
