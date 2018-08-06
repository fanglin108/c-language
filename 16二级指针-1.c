#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    //int a[10];  // 类比一下
    //int *p1 = (int *)malloc(sizeof(int) * 10); // 类比一下

    char **p = (char **)malloc(sizeof(char *) * 10);

    int i = 0;
    char tmp[30] = {0};
    for (i=0; i<10; i++) {
        p[i] = (char *)malloc(sizeof(char) * 30);
        sprintf(tmp, "aaa-%d", i);
        strcpy(p[i], tmp);
    }

    for (i=0; i<10; i++) {
        printf("%s, ", p[i]);
    }
    printf("\n");

    for (i = 0; i<10; i++) {
        if (p[i] != NULL) {
            free(p[i]);
            p[i] = NULL;
        }
    }

    if (p != NULL) {
        free(p);
        p = NULL;
    }
}