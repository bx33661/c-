#include <stdio.h>

/*
利用循环遍历的方法计算字符串的长度！！！！

*/

int main(){
    int len=0;
    int i;
    char str[]= "HelloWorld---from BX";
    while (str[len]!='\0')//'\0'是字符串的结束符
    //算的上是一种遍历字符串的方法
    {
        len++;
    }
    printf("字符串长度为：%d\n",len);
    return 0;
}