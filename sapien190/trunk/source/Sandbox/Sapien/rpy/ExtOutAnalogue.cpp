/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ExtOutAnalogue
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ExtOutAnalogue.cpp
*********************************************************************/

//## auto_generated
#include "ExtOutAnalogue.h"
//## link itsSignal
#include "Signal.h"
//## package AbstractHW

//## class ExtOutAnalogue
ExtOutAnalogue::ExtOutAnalogue() {
    itsSignal = NULL;
}

ExtOutAnalogue::~ExtOutAnalogue() {
    cleanUpRelations();
}

void ExtOutAnalogue::OutputSample(int sample) {
    //#[ operation OutputSample(int)
    //KBE???
    std::cout << "Ch" << channel << " Sample " << sample << std::endl;
    //#]
}

Signal* ExtOutAnalogue::getItsSignal() const {
    return itsSignal;
}

void ExtOutAnalogue::setItsSignal(Signal* p_Signal) {
    if(p_Signal != NULL)
        {
            p_Signal->_addItsExtOutAnalogue(this);
        }
    _setItsSignal(p_Signal);
}

void ExtOutAnalogue::cleanUpRelations() {
    if(itsSignal != NULL)
        {
            Signal* current = itsSignal;
            if(current != NULL)
                {
                    current->_removeItsExtOutAnalogue(this);
                }
            itsSignal = NULL;
        }
}

int ExtOutAnalogue::getResolution() const {
    return resolution;
}

void ExtOutAnalogue::setResolution(int p_resolution) {
    resolution = p_resolution;
}

int ExtOutAnalogue::getSampleRate() const {
    return sampleRate;
}

void ExtOutAnalogue::setSampleRate(int p_sampleRate) {
    sampleRate = p_sampleRate;
}

void ExtOutAnalogue::__setItsSignal(Signal* p_Signal) {
    itsSignal = p_Signal;
}

void ExtOutAnalogue::_setItsSignal(Signal* p_Signal) {
    if(itsSignal != NULL)
        {
            itsSignal->_removeItsExtOutAnalogue(this);
        }
    __setItsSignal(p_Signal);
}

void ExtOutAnalogue::_clearItsSignal() {
    itsSignal = NULL;
}

ExtOutAnalogue::ExtOutAnalogue(int ch) {
    itsSignal = NULL;
    //#[ operation ExtOutAnalogue(int)
    channel = ch;
    //#]
}

int ExtOutAnalogue::getChannel() const {
    return channel;
}

void ExtOutAnalogue::setChannel(int p_channel) {
    channel = p_channel;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/ExtOutAnalogue.cpp
*********************************************************************/
