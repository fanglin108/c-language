#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(char arr[4][30], int n)
{
    int i = 0;

    for (i=0; i<n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

void sort_array(char arr[4][30], int n)
{
    int i = 0;
    int j = 0;
    char tmp[30] = {0};

    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(tmp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], tmp);
            }
        }
    }
}


void main()
{
    // 注意步长是30
    char arr[4][30] = {"444", "222", "555", "333"};
    int i = 0;
    
    printf("sizeof(arr) = %d, sizeof(arr[0]) = %d\n", sizeof(arr), sizeof(arr[0]));

    int n = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, n);
    sort_array(arr, n);
    print_array(arr, n);
}