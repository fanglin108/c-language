#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  // 为什么是两个指针，可以用数据类比下，比如
  function fn1(int *a){}
  或者
  function fn2(int a[10]){}
  int a[10] = {1,2,3,4,5};

**/

// 打印数据
void print_array(char **p, int n)
{
    int i = 0;

    for (i=0; i<n; i++) {
        printf("%s\n", p[i]);
    }
}

void print_array2(char *p[], int n)
{
    int i = 0;

    for (i=0; i<n; i++) {
        printf("%s ", p[i]);
    }
    printf("\n");
}

// 选择排序
//void sort_array(char **p, int n)
void sort_array(char *p[], int n)
{
    char *tmp = NULL;
    int i = 0;
    int j = 0;
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (strcmp(p[i], p[j]) > 0) {
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
}

void main()
{
    char *p[] = {"333", "111", "555", "222"};
    int i = 0;


    /*
    for (i=0; i<sizeof(p)/sizeof(p[0]); i++) {
        //printf("%s\n", p[i]);
        printf("%s\n", *(p+i));
    }
    */

    int n = sizeof(p)/sizeof(p[0]);
    printf("排序前:\n");
    print_array2(p, n);


    sort_array(p, n);
    printf("排序后:\n");
    print_array2(p, n);
    
}