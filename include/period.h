/**@file  period.h
* @brief       在职时间类
* @author      Duowen
* @date        2021-2-19
* @version     V1.0
**********************************************************************************
*/
#ifndef __period__
#define __period__

#include "mytime.h"

/**
 * @brief 在职时间类  
 * 
 * 
 */
class dtime : public mytime{
    int total_time;/**< 在职时间总月数 */
public:
    void show();
    dtime(int,int);
    friend dtime operator-(const mytime& begin,const mytime &end);
};

#endif