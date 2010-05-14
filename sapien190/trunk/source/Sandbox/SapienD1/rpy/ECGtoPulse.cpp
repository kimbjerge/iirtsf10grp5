/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECGtoPulse
//!	Generated Date	: Fri, 7, May 2010  
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
    	WFDB_Sample sample = in.GetSample(idx)->getValue(); 
    	// Setting default annotation not used for pulse
    	out.SetSample(idx, sample); 
    }
    return 0;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ECGtoPulse.cpp
*********************************************************************/
