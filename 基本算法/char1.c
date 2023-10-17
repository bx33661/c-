#include <stdio.h>
//使用字符串输出
int main(){
    char a[20]={'H','e','l','l','o','W','o','r','l','d'};
    printf(a);//输出字符串方法1，并不推荐
    putchar('\n');
    printf("%s",a);//输出字符串方法2，推荐
    return 0;
}