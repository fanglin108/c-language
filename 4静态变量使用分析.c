#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_str()
{
    static char *p1 = "abc";
    return p1;
}

int *get_num()
{
    static int a = 100;
    return &a;
}

main()
{
    char *p = get_str();
    int *num = get_num();

    printf("%s, %d\n", p, p);
    printf("%d\n", *num);
}
