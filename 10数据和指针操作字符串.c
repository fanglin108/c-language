#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char buf[] = "abcdefgh";
    int i = 0;

    for (i=0; i<strlen(buf); i++) {
        printf("%c", buf[i]);
    }

    printf("\n");

    char *p = NULL;
    p = buf; //数组名就是地址
    for (i=0; i<strlen(buf); i++) {
        //printf("%c", p[i]);
        //printf("%c", *(p+i));
        printf("%c", *(buf+i));
        //那么buf和p完全等价吗？ 
        //p++
        //buf++ // err, buf只是一个常量，不能修改
    }

    printf("\n");

    while(*p) {
        printf("%c", *p++);
    }
    printf("\n");


}
