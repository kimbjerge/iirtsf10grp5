/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Gain
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Gain.cpp
*********************************************************************/

//## auto_generated
#include "Gain.h"
//## operation Output(SampleSet,SampleSet)
#include "SampleSet.h"
//## package Application::Continuous

//## class Gain
Gain::Gain() : gain(1) {
}

Gain::~Gain() {
}

int Gain::Output(SampleSet& in, SampleSet& out) {
    //#[ operation Output(SampleSet,SampleSet)
    
    for (int idx = 0; idx < out.getNum(); idx++)
    {   
    	Sample *s = in.GetSample(idx);
    	WFDB_Sample sample = (WFDB_Sample)((float)(s->getValue())*gain); 
    	WFDB_Annotation ann = s->getAnnotation();
    	out.SetSample(idx, sample, ann); 
    }
    return 0;
    //#]
}

float Gain::getGain() const {
    return gain;
}

void Gain::setGain(float p_gain) {
    gain = p_gain;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Gain.cpp
*********************************************************************/
