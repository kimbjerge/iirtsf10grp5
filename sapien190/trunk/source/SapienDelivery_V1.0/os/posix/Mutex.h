#ifndef Mutex_H
#define Mutex_H
#include <pthread.h>

// Mutex wrapper class, Linux implementation using pthread
class Mutex
{

public:
    Mutex();
    ~Mutex() {};
	void wait();
	void signal(void);

private:
    pthread_mutex_t hMutex;
};

#endif
