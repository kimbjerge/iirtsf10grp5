/*
 * Thread.h
 *
 *  Created on: Mar 12, 2010
 *      Author: stud
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <pthread.h>

using namespace std;

#ifndef THREAD_H_
#define THREAD_H_

enum ThreadPriority {
	PRIORITY_LOW,
	PRIORITY_BELOW_NORMAL,
	PRIORITY_NORMAL,
	PRIORITY_ABOVE_NORMAL,
	PRIORITY_HIGH
};

class Thread {

public:
	Thread(ThreadPriority,string);
	void start();
	ThreadPriority getPriority();
	void setPriority(ThreadPriority);

	void kill();
	bool isAlive();

	string getName();

	virtual ~Thread();

	virtual void run();

private:
        int translatePriority(int policy);
        ThreadPriority priority;
	bool _isAlive;
	string name;
	pthread_t thread;
        int threadId;
};

#endif /* THREAD_H_ */
