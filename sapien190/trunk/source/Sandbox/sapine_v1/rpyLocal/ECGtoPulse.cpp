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

#define SAPIEN_SAMPLING_FREQ 250

//## class ECGtoPulse
ECGtoPulse::ECGtoPulse() {
	lastBeat = 0;
	calcPulse = 0;
}

ECGtoPulse::~ECGtoPulse() {
}

int ECGtoPulse::Output(SampleSet& in, SampleSet& out) {
    //#[ operation Output(SampleSet,SampleSet)
	if (in.GetAnnotation().anntyp == NORMAL) {
		float pulse = 60.0*(in.GetSampleID() - lastBeat)/SAPIEN_SAMPLING_FREQ;
		calcPulse = (WFDB_Sample)pulse;
		//cout << "Pulse: " << pulse << endl;
		lastBeat = in.GetSampleID();
	}
	for (int idx = 0; idx < out.getNum(); idx++)
    {
    	//WFDB_Sample sample = in.GetSampleValue(idx); 

    	//out.SetSample(idx, sample); 
    	out.SetSample(idx, calcPulse); 
    } 
    // Setting default annotation not used for pulse
    out.SetAnnotation(out.FactoryAnnotation(NORMAL));
    out.SetSampleID(in.getSampleID());
    return 0;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ECGtoPulse.cpp
*********************************************************************/
