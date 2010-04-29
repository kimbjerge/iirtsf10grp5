//============================================================================
// Name        : dac.cpp
// Author      : phm
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include "Dac.h"
using namespace std;
#include <wfdb/wfdb.h>

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

    Dac *Dac0=NULL;
    Dac *Dac1=NULL;
    Dac *Dac11=NULL;

    Dac0 = Dac::getInstance(0);
    Dac1 = Dac::getInstance(1);
    Dac11 = Dac::getInstance(0);

    Dac0->setValue(1000);
    Dac1->setValue(1200);

    cout << "dac0 value: " << Dac0->getValue() << endl ;

    cout << "dac1 value: " << Dac1->getValue() << endl ;

    cout << "dac11 value: " << Dac11->getValue() << endl ;

    /* WFDB TEST */
	char record[100];
	WFDB_Sample v[2];
	WFDB_Siginfo s[2];

	strcpy(record, "100s");
	/*
	 * 100s 2 360 21600 - two signals 360Hz, 21600 samples
	 * 100s.dat 212 200 11 1024 995 21537 0 MLII
	 * 100s.dat 212 200 11 1024 1011 -3962 0 V5
	 *
	 * format= 21-bit packed, gain = 200 bits/mV
	 * 11-bit resolution midrange(zero)=1024,
	 * first sample = 995, Checksum of all samples=21537
	 *
	 * www.physionet.org/physiotools/wag/header-5.htm
	 */

	int i=0, wfm[360];
	for (int i=0;i<360;i++)
		wfm[i] = 900;
	for (i=357;i<360;i++)
		wfm[i] = 1300;
	i=0;

	cout << "Printing signal record : " << record << endl;

	if (isigopen(record, s, 2) < 2)
	{
		cout << "Could not read record : " << record << endl;
	}
	else
	{
		while(1){
			// While not EOF
//			cout << "ping" << endl;
//			while  (getvec(v) > 0) {
			i=0;
			while  (i < 359) {

//			cout << "val" << v[0] << " ; " << v[1] << endl;

//			    Dac0->setValue(v[0]);
		    Dac0->setValue(wfm[i]);
			usleep(2780);
			i++;
			//			printf("%d\t%d\n", v[0], v[1]);
		}
	}
	}
    wfdbquit();



	return 0;
}
