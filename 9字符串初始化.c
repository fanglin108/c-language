#include <stdio.h> 
#include <stdlib.h>
#include <string.h>


void main()
{
    // 不指定长度，后面没有0结束符
    char buf[] = {'a', 'b', 'c'};
    printf("buf=%s\n", buf);
    printf("\n");

    char buf2[] = {'a', 'b', 'c', 0, 'd'};
    printf("buf2=%s\n", buf2);

    char buf3[] = "abcdefg";
    printf("buf3=%s, strlen=%d, sizeof=%d\n", buf3, strlen(buf3), sizeof(buf3));


    char buf4[100] = "abcdefg";
    printf("buf4=%s, strlen=%d, sizeof=%d\n", buf4, strlen(buf4), sizeof(buf4));


    // 指定长度，后面没赋值的元素自动补0
    char buf5[100] = {'a','b','c'};
    printf("buf5=%s, strlen=%d, sizeof=%d\n", buf5, strlen(buf5), sizeof(buf5));
}
