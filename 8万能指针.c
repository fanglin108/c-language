#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 万能指针和正常指针没啥区别，本质上也只是一种变量类型，但在使用时注意类型转换

void main()
{
    void *p = NULL;
    char buf[100] = {'a','b','c','d'};
    p = buf;
    printf("%s\n", (char *)p);



    void *q = NULL;
    int a[10] = {1,2,3,4,5};
    int i=0;
    q = a;
    for (i=0; i<5; i++) {
        printf("%d\n", *((int *)q+i));
    }


    char str2[100] = {0};
    char *p2 = NULL;
    p2 = str2;
    //strcpy(str2, "abc"); // or
    strcpy(p2, "abc");
    printf("%s, %s\n", str2, p2);

}
