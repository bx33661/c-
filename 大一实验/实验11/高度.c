// Created by bx on 2023/11/11.
//ʵ��11
#include "stdio.h"

int main(){
    double h=100;//��ʼ�߶�
    double total_meters=0;//����һ���������洢��·��
    for(int i=0;i<10;i++){
        total_meters = total_meters + h;//����ʱ�ĸ߶�
        h = h/2;//���㷴���ĸ߶�
        if(i==9){
            printf("��ʮ�η����߶�Ϊ��%lf\n",h);
            printf("��ʮ�η�����·��Ϊ��%lf\n",total_meters);
        }
        total_meters = total_meters + h;
    }
    return 0;
}   