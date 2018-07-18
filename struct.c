#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Teacher{
    //char name[50];
    char *name;
    int age;
} Teacher;

// 打印
void printTeacher(Teacher *p, int n){
    int i;
    for (i=0; i<n; i++) {
        printf("%s, %d\n", p[i].name, p[i].age);
    }   
}

// 释放内存
void freeTeacher(Teacher *p, int n) {
    for (int i=0; i<n; i++) {
        if (p[i].name != NULL) {
            free(p[i].name);
            p[i].name = NULL;
        }

    }

    if (p != NULL) {
        free(p);
        p = NULL;
    }
}

// 分配内存1
void getMem(Teacher *p, int n) {
    char buf[30];
    for (int i=0; i<n; i++) {
        p[i].name = (char *)malloc(30);
        sprintf(buf, "user-%d%d", i, i);
        strcpy(p[i].name, buf);
        p[i].age = 30 + i;
    }

}

// 分配内存2
int getMem2(Teacher **tpp, int n) {
    if (tpp == NULL) {
        return -1;
    }
    Teacher *p = NULL;
    p = (Teacher*)malloc(n * sizeof(Teacher));
    char buf[30];
    for (int i=0; i<n; i++) {
        p[i].name = (char *)malloc(30);
        sprintf(buf, "user-%d%d", i, i);
        strcpy(p[i].name, buf);
        p[i].age = 30 + i;
    }

    *tpp = p;
    return 0;
}

void main()
{

#if 0
    // 学习1
    Teacher t;
    //t.name = "fanglin";
    //strcpy(t.name, "fangli22n");
    t.name = (char *)malloc(30);
    strcpy(t.name, "fangli333n");
    t.age = 20;
    printf("%s, %d\n", t.name, t.age);
#endif
        
#if 0
    // 学习2 (画内存图学习之)
    Teacher *p = NULL;
    p = (Teacher *)malloc(sizeof(Teacher));
    p->name = (char *)malloc(30);
    strcpy(p->name, "fanglin2");
    //p->name = "aa";
    p->age = 30;
    printf("%s, %d\n", p->name, p->age);
    if (p->name != NULL) {
        free(p->name);
        p->name = NULL;
    }

    if (p != NULL) {
        free(p);
        p = NULL;
    }
#endif

#if 0
    // 学习3
    Teacher *p = NULL;
    p = (Teacher *)malloc(3 * sizeof(Teacher));
    for (int i=0; i<3; i++) {
        //p[i].name = "user";
        p[i].name = (char *)malloc(30);
        strcpy(p[i].name, "fanglin");
        p[i].age = 30 + i;
    }

    
    printTeacher(p, 3);
    freeTeacher(p, 3);
    p = NULL;
#endif


#if 0
    // 学习4
    Teacher *p = NULL;
    int n = 3;
    p = (Teacher *)malloc(n * sizeof(Teacher));
    getMem(p, n);

    printTeacher(p, 3);
    freeTeacher(p, 3);
    p = NULL;
#endif


    // 学习5
    Teacher *p = NULL;
    int n = 3;
    getMem2(&p, n);

    printTeacher(p, 3);
    freeTeacher(p, 3);
    p = NULL;
}

