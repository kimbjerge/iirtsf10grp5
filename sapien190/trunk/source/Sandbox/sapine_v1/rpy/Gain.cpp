/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Gain
//!	Generated Date	: Sat, 15, May 2010  
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
    int offset = 0;

    for (int idx = 0; idx < out.getNum(); idx++)
    {   
    	Sample *s = in.GetSample(idx);
        if (s->getValue() < 0) offset = 500; // This is a dirty hack only for e0103 and e0104
        WFDB_Sample sample = (WFDB_Sample)((float)(s->getValue()+offset)*gain);
    	out.SetSample(idx, sample); 
    }
    WFDB_Annotation ann = out.GetAnnotation();
    out.SetAnnotation(ann); 
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
