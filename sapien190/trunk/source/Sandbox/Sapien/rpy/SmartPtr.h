/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: SmartPtr
//!	Generated Date	: Fri, 30, Apr 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/SmartPtr.h
*********************************************************************/

#ifndef SmartPtr_H
#define SmartPtr_H

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
//## package Application

//## class SmartPtr
template <class T> class SmartPtr {
    ////    Constructors and destructors    ////
    
public :

    //## operation SmartPtr(T*)
    SmartPtr(T* p = 0);
    
    //## operation ~SmartPtr()
    ~SmartPtr();
    
    ////    Operations    ////
    
    //## operation operator*()
    T& operator*();
    
    //## operation operator->()
    T* operator->();
    
    //## operation operator=(SmartPtr<T>& rhs)
    SmartPtr<T>& operator=(SmartPtr<T>& rhs);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    T* getPtr() const;
    
    ////    Attributes    ////

protected :

    T ptr;		//## attribute ptr
};

//## package Application

//## class SmartPtr
template <class T> SmartPtr<T>::SmartPtr(T* p) : ptr(p) {
    //#[ operation SmartPtr(T*)
    //#]
}

template <class T> SmartPtr<T>::~SmartPtr() {
    //#[ operation ~SmartPtr()
    delete ptr;
    //#]
}

template <class T> T& SmartPtr<T>::operator*() {
    //#[ operation operator*()
    return *ptr;
    //#]
}

template <class T> T* SmartPtr<T>::operator->() {
    //#[ operation operator->()
    return ptr;
    //#]
}

template <class T> SmartPtr<T>& SmartPtr<T>::operator=(SmartPtr<T>& rhs) {
    //#[ operation operator=(SmartPtr<T>& rhs)
    if (this != &rhs) {
    	delete ptr;
    	ptr = rhs.ptr;
    	rhs.ptr = NULL;
    }
    return *this;
    //#]
}

template <class T> T* SmartPtr<T>::getPtr() const {
    return (T*) &ptr;
}

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/Sapien/rpy/SmartPtr.h
*********************************************************************/
