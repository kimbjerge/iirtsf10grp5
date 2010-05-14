/*
 * CountingSemaphore.h
 *
 *  Created on: Mar 15, 2010
 *      Author: stud
 */

#ifndef COUNTINGSEMAPHORE_H_
#define COUNTINGSEMAPHORE_H_

#include <semaphore.h>

class CountingSemaphore {
public:
	/*
	 * Counting Semaphore
	 * Initialized to initCount
	 * Can be shared between processes
	 */
	CountingSemaphore(unsigned int initCount)
	{
		sem_init(&sem, 1, initCount);
	}
	virtual ~CountingSemaphore()
	{
		sem_destroy(&sem);
	}
	/*
	 * Blocking wait for permission
	 */
	int wait()
	{
		return sem_wait(&sem);
	}
	/*
	 * Give Permission
	 */
	int signal()
	{
		return sem_post(&sem);
	}
private:
	sem_t sem;
};

#endif /* COUNTINGSEMAPHORE_H_ */
