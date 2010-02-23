//============================================================================
// Name        : embsysx.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <oxf/oxf.h>

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


int main() {

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
	Exit tExit;
	ConfigX tConfigX;
	eventX teventX;
	eventY teventY;
	SelfTestOk tSelfTestOk;

	cout << ">>> Embeded System X test started <<<" << endl;

	EmbeddedSystemX* itsEmbeddedSystemX = new EmbeddedSystemX();


	// Performing test scenario
    itsEmbeddedSystemX->HandleCommand(&tSelfTestFailed);

    itsEmbeddedSystemX->HandleCommand(&tRestart);

    itsEmbeddedSystemX->HandleCommand(&tSelfTestOk);

    itsEmbeddedSystemX->HandleCommand(&tInititalized);

    itsEmbeddedSystemX->HandleCommand(&tConfigure);

    itsEmbeddedSystemX->HandleCommand(&tConfigurationEnded);

    itsEmbeddedSystemX->HandleCommand(&tStart);

    itsEmbeddedSystemX->HandleCommand(&tChMode);

    itsEmbeddedSystemX->HandleCommand(&tChMode);

    itsEmbeddedSystemX->HandleCommand(&tChMode);

    itsEmbeddedSystemX->HandleCommand(&tChMode);

    cout << ">>> Embeded System X test ended <<<" << endl;

    return 0;
}
