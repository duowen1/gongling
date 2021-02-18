#include "mytime.h"
#include "period.h"
#include <iostream>
using namespace std;

bool check(int);
bool check(int,int);

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

bool check(int a,int b){
    if(a<=b) return true;
    cout<<"��ְ���ڲ���������ְ���ڣ�����������"<<endl;
    return false;
}