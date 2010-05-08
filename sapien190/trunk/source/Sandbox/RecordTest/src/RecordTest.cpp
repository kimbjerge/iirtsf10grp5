//============================================================================
// Name        : RecordTest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++, Ansi-style
//============================================================================

#include <iostream>
#include "Record.h"
#include "RecordWfdb.h"
#include "wfdb/ecgcodes.h"
using namespace std;


int main() {
	WFDB_Time lastBeat = 0;

	RecordWfdb* rec1 = new RecordWfdb("100s", "atr");

	rec1->Load();

	for (int i=0; i< 1000 ; i++) {

		rec1->Next();

		if((char)(rec1->getItsSampleSet()->GetAnnotation().anntyp) > 0) {
			cout << "ID: " << rec1->getItsSampleSet()->GetSampleID() <<
					" Value: " << rec1->getItsSampleSet()->GetSample(0)->getValue() <<
					" Annotation: " << annstr(rec1->getItsSampleSet()->GetAnnotation().anntyp) << endl;
		}

		/* Estimate the current pulse */
		if((rec1->getItsSampleSet()->GetAnnotation().anntyp) == NORMAL) {
		float pulse = 60.0*(rec1->getItsSampleSet()->GetSampleID() - lastBeat)/SAPIEN_SAMPLING_FREQ;
		cout << "Pulse: " << pulse << endl;
		lastBeat = rec1->getItsSampleSet()->GetSampleID();
	}


	}


	return 0;
}
