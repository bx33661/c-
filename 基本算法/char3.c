#include <stdio.h>
#include <string.h>
/*
利用strlen()函数计算字符串的长度！！！！
*/
int main(){
    int len=0;
    int i;
    char str[]= "HelloWorld---from BX";
    len = strlen(str);
    printf("字符串长度为：%d\n",len);
    return 0;
}
