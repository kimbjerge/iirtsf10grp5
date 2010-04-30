/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Simulator
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Simulator.cpp
*********************************************************************/

//## auto_generated
#include "Simulator.h"
//## package Application

//## class Simulator
//#[ ignore
Simulator::ctrl_C::InBound_C::InBound_C() {
    itsControl = NULL;
}

Simulator::ctrl_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

void Simulator::ctrl_C::InBound_C::SetRecord() {
    //#[ operation SetRecord()
    
    if (itsControl != NULL) {
        itsControl->SetRecord();
    }
    
    //#]
}

void Simulator::ctrl_C::InBound_C::StartSimulation() {
    //#[ operation StartSimulation()
    
    if (itsControl != NULL) {
        itsControl->StartSimulation();
    }
    
    //#]
}

Control* Simulator::ctrl_C::InBound_C::getItsControl() const {
    return itsControl;
}

void Simulator::ctrl_C::InBound_C::setItsControl(Control* p_Control) {
    itsControl = p_Control;
}

void Simulator::ctrl_C::InBound_C::cleanUpRelations() {
    if(itsControl != NULL)
        {
            itsControl = NULL;
        }
}

Simulator::ctrl_C::OutBound_C::OutBound_C() {
}

Simulator::ctrl_C::OutBound_C::~OutBound_C() {
}

Simulator::ctrl_C::ctrl_C() {
}

Simulator::ctrl_C::~ctrl_C() {
}

void Simulator::ctrl_C::connectSimulator(Simulator* part) {
    //#[ operation connectSimulator(Simulator*)
    InBound.setItsControl(part);
    
    //#]
}

Control* Simulator::ctrl_C::getItsControl() {
    //#[ operation getItsControl()
    return &InBound;
    //#]
}

void Simulator::ctrl_C::setItsControl(Control* p_Control) {
    //#[ operation setItsControl(Control*)
    InBound.setItsControl(p_Control);
    //#]
}

Simulator::ctrl_C::InBound_C* Simulator::ctrl_C::getInBound() const {
    return (Simulator::ctrl_C::InBound_C*) &InBound;
}

Simulator::ctrl_C::OutBound_C* Simulator::ctrl_C::getOutBound() const {
    return (Simulator::ctrl_C::OutBound_C*) &OutBound;
}

Simulator::exe_C::InBound_C::InBound_C() {
    itsExecute = NULL;
}

Simulator::exe_C::InBound_C::~InBound_C() {
    cleanUpRelations();
}

void Simulator::exe_C::InBound_C::CalcSample() {
    //#[ operation CalcSample()
    
    if (itsExecute != NULL) {
        itsExecute->CalcSample();
    }
    
    //#]
}

void Simulator::exe_C::InBound_C::GenerateSingals() {
    //#[ operation GenerateSingals()
    
    if (itsExecute != NULL) {
        itsExecute->GenerateSingals();
    }
    
    //#]
}

Execute* Simulator::exe_C::InBound_C::getItsExecute() const {
    return itsExecute;
}

void Simulator::exe_C::InBound_C::setItsExecute(Execute* p_Execute) {
    itsExecute = p_Execute;
}

void Simulator::exe_C::InBound_C::cleanUpRelations() {
    if(itsExecute != NULL)
        {
            itsExecute = NULL;
        }
}

Simulator::exe_C::OutBound_C::OutBound_C() {
}

Simulator::exe_C::OutBound_C::~OutBound_C() {
}

Simulator::exe_C::exe_C() {
}

Simulator::exe_C::~exe_C() {
}

void Simulator::exe_C::connectSimulator(Simulator* part) {
    //#[ operation connectSimulator(Simulator*)
    InBound.setItsExecute(part);
    
    //#]
}

Execute* Simulator::exe_C::getItsExecute() {
    //#[ operation getItsExecute()
    return &InBound;
    //#]
}

void Simulator::exe_C::setItsExecute(Execute* p_Execute) {
    //#[ operation setItsExecute(Execute*)
    InBound.setItsExecute(p_Execute);
    //#]
}

Simulator::exe_C::InBound_C* Simulator::exe_C::getInBound() const {
    return (Simulator::exe_C::InBound_C*) &InBound;
}

Simulator::exe_C::OutBound_C* Simulator::exe_C::getOutBound() const {
    return (Simulator::exe_C::OutBound_C*) &OutBound;
}
//#]

Simulator::Simulator() {
    initRelations();
}

Simulator::~Simulator() {
}

Simulator::ctrl_C* Simulator::getCtrl() const {
    return (Simulator::ctrl_C*) &ctrl;
}

Simulator::ctrl_C* Simulator::get_ctrl() const {
    return (Simulator::ctrl_C*) &ctrl;
}

Simulator::exe_C* Simulator::getExe() const {
    return (Simulator::exe_C*) &exe;
}

Simulator::exe_C* Simulator::get_exe() const {
    return (Simulator::exe_C*) &exe;
}

PatientModel* Simulator::getItsPatientModel() const {
    return (PatientModel*) &itsPatientModel;
}

Scenario* Simulator::getItsScenario() const {
    return (Scenario*) &itsScenario;
}

void Simulator::initRelations() {
    if (get_ctrl()) {
    	get_ctrl()->connectSimulator(this);
    }
    if (get_exe()) {
    	get_exe()->connectSimulator(this);
    }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Simulator.cpp
*********************************************************************/
