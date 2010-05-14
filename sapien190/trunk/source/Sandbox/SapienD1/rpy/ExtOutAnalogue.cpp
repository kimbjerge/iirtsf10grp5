/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ExtOutAnalogue
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ExtOutAnalogue.cpp
*********************************************************************/

//## auto_generated
#include "ExtOutAnalogue.h"
//## link itsDAC
#include "DAC.h"
//## package AbstractHW

//## class ExtOutAnalogue
ExtOutAnalogue::ExtOutAnalogue() {
    itsDAC = NULL;
}

ExtOutAnalogue::~ExtOutAnalogue() {
    cleanUpRelations();
}

void ExtOutAnalogue::OutputSample(int sample) {
    //#[ operation OutputSample(int)
    std::cout << "Ch" << channel << " Sample " << sample << std::endl;
    //#]
}

void ExtOutAnalogue::cleanUpRelations() {
    if(itsDAC != NULL)
        {
            itsDAC = NULL;
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

ExtOutAnalogue::ExtOutAnalogue(int ch) {
    itsDAC = NULL;
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

DAC* ExtOutAnalogue::getItsDAC() const {
    return itsDAC;
}

void ExtOutAnalogue::setItsDAC(DAC* p_DAC) {
    itsDAC = p_DAC;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ExtOutAnalogue.cpp
*********************************************************************/
