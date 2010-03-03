/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: LinuxSource
//!	Generated Date	: Wed, 3, Mar 2010  
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "TestUser.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            TestUser * p_TestUser;
            p_TestUser = new TestUser;
            p_TestUser->startBehavior();
            //#[ configuration DefaultComponent::LinuxSource 
            //#]
            OXF::start();
            delete p_TestUser;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: C:/IHA/TI-IRTS/exercise4/source/embsysx/src/rpy/MainDefaultComponent.cpp
*********************************************************************/
