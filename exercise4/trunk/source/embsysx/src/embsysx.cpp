//============================================================================
// Name        : embsysx.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <oxf/oxf.h>
#include <stdlib.h>

// EmbeddedSystemX
#include "EmbeddedSystemX.h"

// Commands
#include "SelfTestFailed.h"
#include "Initialized.h"
#include "Configure.h"
#include "ConfigurationEnded.h"
#include "Stop.h"
#include "Suspend.h"
#include "Resume.h"
#include "Start.h"
#include "Restart.h"
#include "ChMode.h"
#include "Exit.h"
#include "ConfigX.h"
#include "eventX.h"
#include "eventY.h"
#include "SelfTestOk.h"
#include "TestCase.h"
#include "Test1.h"
#include "Test2.h"
#include "Test3.h"

void TestEx2 (void) {

	// Creating commands for test
	SelfTestFailed tSelfTestFailed;
	Initialized tInititalized;
	Configure tConfigure;
	ConfigurationEnded tConfigurationEnded;
	Stop tStop;
	Suspend tSuspend;
	Resume tResume;
	Start tStart;
	Restart tRestart;
	ChMode tChMode;
	SelfTestOk tSelfTestOk;

	cout << ">>> Embeded System X Exercise 2 started <<<" << endl;

	EmbeddedSystemX* itsEmbeddedSystemX = new EmbeddedSystemX();

	// Performing test scenario

	char * temp = new char[3];

	while(true){

		cin >> temp;
		int choice = atoi(temp);

		switch(choice){

			case 0:
				itsEmbeddedSystemX->HandleCommand(&tSelfTestFailed);
				break;
			case 1:
				itsEmbeddedSystemX->HandleCommand(&tRestart);
				break;
			case 2:
				itsEmbeddedSystemX->HandleCommand(&tSelfTestOk);
				break;
			case 3:
				itsEmbeddedSystemX->HandleCommand(&tInititalized);
				break;
			case 4:
				itsEmbeddedSystemX->HandleCommand(&tConfigure);
				break;
			case 5:
				itsEmbeddedSystemX->HandleCommand(&tConfigurationEnded);
				break;
			case 6:
				itsEmbeddedSystemX->HandleCommand(&tStart);
				break;
			case 7:
				itsEmbeddedSystemX->HandleCommand(&tSuspend);
				break;
			case 8:
				itsEmbeddedSystemX->HandleCommand(&tResume);
				break;
			case 9:
				itsEmbeddedSystemX->HandleCommand(&tStop);
				break;
			case 10:
				itsEmbeddedSystemX->HandleCommand(&tChMode);
				break;
			default:
				cout << "Invalid kommando" << endl;
		}
	}

};

#define NUM_TESTS 3

void TestEx4 (void) {
	int i;
	TestCase* tests[NUM_TESTS];
	EmbeddedSystemX *itsEmbeddedSystemX = new EmbeddedSystemX();
	tests[0] = new Test1(itsEmbeddedSystemX);
	tests[1] = new Test2(itsEmbeddedSystemX);
	tests[2] = new Test3(itsEmbeddedSystemX);

	cout << ">>> Embeded System X test Exercise 4 started <<<" << endl;
	for (i = 0; i < NUM_TESTS; i++)
		tests[i]->PerformTest();


};

int main() {

	TestEx4();
    return 0;
}
