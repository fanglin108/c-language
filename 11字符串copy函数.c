#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 1. 判断形参指针是否为NULL
// 2. 尽量不要直接操作形参
// 3. 成功返回0，其它任何错误返回非0
int my_strcpy(char *dest, char *src)
{
    if (dest == NULL || src == NULL) {
        return -1;
    }

    char *from = src;
    char *to = dest;

    while(*to++ = *from++) {
        NULL;
    }


    printf("my dest=%s\n", dest);
    return 0;
}

void main()
{
    char src[] = "abcdef";
    char dest[] = {0};


    my_strcpy(dest, src);
    printf("dest=%s\n", dest);

}
