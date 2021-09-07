#ifndef __period__
#define __period__

#include "mytime.h"

class dtime : public mytime{
    int total_time;
public:
    void show();
    dtime(int,int);
    friend dtime operator-(const mytime& , const mytime &);
};

#endif