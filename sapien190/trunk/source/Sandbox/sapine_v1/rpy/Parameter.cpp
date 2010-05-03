/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Parameter
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Parameter.cpp
*********************************************************************/

//## auto_generated
#include "Parameter.h"
//## link itsController
#include "Controller.h"
//## package Application::Discrete

//## class Parameter
Parameter::Parameter() {
    itsController = NULL;
}

Parameter::~Parameter() {
    cleanUpRelations();
}

Controller* Parameter::getItsController() const {
    return itsController;
}

void Parameter::setItsController(Controller* p_Controller) {
    if(p_Controller != NULL)
        {
            p_Controller->_setItsParameter(this);
        }
    _setItsController(p_Controller);
}

void Parameter::cleanUpRelations() {
    if(itsController != NULL)
        {
            Parameter* p_Parameter = itsController->getItsParameter();
            if(p_Parameter != NULL)
                {
                    itsController->__setItsParameter(NULL);
                }
            itsController = NULL;
        }
}

void Parameter::__setItsController(Controller* p_Controller) {
    itsController = p_Controller;
}

void Parameter::_setItsController(Controller* p_Controller) {
    if(itsController != NULL)
        {
            itsController->__setItsParameter(NULL);
        }
    __setItsController(p_Controller);
}

void Parameter::_clearItsController() {
    itsController = NULL;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Parameter.cpp
*********************************************************************/
