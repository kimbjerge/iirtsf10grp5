/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ExtOutAnalogue
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ExtOutAnalogue.cpp
*********************************************************************/

//## auto_generated
#include "ExtOutAnalogue.h"
//## package AbstractHW

//## class ExtOutAnalogue
ExtOutAnalogue::ExtOutAnalogue() {
}

ExtOutAnalogue::~ExtOutAnalogue() {
}

void ExtOutAnalogue::OutputSample(int sample) {
    //#[ operation OutputSample(int)
    std::cout << "Ch" << channel << " Sample " << sample << std::endl;
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
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/ExtOutAnalogue.cpp
*********************************************************************/
