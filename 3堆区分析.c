#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_str2()
{
    char *tmp = (char *)malloc(100);
    if (tmp == NULL) {
        return NULL;
    }
    strcpy(tmp, "aaaaabbbbbbbcccccccc");
    return tmp;
}

main()
{
    char buf[128] = {0};

    strcpy(buf, get_str2()); // ok
    printf("%s\n", buf);


    char *p = NULL;
    p = get_str2(); // ok
    if (p != NULL) {
        printf("%s\n", p);
        free(p); // free只是告诉os这块内存可以使用了(标记一下)，实际内容还是在的，所以再使用p = NULL手动赋值为空，这是一个好的习惯
        p = NULL;
    }
}
