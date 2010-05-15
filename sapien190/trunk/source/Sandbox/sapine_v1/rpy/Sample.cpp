/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Sample
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Sample.cpp
*********************************************************************/

//## auto_generated
#include "Sample.h"
//## package Application::Continuous

//## class Sample
Sample::Sample() : gain(1), value(0) {
}

Sample::~Sample() {
}

WFDB_Sample Sample::getValue() const {
    return value;
}

void Sample::setValue(WFDB_Sample p_value) {
    value = p_value;
}

float Sample::getGain() const {
    return gain;
}

void Sample::setGain(float p_gain) {
    gain = p_gain;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Sample.cpp
*********************************************************************/
