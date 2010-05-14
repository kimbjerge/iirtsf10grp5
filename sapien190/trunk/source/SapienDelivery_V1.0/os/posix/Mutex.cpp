#include "Mutex.h"

// Mutex constructor
Mutex::Mutex()
{
	pthread_mutexattr_t attr;
	pthread_mutexattr_init( &attr );
	pthread_mutex_init( &hMutex, &attr );
};

void Mutex::wait()
{
    pthread_mutex_lock(&hMutex);
};

void Mutex::signal(void)
{
   pthread_mutex_unlock(&hMutex);
};
