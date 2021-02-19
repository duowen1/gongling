/**@file  mytime.h
* @brief       时间类
* @author      Duowen
* @date        2021-2-19
* @version     V1.0
**********************************************************************************
*/
#ifndef __mytime__
#define __mytime__

/**
 * @brief 时间类  
 *   
 * 
 */ 
class mytime{
public:
    int year;/**< 年份*/ 
    int month;/**< 月份*/ 
    mytime(int);
    mytime(int,int);
};

#endif