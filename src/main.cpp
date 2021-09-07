#include "../include/mytime.h"
#include "../include/period.h"
#include <iostream>
using namespace std;

bool check(int);
bool check(int,int);

dtime operator-(const mytime& a,const mytime &b){
    int years=a.year-b.year;
    int months=a.month-b.month;
    if(months<0){
        years--;
        months=months+12;
    }
    return dtime(years,months+1);
}

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

bool check(int a,int b){
    if(a<=b) return true;
    cout<<"离职日期不能早于入职日期，请重新输入"<<endl;
    return false;
}