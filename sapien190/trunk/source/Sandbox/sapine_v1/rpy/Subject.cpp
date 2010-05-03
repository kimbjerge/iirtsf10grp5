/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Subject
//!	Generated Date	: Mon, 3, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Subject.cpp
*********************************************************************/

//## auto_generated
#include "Subject.h"
//## package Application::Continuous

//## class Subject
Subject::Subject() {
}

Subject::~Subject() {
    cleanUpRelations();
}

void Subject::Attach(Observer& obs) {
    //#[ operation Attach(Observer)
    //#]
}

void Subject::Detach(Observer& obs) {
    //#[ operation Detach(Observer)
    //#]
}

void Subject::Notify() {
    //#[ operation Notify()
    //#]
}

std::list<Observer*>::const_iterator Subject::getItsObserver() const {
    std::list<Observer*>::const_iterator iter;
    iter = itsObserver.begin();
    return iter;
}

std::list<Observer*>::const_iterator Subject::getItsObserverEnd() const {
    return itsObserver.end();
}

void Subject::addItsObserver(Observer* p_Observer) {
    itsObserver.push_back(p_Observer);
}

void Subject::removeItsObserver(Observer* p_Observer) {
    std::list<Observer*>::iterator pos = std::find(itsObserver.begin(), itsObserver.end(),p_Observer);
    if (pos != itsObserver.end()) {
    	itsObserver.erase(pos);
    }
}

void Subject::clearItsObserver() {
    itsObserver.clear();
}

void Subject::cleanUpRelations() {
    {
        itsObserver.clear();
    }
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/SapienD1/sapine/rpy/Subject.cpp
*********************************************************************/
