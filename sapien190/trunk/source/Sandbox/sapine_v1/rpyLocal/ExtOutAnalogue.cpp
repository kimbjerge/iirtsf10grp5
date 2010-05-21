/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ExtOutAnalogue
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ExtOutAnalogue.cpp
*********************************************************************/

//## auto_generated
#include "ExtOutAnalogue.h"
#include "Dac.h"
//## package AbstractHW

// Static instance variables for HW DAC's
static Dac *pDac[2];

//## class ExtOutAnalogue
ExtOutAnalogue::ExtOutAnalogue() {
}

ExtOutAnalogue::~ExtOutAnalogue() {
}

void ExtOutAnalogue::OutputSample(int sample) {
    //#[ operation OutputSample(int)
#ifdef _USE_HW_DAC
    pDac[channel]->setValue(sample);
#else
    //
    std::cout << "Ch" << channel << " Sample " << sample << std::endl;
#endif
    //#]
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

ExtOutAnalogue::ExtOutAnalogue(int ch) {
    //#[ operation ExtOutAnalogue(int)
    if (ch < 2)
        pDac[ch] = Dac::getInstance(ch);
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
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ExtOutAnalogue.cpp
*********************************************************************/
