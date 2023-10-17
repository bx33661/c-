#include <stdio.h>
//分段函数的求解

int main(){
    int x,y;
    printf("请输入x,");
    scanf("%d",&x);
    if (x<1)
    {
        printf("y=%d\n",x);
    }
    else if (1<=x<10)
    {
        printf("y=%d\n",2*x-1);
    }
    else if (x>=10)
    {
        printf("y=%d\n",3*x-11);
    }
    return 0;    
}