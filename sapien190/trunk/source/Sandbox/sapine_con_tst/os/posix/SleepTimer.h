/*
 * SleepTimer.h
 *
 *  Created on: Mar 15, 2010
 *      Author: stud
 */

#ifndef SLEEPTIMER_H_
#define SLEEPTIMER_H_

#include <pthread.h>

class SleepTimer {

public:
	SleepTimer();
	void sleep(long);
	virtual ~SleepTimer();
};

#endif /* SLEEPTIMER_H_ */
