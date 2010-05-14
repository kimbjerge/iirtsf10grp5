/*********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: GenericPool
//!	Generated Date	: Thu, 13, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/GenericPool.h
*********************************************************************/

#ifndef GenericPool_H
#define GenericPool_H

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
#include "wfdb/wfdb.h"
//## auto_generated
#include "math.h"
//## auto_generated
#include "wfdb/ecgcodes.h"
//## auto_generated
#include <list>
//## auto_generated
#include <iterator>
//## link itsDummy
#include "Dummy.h"
//## package Application

//## class GenericPool
template <class Resource, int nElements> class GenericPool {
    ////    Constructors and destructors    ////
    
public :

    //## operation GenericPool()
    GenericPool();
    
    //## auto_generated
    ~GenericPool();
    
    ////    Operations    ////
    
    //## operation AddResource(Resource*)
    void AddResource(Resource* R);
    
    //## operation Allocate()
    Resource* Allocate();
    
    //## operation Release(Resource*)
    void Release(Resource* R);
    
    ////    Additional operations    ////
    
    //## auto_generated
    std::list<Resource*> getFreeList() const;
    
    //## auto_generated
    void setFreeList(std::list<Resource*> p_freeList);
    
    //## auto_generated
    std::list<Dummy*>::const_iterator getItsDummy() const;
    
    //## auto_generated
    std::list<Dummy*>::const_iterator getItsDummyEnd() const;
    
    //## auto_generated
    void addItsDummy(Dummy* p_Dummy);
    
    //## auto_generated
    void removeItsDummy(Dummy* p_Dummy);
    
    //## auto_generated
    void clearItsDummy();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    std::list<Resource*> freeList;		//## attribute freeList
    
    ////    Relations and components    ////
    
    std::list<Dummy*> itsDummy;		//## link itsDummy

public :

    //## operation isFull()
    bool isFull();
    
    //## operation isEmpty()
    void isEmpty();
};

template <class Resource, int nElements> GenericPool<Resource, nElements>::GenericPool() {
    //#[ operation GenericPool()
    //#]
}

template <class Resource, int nElements> void GenericPool<Resource, nElements>::AddResource(Resource* R) {
    //#[ operation AddResource(Resource*)
    freeList.push_back(R);
    //#]
}

template <class Resource, int nElements> Resource* GenericPool<Resource, nElements>::Allocate() {
    //#[ operation Allocate()
    if (freeList.size() > 0) 
    {
    	//std::list<Resource*>::const_iterator iter;
    	//iter = freeList.begin(); 
    	//Resource *R = *iter;   
    	Resource *R = *freeList.begin(); 
    	freeList.pop_front();
    	return R;
    } 
    else
    	return NULL;
    //#]
}

template <class Resource, int nElements> void GenericPool<Resource, nElements>::Release(Resource* R) {
    //#[ operation Release(Resource*)
    freeList.push_back(R);
    
    //#]
}

template <class Resource, int nElements> bool GenericPool<Resource, nElements>::isFull() {
    //#[ operation isFull()
    return (freeList.size() >= nElements);
    //#]
}

template <class Resource, int nElements> void GenericPool<Resource, nElements>::isEmpty() {
    //#[ operation isEmpty()
    return (freeList.size() == 0);
    //#]
}

//## package Application

//## class GenericPool
template <class Resource, int nElements> std::list<Resource*> GenericPool<Resource, nElements>::getFreeList() const {
    return freeList;
}

template <class Resource, int nElements> void GenericPool<Resource, nElements>::setFreeList(std::list<Resource*> p_freeList) {
    freeList = p_freeList;
}

template <class Resource, int nElements> std::list<Dummy*>::const_iterator GenericPool<Resource, nElements>::getItsDummy() const {
    std::list<Dummy*>::const_iterator iter;
    iter = itsDummy.begin();
    return iter;
}

template <class Resource, int nElements> std::list<Dummy*>::const_iterator GenericPool<Resource, nElements>::getItsDummyEnd() const {
    return itsDummy.end();
}

template <class Resource, int nElements> void GenericPool<Resource, nElements>::addItsDummy(Dummy* p_Dummy) {
    itsDummy.push_back(p_Dummy);
}

template <class Resource, int nElements> void GenericPool<Resource, nElements>::removeItsDummy(Dummy* p_Dummy) {
    std::list<Dummy*>::iterator pos = std::find(itsDummy.begin(), itsDummy.end(),p_Dummy);
    if (pos != itsDummy.end()) {
    	itsDummy.erase(pos);
    }
}

template <class Resource, int nElements> void GenericPool<Resource, nElements>::clearItsDummy() {
    itsDummy.clear();
}

template <class Resource, int nElements> void GenericPool<Resource, nElements>::cleanUpRelations() {
    {
        itsDummy.clear();
    }
}

template <class Resource, int nElements> GenericPool<Resource, nElements>::~GenericPool() {
    cleanUpRelations();
}

#endif
/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/GenericPool.h
*********************************************************************/
