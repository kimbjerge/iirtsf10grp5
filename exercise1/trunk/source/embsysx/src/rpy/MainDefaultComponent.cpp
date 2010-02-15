/********************************************************************
	Rhapsody	: 7.5 
	Login		: phm
	Component	: DefaultComponent 
	Configuration 	: LinuxSource
	Model Element	: LinuxSource
//!	Generated Date	: Mon, 15, Feb 2010  
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/MainDefaultComponent.cpp
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
	File Path	: C:/Projects/TIIRTS/embsysx/eclipse/embsysx/src/rpy/MainDefaultComponent.cpp
*********************************************************************/
