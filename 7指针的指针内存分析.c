#include <stdio.h>
#include <stdlib.h>

// PS:画图分析内存中表示形式

void change_pointer(int **p)
{
    int *q = *p;
    *q = 100;
    printf("change_pointer_*p=%d, change_pointer_p=%d, change_pointer_q=%d\n", *p, p, q);
}

void main()
{
    int a = 10;
    int *p = NULL;
    p = &a;

    printf("\n");
    printf("main_p=%d, main_&a=%d\n", p, &a);


    printf("\n");
    change_pointer(&p);

    printf("\n");
    printf("a=%d, p=%d\n",a, *p );
}
