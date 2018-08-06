#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int a[10] = {0};

    // 数组指针，它是指针，指向一个数组的指针
    // 数组指针，指向一维数组的整个数组，而不是首元素地址。
    typedef int A[10];
    A *p = NULL; // 数组指针类型变量

    //p = a; // 这里会报一个warning，因为a和&a虽然值相同，都是数组首元素地址，但是&a代表的是整个数组的首地址。
    p = &a;

    printf("p=%d, p+1=%d \n", p, p+1);

    int i=0;
    for (i=0; i<10; i++) {
        (*p)[i] = i+10;
    }

    for (i=0; i<10; i++) {
        printf("%d, ", (*p)[i]);
    }

    printf("\n");
}