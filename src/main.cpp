/**@mainpage  ����������
* <table>
* <tr><th>Project  <td>Aging-Calculator
* <tr><th>Author   <td>Duowen
* </table>

* @section   ��Ŀ��ϸ����
* ��������ʱ�䣬������ְ��ݺ��·��Լ��ܼ�������
*
* @section   ��������  
* -# �����ʽ���
* 
* @section   �÷����� 
* -# ������yyyymm����ʽ���룬����202102
* 
**********************************************************************************
*/

/**@file  main.cpp
* @brief       ��Ŀ�������ļ�
* @details     main�������
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
* @brief ������
* @param void
* @return 0
* @author Duowen
* @version v1.0
*/
int main(){
    string begins,ends;
    int begin,end;
    while(true){
        cout<<"��ְ���ڣ�"<<endl;

        while(cin>>begins){
            begin=atoi(begins.c_str());
            if(check(begin)){
                break;
            }
        }
        cout<<"��ְ���ڣ�"<<endl;
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
* @brief �������ʱ���Ƿ�Ϸ�
* @param int time�����ָ�ʽ��ʱ��
* @return ��ʽ�Ϸ�����true����ʽ�Ƿ�����false
* @author Duowen
* @version v1.0
*/
bool check(int time){
    if(time<=100000||time>=999912) {
        cout<<"����ĸ�ʽ����������������ȷ�ĸ�ʽ����202101"<<endl;
        return false;
    }
    int year=time/100;
    int month=time%100;
    if(month<1||month>12){
        cout<<"������·���������������"<<endl;
        return false;
    }
    return true;
}

/**
* @brief �����ְ�����Ƿ�������ְ����
* @param int a����ְ���ڣ�int b����ְ����
* @return ��ְ���ڲ���������ְ���ڷ���true����֮����false
* @author Duowen
* @version v1.0
*/
bool check(int a,int b){
    if(a<=b) return true;
    cout<<"��ְ���ڲ���������ְ���ڣ�����������"<<endl;
    return false;
}