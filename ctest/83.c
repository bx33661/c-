#include <stdio.h>

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    
    int temp;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < i; j++)
        {
            temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        
    }
    printf("\n");
    for ( i = 0; i < 3 ;i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}