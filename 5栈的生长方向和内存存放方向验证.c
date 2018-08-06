#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int a = 1;
    int b = 2;

    printf("%d, %d\n", &a, &b);

    char buf[100] = {'a', 'b', 'c'};
    printf("%d, %d\n", buf, buf+1);

    char *p1 = (char *)malloc(sizeof(10));
    char *p2 = (char *)malloc(sizeof(10));

    printf("%d, %d\n", p1, p2);
}
