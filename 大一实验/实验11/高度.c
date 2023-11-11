// Created by bx on 2023/11/11.
//实验11
#include "stdio.h"

int main(){
    double h=100;//初始高度
    double total_meters=0;//定义一个量用来存储总路程
    for(int i=0;i<10;i++){
        total_meters = total_meters + h;//下落时的高度
        h = h/2;//计算反弹的高度
        if(i==9){
            printf("第十次反弹高度为：%lf\n",h);
            printf("第十次反弹总路程为：%lf\n",total_meters);
        }
        total_meters = total_meters + h;
    }
    return 0;
}   