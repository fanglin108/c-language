#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *get_str()
{
    char arr[] = "abcdefgh";
    return arr;
}

main()
{
    char buf[128] = {0};

    //strcpy(buf, get_str()); // 乱码，结果是不确定的
    //printf("%s\n", buf);

    char *p = NULL;
    p = get_str(); // 乱码
    printf("%s\n", p);

}
