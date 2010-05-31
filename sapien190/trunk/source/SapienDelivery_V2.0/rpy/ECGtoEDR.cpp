/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECGtoEDR
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ECGtoEDR.cpp
*********************************************************************/

//## auto_generated
#include "ECGtoEDR.h"
//## operation Output(SampleSet,SampleSet)
#include "SampleSet.h"
//## package Application::Continuous

//## class ECGtoEDR
ECGtoEDR::ECGtoEDR() {
}

ECGtoEDR::~ECGtoEDR() {
}

int ECGtoEDR::Output(SampleSet& in, SampleSet& out) {
    //#[ operation Output(SampleSet,SampleSet)
    for (int idx = 0; idx < out.getNum(); idx++)
    {
    	WFDB_Sample sample = (WFDB_Sample)((float)in.GetSampleValue(idx)*0.5); 
    	out.SetSample(idx, sample); 
    }
    WFDB_Annotation ann = in.GetAnnotation();
    out.SetAnnotation(ann); 
    out.SetSampleID(in.getSampleID());
    return 0;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ECGtoEDR.cpp
*********************************************************************/
