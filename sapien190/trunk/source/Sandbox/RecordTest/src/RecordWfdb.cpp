/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: RecordWfdb
//!	Generated Date	: Fri, 7, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordWfdb.cpp
*********************************************************************/

//## dependency RecordIterator
#include "RecordIterator.h"
//## auto_generated
#include "RecordWfdb.h"
//## package Application::Continuous
#include "wfdb/wfdb.h"


int RecordWfdb::getannScaled(WFDB_Annotator a, WFDB_Annotation *annot) {
	int ret=getann(a, annot);
	(*annot).time = annFreqScale*(*annot).time;
	return ret;
}

//## class RecordWfdb
RecordWfdb::RecordWfdb(char* filename, char* annotation) {
    //#[ operation RecordWfdb(char*)
    recordName = new char[100];
    strcpy(recordName, filename);

    annName = new char[16];
    strcpy(annName, annotation);

    //#]
}

RecordWfdb::RecordWfdb() {
}

RecordWfdb::~RecordWfdb() {
    //#[ operation ~RecordWfdb()
    delete recordName;
    delete annName;
    //#]
}

void RecordWfdb::First() {
    //#[ operation First()

	Next();
    
    //#]
}

bool RecordWfdb::Load() {
    //#[ operation Load()
    #ifdef _LINUX
    WFDB_Siginfo s[2];
	WFDB_Anninfo a;

    if (isigopen(recordName, s, 2) < 2) 
    {
        std::cout << "Could not read record : " << recordName << std::endl; 
    	return false;
    }
    else 
    {
    	/* Open the annotation annName in the annotation file */
    	a.name = annName;
    	a.stat = WFDB_READ;
    	if (annopen(recordName, &a, 1) < 0)
    		cout << "Error opening annotation" << endl;

    	/*
    	 * Frequency Scaling factor
    	 * Required for aligning annotations
    	 * with samples
    	 * sampfreq() returns the record's
    	 * sampling frequency
    	 */
    	annFreqScale = SAPIEN_SAMPLING_FREQ / sampfreq(recordName);

    	/*
    	 * Set System Sampling Frequency
    	 * to let wfdb resample input signals
    	 * to the system sampling frequency
    	 */
    	setifreq(SAPIEN_SAMPLING_FREQ);

    	/*
    	 * Get the first annotation
    	 * Annotation sample number
    	 * must be known in advance of
    	 * retrieving the actual sample
    	 */
    	getannScaled(0, &annot);
    	sampleCounter = 0;

    }
    	#endif
    	return true;
    //#]

}

void RecordWfdb::Next() {
    //#[ operation Next()
    #ifdef _LINUX
    WFDB_Sample v[2];
    
    if (getvec(v) > 0)
    {
    	for (int idx = 0; idx < itsSampleSet.getNum(); idx++) {
    		itsSampleSet.SetSample(idx, v[idx]);
    	}

    	/*
		 * Check if there is an annotation
		 * for the next sample
		 */
		if (annot.time == sampleCounter)
			itsSampleSet.SetAnnotation(annot);
		else
			itsSampleSet.SetAnnotation(SampleSet::FactoryAnnotation(0));

    	itsSampleSet.SetSampleID(sampleCounter);

    	/*
    	 * If we just used an annotation or somehow
    	 * passed one, get the next. If we pass the
    	 * last annotation, set the next to be in
    	 * infinity.
    	 */
    	if (annot.time <= sampleCounter) {
			if(getannScaled(0, &annot) < 0) {
				annot.anntyp = -1;
				annot.time =0xffffffff; // Max
			}
    	}

    	sampleCounter++;

    	endRecord = false;
    }
    else
    	endRecord = true; 
    #endif
    //#]
}

char* RecordWfdb::getRecordName() const {
    return recordName;
}

void RecordWfdb::setRecordName(char* p_recordName) {
    recordName = p_recordName;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/RecordWfdb.cpp
*********************************************************************/
