/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: Linux
//!	Generated Date	: Mon, 22, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/MainTarget.cpp
*********************************************************************/

//## auto_generated
#include "MainTarget.h"
//## auto_generated
#include "Tester.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Tester * p_Tester;
            p_Tester = new Tester;
            p_Tester->startBehavior();
            //#[ configuration Target::Linux 
            //#]
            OXF::start();
            delete p_Tester;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/MainTarget.cpp
*********************************************************************/
