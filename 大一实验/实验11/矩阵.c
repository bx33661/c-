// Created by �Ų��� on 2023/11/11.
//����˷�����
#include "stdio.h"

int main(){
    //�������A��B�Ļ�������
    printf("���������A��������������\n");
    int a_r,a_c;
    scanf("%d %d",&a_r,&a_c);
    printf("���������B��������������\n");
    int b_r,b_c;
    scanf("%d %d",&b_r,&b_c);
    //�ж����֪��a_c=b_r
    int a[a_r][a_c];
    int b[b_r][b_c];

    //�жϾ���A��B�Ƿ���Խ��г˷�
    if(a_c!=b_r){
        printf("����A��B���ܽ��г˷����㣡\n");
        return 0;//�����ó���
    }

    //��ʼ�����������A��B
    printf("----------------------\n");
    printf("���濪ʼ���о���A��B�����룺\n");
    printf("----------------------\n");
    printf("�밴�մ����ң����ϵ��µ�˳���������A��B��Ԫ�أ�\n");
    printf("----------------------\n");
    int i,j,k;
    for(i = 0;i < a_r; i++) {
        for (j=0;j<a_c;j++){
            printf("���������A�ĵ�%d�е�%d�е�Ԫ�أ�\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("----------------------\n");
    for(i = 0;i< b_r; i++) {
        for (j=0;j<b_c;j++){
            printf("���������B�ĵ�%d�е�%d�е�Ԫ�أ�\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    //��ʼ��ʼ�������A��B
    printf("����AΪ��\n");
    for(i = 0;i < a_r; i++) {
        for (j=0;j<a_c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("����BΪ��\n");
    for(i = 0;i < b_r; i++) {
        for (j=0;j<b_c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //��ʼ��ʼ������C
    int c[a_r][b_c];
    for(i = 0;i < a_r; i++) {//�þ���C��ÿ��Ԫ�ض�Ϊ0
        for (j=0;j<b_c;j++){
            c[i][j]=0;
        }
    }

    //��ʼ���о���˷�
    for(i = 0;i<a_r;i++){
        for ( j = 0; j <b_c; j++)
        {
            for ( k = 0; k < a_c; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    //��ʼ�������C
    printf("����CΪ��\n");
    for(i = 0;i < a_r; i++) {
        for (j=0;j<b_c;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}