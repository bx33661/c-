#include <stdio.h>
//maopao排序
int main(){
    int a[5]={5,4,3,2,1};
    int i,j,temp;
    for (i=0;i<4;i++)
{
        for ( j = 0; j<4-i; j++)
    {
        if (a[j]>a[j+1])
        {
            temp =a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
    for ( j = 0; j < 5; j++)
    {
        printf("%3d",a[j]);
    }
    return 0;
}