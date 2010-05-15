/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: ECGMedicineAdjust
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ECGMedicineAdjust.cpp
*********************************************************************/

//## auto_generated
#include "ECGMedicineAdjust.h"
//## operation Output(SampleSet,SampleSet)
#include "SampleSet.h"
//## package Application::Continuous

//## class ECGMedicineAdjust
ECGMedicineAdjust::ECGMedicineAdjust() {
}

ECGMedicineAdjust::~ECGMedicineAdjust() {
}

int ECGMedicineAdjust::Output(SampleSet& in, SampleSet& out) {
    //#[ operation Output(SampleSet,SampleSet)
    for (int idx = 0; idx < out.getNum(); idx++)
    	out.SetSample(idx, *in.GetSample(idx));
    out.SetAnnotation(out.GetAnnotation());
    return 0;
    //#]
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/ECGMedicineAdjust.cpp
*********************************************************************/
