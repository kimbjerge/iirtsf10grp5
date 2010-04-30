/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: Subject
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Subject.h
*********************************************************************/

#ifndef Subject_H
#define Subject_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include <list>
//## auto_generated
#include <iterator>
//## link itsObserver
#include "Observer.h"
//## package Application

//## class Subject
class Subject {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Subject();
    
    //## auto_generated
    ~Subject();
    
    ////    Operations    ////
    
    //## operation Attach(Observer)
    void Attach(Observer& obs);
    
    //## operation Detach(Observer)
    void Detach(Observer& obs);

protected :

    //## operation Notify()
    void Notify();
    
    ////    Additional operations    ////

public :

    //## auto_generated
    std::list<Observer*>::const_iterator getItsObserver() const;
    
    //## auto_generated
    std::list<Observer*>::const_iterator getItsObserverEnd() const;
    
    //## auto_generated
    void addItsObserver(Observer* p_Observer);
    
    //## auto_generated
    void removeItsObserver(Observer* p_Observer);
    
    //## auto_generated
    void clearItsObserver();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    std::list<Observer*> itsObserver;		//## link itsObserver
};

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/Subject.h
*********************************************************************/
