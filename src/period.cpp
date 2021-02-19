/**@file  period.cpp
* @brief       ��ְʱ�����ʵ��
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
* @brief ���������-
* @param const mytime& a��
         const mytime& b:
* @return ����
* @author Duowen
* @version v1.0
*/
dtime::dtime(int dyear,int dmonth):mytime(dyear,dmonth){
    total_time=year*12+month;
}

/**
* @brief �����ְʱ��
* @param void
* @return void
* @author Duowen
* @version v1.0
*/
void dtime::show(){
    cout<<"����ְ";
    if(year!=0) cout<<year<<"��";
    if(month!=0) cout<<month<<"��";
    if(year!=0) cout<<",�ܼ�"<<total_time<<"��"<<endl<<endl;
    return;
}


/**
* @brief ���������-
* @note  ������ְʱ��
* @param const mytime& a����ְʱ��ʱ�����ʵ��
* @param const mytime& b: ��ְʱ��ʱ�����ʵ��
* @return dtime��ʵ��
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