/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: PulseUpdater
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/PulseUpdater.cpp
*********************************************************************/

//## auto_generated
#include "PulseUpdater.h"
//## link itsExtOutDigital
#include "ExtOutDigital.h"
//## package Comm

//## class PulseUpdater
PulseUpdater::PulseUpdater() {
    itsExtOutDigital = NULL;
}

PulseUpdater::~PulseUpdater() {
    cleanUpRelations();
}

void PulseUpdater::OutputPulse(int pulse) {
    //#[ operation OutputPulse(int)
    std::cout << "Pulse " << pulse << std::endl;
    //#]
}

ExtOutDigital* PulseUpdater::getItsExtOutDigital() const {
    return itsExtOutDigital;
}

void PulseUpdater::setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital) {
    if(p_ExtOutDigital != NULL)
        {
            p_ExtOutDigital->_setItsPulseUpdater(this);
        }
    _setItsExtOutDigital(p_ExtOutDigital);
}

void PulseUpdater::cleanUpRelations() {
    if(itsExtOutDigital != NULL)
        {
            PulseUpdater* p_PulseUpdater = itsExtOutDigital->getItsPulseUpdater();
            if(p_PulseUpdater != NULL)
                {
                    itsExtOutDigital->__setItsPulseUpdater(NULL);
                }
            itsExtOutDigital = NULL;
        }
}

void PulseUpdater::__setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital) {
    itsExtOutDigital = p_ExtOutDigital;
}

void PulseUpdater::_setItsExtOutDigital(ExtOutDigital* p_ExtOutDigital) {
    if(itsExtOutDigital != NULL)
        {
            itsExtOutDigital->__setItsPulseUpdater(NULL);
        }
    __setItsExtOutDigital(p_ExtOutDigital);
}

void PulseUpdater::_clearItsExtOutDigital() {
    itsExtOutDigital = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/PulseUpdater.cpp
*********************************************************************/
