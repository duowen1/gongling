#include "../include/mytime.h"
#include "../include/period.h"
#include <iostream>
using namespace std;

dtime::dtime(int dyear,int dmonth):mytime(dyear,dmonth){
    total_time=year*12+month;
}

void dtime::show(){
    cout<<"已入职";
    if(year!=0) cout<<year<<"年";
    if(month!=0) cout<<month<<"月";
    if(year!=0) cout<<",总计"<<total_time<<"月"<<endl<<endl;
    return;
}

/*
dtime operator-(const mytime& a,const mytime &b){
    int years=a.year-b.year;
    int months=a.month-b.month;
    if(months<0){
        years--;
        months=months+12;
    }
    return dtime(years,months+1);
}
*/