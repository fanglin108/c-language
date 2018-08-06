#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// PS:全局区中存放字符串常量，全局变量，静态变量

char *get_str()
{
    char *p = "abc";
    return p;
}

char *get_str2()
{
    char *q = "abc";
    return q;
}

main()
{
    char *p = NULL;
    char *q = NULL;


    p = get_str();
    printf("%s %d\n", p, p);

    q = get_str2();
    printf("%s %d\n", q, q);
}
