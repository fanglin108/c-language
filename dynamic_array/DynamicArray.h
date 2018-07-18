#ifndef DYNAMIC_ARRAY_H

#define DYNAMIC_ARRAY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// 动态数据的结构体定义
typedef struct DYNAMICARRAY{
   int *pAddr; // 存放数据的地址
   int size; // 当前多少个元素
   int capacity; // 容量，最多能容纳多少个元素
}Dynamic_Array;


// 初始化
Dynamic_Array* Init_Array();

// 插入
void PushBack_Array(Dynamic_Array *arr, int value);


// 根据位置删除
void RemoveByPos_Array(Dynamic_Array *arr, int pos);


// 根据值删除
void RemoveByValue_Array(Dynamic_Array *arr, int value);

// 查找
int Find_Array(Dynamic_Array *arr, int value);


// 打印
void Print_Array(Dynamic_Array *arr);

// 释放内存
void Free_Array(Dynamic_Array *arr);

// 清空数组
void Clear_Array(Dynamic_Array *arr);

// 获取动态数组容量
int Capacity_Array(Dynamic_Array *arr);


// 获取动态数组元素个数
int size_Array(Dynamic_Array *arr);

// 根据位置获取某个位置元素
int At_Array(Dynamic_Array *arr, int pos);


#endif
