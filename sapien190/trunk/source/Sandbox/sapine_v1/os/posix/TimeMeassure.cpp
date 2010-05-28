// Linux additional includes
#include <sys/time.h>
#include <time.h>
#include "TimeMeassure.h"

TimeMeassure::TimeMeassure()
{
    currTime = 0;
    prevTime = 0;
    computeTime = 0;
}

void TimeMeassure::LogTime()
{
    struct timeval tv;
    struct timezone zone;
    gettimeofday(&tv, &zone);
    unsigned long diffTime = 0;
    unsigned long currTime = tv.tv_usec;

    if (currTime > prevTime)
    {
        diffTime = currTime - prevTime;
    }
    computeTime = diffTime;
    prevTime = currTime;
}
