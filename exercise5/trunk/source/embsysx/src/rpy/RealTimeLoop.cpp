/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: Target 
	Configuration 	: Linux
	Model Element	: RealTimeLoop
//!	Generated Date	: Fri, 26, Mar 2010  
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/

//## auto_generated
#include "RealTimeLoop.h"
//## dependency PowerOnSelfTest
#include "PowerOnSelfTest.h"
//## operation Instance(EmbeddedSystemX *)
#include "EmbeddedSystemX.h"
//## operation Instance(EmbeddedSystemX *)
#include "ESXState.h"
//## operation ChangeModeSettingAndState(ModeSettingAndState *)
#include "ModeSettingAndState.h"
//## operation ChangeSimulateAndState(SimulateAndState *)
#include "SimulateAndState.h"
//## dependency Mode1
#include "Mode1.h"
//## dependency Ready
#include "Ready.h"
//## dependency RealTimeExecution
#include "RealTimeExecution.h"
//## dependency Suspended
#include "Suspended.h"
//## package Application::Discrete

//## class RealTimeLoop
RealTimeLoop::~RealTimeLoop() {
    cleanUpRelations();
}

void RealTimeLoop::DisplayState() {
    //#[ operation DisplayState()
    Display("RealTimeLoop");
    //#]
}

ESXState * RealTimeLoop::Instance(EmbeddedSystemX * esx) {
    //#[ operation Instance(EmbeddedSystemX *)
    if (_instance == 0)
    {
    	_instance = new RealTimeLoop;
    }
    _instance->setItsSimulateAndState(RealTimeExecution::Instance(esx));
    _instance->setItsModeSettingAndState(Mode1::Instance(esx));
    return _instance;
    //#]
}

void RealTimeLoop::Stop(EmbeddedSystemX * esx) {
    //#[ operation Stop(EmbeddedSystemX *)
    ChangeState(esx, Ready::Instance());
    esx->kill();
    //#]
}

void RealTimeLoop::Suspend(EmbeddedSystemX * esx) {
    //#[ operation Suspend(EmbeddedSystemX *)
    ChangeState(esx, Suspended::Instance());
    //#]
}

void RealTimeLoop::RunRealTime(EmbeddedSystemX * esx) {
    //#[ operation RunRealTime(EmbeddedSystemX *)
    itsSimulateAndState->RunRealTime(this, esx);
    //#]
}

void RealTimeLoop::Simulate(EmbeddedSystemX * esx) {
    //#[ operation Simulate(EmbeddedSystemX *)
    itsSimulateAndState->Simulate(this, esx);
    //#]
}

void RealTimeLoop::chMode(EmbeddedSystemX * esx) {
    //#[ operation chMode(EmbeddedSystemX *)
    itsModeSettingAndState->chMode(this, esx);
    //itsModeSettingAndState->chMode(this);
    //#]
}

void RealTimeLoop::cleanUpRelations() {
    if(itsModeSettingAndState != NULL)
        {
            itsModeSettingAndState = NULL;
        }
    if(itsSimulateAndState != NULL)
        {
            itsSimulateAndState = NULL;
        }
}

void RealTimeLoop::ChangeModeSettingAndState(ModeSettingAndState * state) {
    //#[ operation ChangeModeSettingAndState(ModeSettingAndState *)
    std::cout << "AndState : ";
    itsModeSettingAndState->DisplayState();
    std::cout << " -> ";
    
    itsModeSettingAndState = state;   
    
    itsModeSettingAndState->DisplayState();
    std::cout << std::endl;
    //#]
}

void RealTimeLoop::ChangeSimulateAndState(SimulateAndState * state) {
    //#[ operation ChangeSimulateAndState(SimulateAndState *)
    std::cout << "AndState : ";
    itsSimulateAndState->DisplayState();
    std::cout << " -> ";
    
    itsSimulateAndState = state;   
    
    itsSimulateAndState->DisplayState();
    std::cout << std::endl;
    //#]
}

void RealTimeLoop::set_instance(RealTimeLoop* p__instance) {
    _instance = p__instance;
}

RealTimeLoop::RealTimeLoop() {
    itsModeSettingAndState = NULL;
    itsSimulateAndState = NULL;
    //#[ operation RealTimeLoop()
    //itsModeSettingAndState = Mode1a::Instance();
    //itsSimulateAndState = RealTimeExecution::Instance();
    //#]
}

RealTimeLoop* RealTimeLoop::get_instance() {
    return _instance;
}

ModeSettingAndState* RealTimeLoop::getItsModeSettingAndState() const {
    return itsModeSettingAndState;
}

void RealTimeLoop::setItsModeSettingAndState(ModeSettingAndState* p_ModeSettingAndState) {
    itsModeSettingAndState = p_ModeSettingAndState;
}

SimulateAndState* RealTimeLoop::getItsSimulateAndState() const {
    return itsSimulateAndState;
}

void RealTimeLoop::setItsSimulateAndState(SimulateAndState* p_SimulateAndState) {
    itsSimulateAndState = p_SimulateAndState;
}

RealTimeLoop* RealTimeLoop::_instance = 0;

/*********************************************************************
	File Path	: C:/Ubuntu_share/exercise5/source/embsysx/src/rpy/RealTimeLoop.cpp
*********************************************************************/
