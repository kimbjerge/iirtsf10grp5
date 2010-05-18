/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECGtoPulse
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ECGtoPulse.cpp
*********************************************************************/

//## auto_generated
#include "ECGtoPulse.h"
//## operation Output(SampleSet,SampleSet)
#include "SampleSet.h"
//## package Application::Continuous

//## class ECGtoPulse
ECGtoPulse::ECGtoPulse() {
}

ECGtoPulse::~ECGtoPulse() {
}

int ECGtoPulse::Output(SampleSet& in, SampleSet& out) {
    //#[ operation Output(SampleSet,SampleSet)
    for (int idx = 0; idx < out.getNum(); idx++)
    {
    	WFDB_Sample sample = in.GetSampleValue(idx); 
    	out.SetSample(idx, sample); 
    } 
    // Setting default annotation not used for pulse
    out.SetAnnotation(out.FactoryAnnotation(NORMAL));
    return 0;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ECGtoPulse.cpp
*********************************************************************/
