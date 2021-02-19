/**@file  period.cpp
* @brief       在职时间类的实现
* @author      Duowen
* @date        2021-2-19
* @version     V1.0
**********************************************************************************
*/


#include "mytime.h"
#include "period.h"
#include <iostream>
using namespace std;

/**
* @brief 重载运算符-
* @param const mytime& a：
         const mytime& b:
* @return 计算
* @author Duowen
* @version v1.0
*/
dtime::dtime(int dyear,int dmonth):mytime(dyear,dmonth){
    total_time=year*12+month;
}

/**
* @brief 输出在职时间
* @param void
* @return void
* @author Duowen
* @version v1.0
*/
void dtime::show(){
    cout<<"已入职";
    if(year!=0) cout<<year<<"年";
    if(month!=0) cout<<month<<"月";
    if(year!=0) cout<<",总计"<<total_time<<"月"<<endl<<endl;
    return;
}


/**
* @brief 重载运算符-
* @note  计算在职时间
* @param const mytime& a：入职时间时间类的实例
* @param const mytime& b: 离职时间时间类的实例
* @return dtime类实例
* @author Duowen
* @version v1.0
*/
dtime operator-(const mytime& a,const mytime &b){
    int years=a.year-b.year;
    int months=a.month-b.month;
    if(months<0){
        years--;
        months=months+12;
    }
    return dtime(years,months+1);
}