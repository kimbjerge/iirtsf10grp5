/*
 * BinSem.h
 *
 *  Created on: Mar 11, 2010
 *      Author: stud
 */

#ifndef BINSEM_H_
#define BINSEM_H_

#include <semaphore.h>

class BinarySemaphore {
public:
	/*
	 * Binary Semaphore
	 * Default value is not taken
	 * Cannot be shared between processes
	 */
	BinarySemaphore(bool taken)
	{
		if (taken == true)
			sem_init(&sem, 0, 0);
		else
			sem_init(&sem, 0, 1);
	}
	virtual ~BinarySemaphore()
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

#endif /* BINSEM_H_ */
