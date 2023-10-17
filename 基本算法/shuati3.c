#include <stdio.h>

//不引入其他项的换位

int main(){
    int a =20,b=30;
    printf("a=%d,b=%d\n",a,b);
    a = a+b;//求和a=50,b=30
    b = a-b;//b=20,a=50
    a = a-b;//a=30,b=20
    printf("a=%d,b=%d\n",a,b);
    return 0;
}