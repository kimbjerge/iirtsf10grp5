/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Target
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/MainTargetComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainTargetComponent.h"
//## auto_generated
#include "Continuous.h"
//## auto_generated
#include "TestContinous.h"
TargetComponent::TargetComponent() {
    Continuous_initRelations();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            TestContinous * p_TestContinous;
            TargetComponent initializer_TargetComponent;
            p_TestContinous = new TestContinous;
            p_TestContinous->startBehavior();
            //#[ configuration TargetComponent::Target 
            //#]
            OXF::start();
            delete p_TestContinous;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/MainTargetComponent.cpp
*********************************************************************/
