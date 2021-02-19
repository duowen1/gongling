/**@file  mytime.cpp
* @brief       ʱ�����ʵ��
* @author      Duowen
* @date        2021-2-19
* @version     V1.0
**********************************************************************************
*/
#include "mytime.h"

/**
 * @brief ���캯��
 * @param int times����yyyymm��ʽ��ʱ���ʾ  
 */ 
mytime::mytime(int times){
    year=times/100;
    month=times%100;
}

/**
 * @brief ���캯��
 * @param int years�����
 * @param int months���·�  
 */ 
mytime::mytime(int years,int months){
    year=years;
    month=months;
}