//      -BX-
// Created by lenovo on 2023/11/10.
#include "stdio.h"

int pan_zhishu(int x,int *y){
    if(x==1){
        *y = 1;
        return 1;
    }
    else{
        for(int i=2;i<x;i++){
            if(x%i==0){
                *y=0;
                return 1;
            }
        }
        *y = 1;
        return 0;
    }

}

void fun(int *y){//利用指针
    /*
    思路：
    用该数 n 不断除以一个递增的数 i （该数初始为 2 ，递增至 n ）若能整除 i ，则当前 i 就为 n 的因子之一，
    然后将 n 用该因子缩小，即 n=n/i 再重复执行上述操作，若 n = i 则说明分解因子结束了
    */
    for (int i = 2; i <= *y; i++){
        while(*y%i==0){
            *y = *y/i;
            printf("其中一个因子为%d\n",i);
        }
    }
}


int main(){
    printf("请输入一个整数：\n");
    int y;
    scanf("%d",&y);
    int a;//用来判断y是否为质数
    pan_zhishu(y,&a);
    /*
    思路：
    用该数 n 不断除以一个递增的数 i （该数初始为 2 ，递增至 n ）若能整除 i ，则当前 i 就为 n 的因子之一，
    然后将 n 用该因子缩小，即 n=n/i 再重复执行上述操作，若 n = i 则说明分解因子结束了
    */
    if (a==1)
    {
        printf("%d",y);
    }
    else{
        printf("以下是结果:\n ");
        fun(&y);
    }
    printf("分解完毕！");
    return 0;
}
