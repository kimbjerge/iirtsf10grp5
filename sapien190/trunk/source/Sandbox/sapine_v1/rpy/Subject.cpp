/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Subject
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Subject.cpp
*********************************************************************/

//## auto_generated
#include "Subject.h"
//## operation Notify(FrameBuffer*)
#include "FrameBuffer.h"
//## package Application::Continuous

//## class Subject
Subject::Subject() {
}

Subject::~Subject() {
    cleanUpRelations();
}

void Subject::Attach(Observer& obs) {
    //#[ operation Attach(Observer)
    lock.wait();
    addItsObserver(&obs);
    lock.signal();
    //#]
}

void Subject::Detach(Observer& obs) {
    //#[ operation Detach(Observer)
    lock.wait();
    removeItsObserver(&obs); 
    lock.signal();
    //#]
}

void Subject::Notify(FrameBuffer* fp) {
    //#[ operation Notify(FrameBuffer*)
    lock.wait();
    std::list<Observer*>::const_iterator iter;
    iter = itsObserver.begin();    
    while (iter != itsObserver.end()){
        Observer *pObserver = *iter;
        pObserver->Update(fp);
        iter++;
    }
    lock.signal();
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

Mutex* Subject::getLock() const {
    return (Mutex*) &lock;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/Subject.cpp
*********************************************************************/
