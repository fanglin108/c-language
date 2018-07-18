#include "DynamicArray.h"

void main()
{
   // 初始化动态数组
   Dynamic_Array *arr = Init_Array();


   // 插入数据
   for (int i=0; i<10; i++) {
       PushBack_Array(arr, i);
   }

   // 打印
   Print_Array(arr);

   printf("Array capacity = %d \n", arr->capacity);
   printf("Array size= %d \n", arr->size);


   // 动态扩容
   PushBack_Array(arr, 10);
   PushBack_Array(arr, 11);

   // 打印
   Print_Array(arr);

   printf("Array capacity = %d \n", arr->capacity);
   printf("Array size= %d \n", arr->size);


   // 根据位置删除
   RemoveByPos_Array(arr, 8);
   Print_Array(arr);

   // 根据值删除
   RemoveByValue_Array(arr, 7);
   Print_Array(arr);

   // 根据值查找位置
   int pos = Find_Array(arr, 6);
   printf("pos = %d\n", pos);


   // 释放内存(销毁)
   Free_Array(arr);
}
