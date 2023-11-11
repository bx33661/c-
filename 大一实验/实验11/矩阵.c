// Created by 张博翔 on 2023/11/11.
//矩阵乘法规则
#include "stdio.h"

int main(){
    //定义矩阵A和B的基本参数
    printf("请输入矩阵A的行数和列数：\n");
    int a_r,a_c;
    scanf("%d %d",&a_r,&a_c);
    printf("请输入矩阵B的行数和列数：\n");
    int b_r,b_c;
    scanf("%d %d",&b_r,&b_c);
    //有定义可知道a_c=b_r
    int a[a_r][a_c];
    int b[b_r][b_c];

    //判断矩阵A和B是否可以进行乘法
    if(a_c!=b_r){
        printf("矩阵A和B不能进行乘法运算！\n");
        return 0;//结束该程序
    }

    //开始进行输入矩阵A和B
    printf("----------------------\n");
    printf("下面开始进行矩阵A和B的输入：\n");
    printf("----------------------\n");
    printf("请按照从左到右，从上到下的顺序输入矩阵A和B的元素：\n");
    printf("----------------------\n");
    int i,j,k;
    for(i = 0;i < a_r; i++) {
        for (j=0;j<a_c;j++){
            printf("请输入矩阵A的第%d行第%d列的元素：\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("----------------------\n");
    for(i = 0;i< b_r; i++) {
        for (j=0;j<b_c;j++){
            printf("请输入矩阵B的第%d行第%d列的元素：\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    //开始初始输出矩阵A和B
    printf("矩阵A为：\n");
    for(i = 0;i < a_r; i++) {
        for (j=0;j<a_c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("矩阵B为：\n");
    for(i = 0;i < b_r; i++) {
        for (j=0;j<b_c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //开始初始化矩阵C
    int c[a_r][b_c];
    for(i = 0;i < a_r; i++) {//让矩阵C的每个元素都为0
        for (j=0;j<b_c;j++){
            c[i][j]=0;
        }
    }

    //开始进行矩阵乘法
    for(i = 0;i<a_r;i++){
        for ( j = 0; j <b_c; j++)
        {
            for ( k = 0; k < a_c; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    //开始输出矩阵C
    printf("矩阵C为：\n");
    for(i = 0;i < a_r; i++) {
        for (j=0;j<b_c;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}