#include <stdio.h>

int main(){
    int t = 668668;
    // 668668是一个以秒为单位的值
    int hour ,minute , second;
    hour = t /3600;
    minute = (t %3600)%60;
    second = (t%3600)%60;
    printf("时间是：%d时%d分%d秒\n",hour,minute,second);
    return 0;
}
