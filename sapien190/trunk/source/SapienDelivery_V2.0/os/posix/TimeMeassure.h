#ifndef TIMEMEASSURE_H
#define TIMEMEASSURE_H

class TimeMeassure
{

public:

    TimeMeassure();

    void LogTime();

    unsigned long getComputeTime() { return computeTime; }
    unsigned long getCurrentTime() { return currTime; }

protected :

    unsigned long currTime;
    unsigned long prevTime;
    unsigned long computeTime;

};

#endif // TIMEMEASSURE_H
