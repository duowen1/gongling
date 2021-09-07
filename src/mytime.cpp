/**@file  mytime.cpp
* @brief       时间类的实现
* @author      Duowen
* @date        2021-2-19
* @version     V1.0
**********************************************************************************
*/
#include "mytime.h"

/**
 * @brief 构造函数
 * @param int times：以yyyymm形式的时间表示  
 */ 
mytime::mytime(int times){
    year=times/100;
    month=times%100;
}

/**
 * @brief 构造函数
 * @param int years：年份
 * @param int months：月份  
 */ 
mytime::mytime(int years,int months){
    year=years;
    month=months;
}