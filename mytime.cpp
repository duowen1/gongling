#include "mytime.h"

mytime::mytime(int times){
    year=times/100;
    month=times%100;
}

mytime::mytime(int years,int months){
    year=years;
    month=months;
}