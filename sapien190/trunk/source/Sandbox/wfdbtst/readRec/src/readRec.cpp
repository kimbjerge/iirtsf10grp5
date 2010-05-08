//============================================================================
// Name        : readRec.cpp
// Author      : Kbe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <stdio.h>
#include <wfdb/wfdb.h>
#include <wfdb/ecgcodes.h>
#define SAPIEN_SAMPLING_FREQ 250


int main(int argc, char *argv[])
{
	int i, nsig;
	char record[100];
	WFDB_Sample v[2];
	WFDB_Anninfo a;
	WFDB_Siginfo *siarray;
	WFDB_Annotation annot;
	unsigned long currentSample;
    WFDB_Frequency recordSamplingFreq;
    float freqScale;
    WFDB_Time scaledTime;

	if (argc < 2) {
		strcpy(record, "100s");
	} else
	{
		strcpy(record, argv[1]);
	}

	nsig = isigopen(record, NULL, 0);
	if (nsig < 1)
	    exit(1);
	siarray = (WFDB_Siginfo *)malloc(nsig * sizeof(WFDB_Siginfo));
	nsig = isigopen(record, siarray, nsig);

	/* Open the annotation "atr" in the annotation file */
	a.name = "atr";
	a.stat = WFDB_READ;
	if (annopen(record, &a, 1) < 0)
		cout << "Error opening annotation" << endl;

	/* Get Records Sampling Frequency */
	recordSamplingFreq = sampfreq(record );

	/* Set System Sampling Frequency */
	setifreq(SAPIEN_SAMPLING_FREQ);

	/*
	 * Frequency Scaling factor
	 * Required for aligning annotations
	 * with samples
	 */
	freqScale = SAPIEN_SAMPLING_FREQ / recordSamplingFreq;

	/* Get annotation 0 (numbered from zero) */
	while (getann(0, &annot) == 0) {
		scaledTime = freqScale*annot.time;
	    printf("sample no:%i (scaled:%i) time:%s annotation:%s\n", annot.time, scaledTime, mstimstr(annot.time), annstr(annot.anntyp));
	}

	for (i = 0; i < nsig; i++)
	    printf("signal %d gain = %g\n", i, siarray[i].gain);

	/* Read the first annotation to get its sample no */
	getann(0, &annot);
	scaledTime = freqScale*annot.time;
	currentSample=0;
	/*
	 * Run through all the record samples
	 * getvec reads a sample and increments
	 * the sample pointer
	 */
	while  (getvec(v) > 0  && currentSample<10)
		{
		printf("sample %06i val1:%04d val2:%04d", currentSample, v[0], v[1]);
		/*
		 * If the current sample has a
		 * corresponding annotation,
		 * add this to the string
		 */
		if (scaledTime == currentSample) {
//		if (freqScale*annot.time == currentSample) {
			printf(" %s\n", annstr(annot.anntyp));
			if (annot.anntyp == NORMAL)
				printf("BEAT\n");
			if(getann(0, &annot) < 0)
				exit(1);
			scaledTime = freqScale*annot.time;
			}
		else
			printf("\n");
		currentSample++;
		}

	free(siarray);

	wfdbquit();

	return 0;
}
