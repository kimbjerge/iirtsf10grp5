//============================================================================
// Name        : embsysx.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <oxf/oxf.h>
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"
#include "Ready.h"
#include "Mode1.h"


int main() {
	cout << ">>> Embeded System X test started <<<" << endl;

	EmbeddedSystemX* itsEmbeddedSystemX = new EmbeddedSystemX();
	{
		/* To fix Rhapsody problem of initialization of instance variables */
		itsEmbeddedSystemX->setItsESXState(PowerOnSelfTest::Instance());

		Operational *pOp = Operational::Instance();
		pOp->setItsOpState(Ready::Instance());

		RealTimeLoop *pRTL = RealTimeLoop::Instance();
		pRTL->setItsRTLState(Mode1::Instance());
	}

    itsEmbeddedSystemX->SelftestOk();

    itsEmbeddedSystemX->Initialized();

    itsEmbeddedSystemX->Start();

    itsEmbeddedSystemX->chMode();

    itsEmbeddedSystemX->chMode();

    itsEmbeddedSystemX->chMode();

    itsEmbeddedSystemX->chMode();

    cout << ">>> Embeded System X test ended <<<" << endl;

    return 0;
}
