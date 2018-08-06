#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char **init_array(int n)
{
    char **p = (char **)malloc(sizeof(char *) * 10);
    if (p == NULL) {
        return NULL;
    }

    int i = 0;
    char tmp[30] = {0};
    for (i=0; i<10; i++) {
        p[i] = (char *)malloc(sizeof(char) * 30);
        sprintf(tmp, "bbb-%d", i);
        strcpy(p[i], tmp);
    }


    return p;   
}

void print_array(char **p)
{
    int i=0;
    for (i=0; i<10; i++) {
        printf("%s, ", p[i]);
    }  
}


void free_array(char **p)
{
    int i;
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

// 画图分析内存
void main()
{
    //int a[10];  // 类比一下
    //int *p1 = (int *)malloc(sizeof(int) * 10); // 类比一下

    char **p = NULL;
    p = init_array(10);
    if (p == NULL) {
        printf("error\n");
    }

    print_array(p);
    printf("\n");

    free_array(p);
    if (p != NULL) {
        p = NULL;
    }
}