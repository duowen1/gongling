/**@file  period.h
* @brief       ��ְʱ����
* @author      Duowen
* @date        2021-2-19
* @version     V1.0
**********************************************************************************
*/
#ifndef __period__
#define __period__

#include "mytime.h"

/**
 * @brief ��ְʱ����  
 * 
 * 
 */
class dtime : public mytime{
    int total_time;/**< ��ְʱ�������� */
public:
    void show();
    dtime(int,int);
    friend dtime operator-(const mytime& begin,const mytime &end);
};

#endif