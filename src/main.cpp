#include "mytime.h"
#include "period.h"
#include <iostream>

int main(){
    int begin;
    int end;
    std::cin>>begin>>end;
    mytime begins(begin);
    mytime ends(end);
    dtime result=ends-begins;
    result.show();
    return 0;
}