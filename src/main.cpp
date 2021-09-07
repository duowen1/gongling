/**@mainpage  工龄计算程序
* <table>
* <tr><th>Project  <td>Aging-Calculator
* <tr><th>Author   <td>Duowen
* </table>

* @section   项目详细描述
* 给定两组时间，计算在职年份和月份以及总计月数量
*
* @section   功能描述  
* -# 输入格式检测
* 
* @section   用法描述 
* -# 日期以yyyymm的形式输入，例如202102
* 
**********************************************************************************
*/

/**@file  main.cpp
* @brief       项目主函数文件
* @details     main函数入口
* @author      Duowen
* @date        2021-2-19
* @version     V1.0
**********************************************************************************
*/
#include "mytime.h"
#include "period.h"
#include <iostream>
using namespace std;

bool check(int);
bool check(int,int);


/**
* @brief 主函数
* @param void
* @return 0
* @author Duowen
* @version v1.0
*/
int main(){
    string begins,ends;
    int begin,end;
    while(true){
        cout<<"入职日期："<<endl;

        while(cin>>begins){
            begin=atoi(begins.c_str());
            if(check(begin)){
                break;
            }
        }
        cout<<"离职日期："<<endl;
        while(cin>>ends){
            end=atoi(ends.c_str());
            if(check(begin)&&check(begin,end)) break;
        }

        mytime begins(begin);
        mytime ends(end);
        dtime result=ends-begins;
        result.show();
    }
    return 0;
}


/**
* @brief 检测输入时间是否合法
* @param int time：数字格式的时间
* @return 格式合法返回true，格式非法返回false
* @author Duowen
* @version v1.0
*/
bool check(int time){
    if(time<=100000||time>=999912) {
        cout<<"输入的格式有误，请重新输入正确的格式例如202101"<<endl;
        return false;
    }
    int year=time/100;
    int month=time%100;
    if(month<1||month>12){
        cout<<"输入的月份有误，请重新输入"<<endl;
        return false;
    }
    return true;
}

/**
* @brief 检测离职日期是否晚于入职日期
* @param int a：入职日期；int b：离职日期
* @return 离职日期不早于于入职日期返回true，反之返回false
* @author Duowen
* @version v1.0
*/
bool check(int a,int b){
    if(a<=b) return true;
    cout<<"离职日期不能早于入职日期，请重新输入"<<endl;
    return false;
}