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

void fun(int *y){//����ָ��
    /*
    ˼·��
    �ø��� n ���ϳ���һ���������� i ��������ʼΪ 2 �������� n ���������� i ����ǰ i ��Ϊ n ������֮һ��
    Ȼ�� n �ø�������С���� n=n/i ���ظ�ִ�������������� n = i ��˵���ֽ����ӽ�����
    */
    for (int i = 2; i <= *y; i++){
        while(*y%i==0){
            *y = *y/i;
            printf("����һ������Ϊ%d\n",i);
        }
    }
}


int main(){
    printf("������һ��������\n");
    int y;
    scanf("%d",&y);
    int a;//�����ж�y�Ƿ�Ϊ����
    pan_zhishu(y,&a);
    /*
    ˼·��
    �ø��� n ���ϳ���һ���������� i ��������ʼΪ 2 �������� n ���������� i ����ǰ i ��Ϊ n ������֮һ��
    Ȼ�� n �ø�������С���� n=n/i ���ظ�ִ�������������� n = i ��˵���ֽ����ӽ�����
    */
    if (a==1)
    {
        printf("%d",y);
    }
    else{
        printf("�����ǽ��:\n ");
        fun(&y);
    }
    printf("�ֽ���ϣ�");
    return 0;
}
