#include <stdio.h>
#include <stdlib.h>

void main()
{
    // 保证所指内存块可修改，否则报段错误
    char *buf = "abc"; //文字常量区，内存不可改
    //buf[1] = '1'; // err


    char buf2[] = "ade";
    buf2[1] = '1'; // ok

    printf("%s\n", buf2);
}
