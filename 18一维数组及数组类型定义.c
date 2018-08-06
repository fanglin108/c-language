#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int a[] = {1,2,3,4,5,6,7,8};
    int n = 0;
    n = sizeof(a)/sizeof(a[0]);  // ?

    // 数组类型:
    // a代表数组首元素地址
    // &a代表整个数组的首地址，它虽然和首元素地址值是一样的，但他们+1的步长是不一样的
    printf("a =%d, a+1 =%d \n", a, a+1);
    printf("&a=%d, &a+1=%d \n", &a, &a+1); 

    printf("定义数组类型:\n");
    typedef int A[8];
    A arr;
    int i = 0;
    int n2 = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i<n2; i++) {
        arr[i] = i+10;
    }

    for (i = 0; i<n2; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n");

    int b[] = {1,2,3,4};
    printf("sizeof(b) = %d\n", sizeof(b));

    int c[100] = {1,2,3,5};
    printf("sizeof(c) = %d\n", sizeof(c));

}