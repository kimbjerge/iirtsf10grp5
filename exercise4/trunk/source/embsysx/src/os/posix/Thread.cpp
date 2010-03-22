/*
 * Thread.cpp
 *
 *  Created on: Mar 12, 2010
 *      Author: stud
 */

#include "Thread.h"

void * InitializeThread(void* p){
	Thread* t = (Thread *)p;
	t->run();
	pthread_exit(NULL);
}

void Thread::run(){
	_isAlive = true;
}

bool Thread::isAlive(){
	return _isAlive;
}

void Thread::kill(){
	_isAlive = false;
}

Thread::Thread(ThreadPriority _pri,string _name) {
	this->name = _name;
	this->priority = _pri;
}

void Thread::setPriority(ThreadPriority _pri){
	this->priority = _pri;
}

ThreadPriority Thread::getPriority(){
	return this->priority;
}

string Thread::getName(){
	return this->name;
}

void Thread::start(){
	int thread_Id = pthread_create(&thread,NULL,InitializeThread,(void *)this);
	_isAlive = true;
	//int thread_Id = pthread_create(&this->thread,NULL,InitializeThread,(void *)this);
}


Thread::~Thread() {
	// TODO Auto-generated destructor stub
}
