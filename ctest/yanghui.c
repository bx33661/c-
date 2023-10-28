#include <stdio.h>
//杨辉三角
int main(){
    int i,j;
    int a[11][11];
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < i+1; j++)
        {
            if (j==0||j==i)
            {
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];

            }
        }
        
    }
    int k;
    for ( i = 0; i < 10; i++)
    {
        for ( k = 0; k < i+1; k++)
        {
            printf("%4d",a[i][k]);
        }
        
        printf("\n");//换行
    }    
}