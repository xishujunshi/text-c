#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//[问题描述]
//实现顺序表的建立、求长度，取元素、修改元素、插入、删除等基本操作。
//[基本要求]
//（1）依次从键盘读入数据，建立顺序表；
//（2）输出顺序表中的数据元素；
//（3）求顺序表的长度；
//（4）根据指定条件能够取元素和修改元素；
//（5）实现在指定位置插入和删除元素的功能。


typedef struct
{
    int* elem;
    int length;
} array;

// 创建顺序表
void create(array* arr)
{
    printf("请输入要创建的线性表的长度：");
    int length = 0;
    scanf("%d", &length);
    int a;
    printf("请输入顺序表的数据：\n");

    arr->elem = (int*)malloc(length * sizeof(int));
    arr->length = 0;

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a);
        arr->elem[arr->length++] = a;
    }
}

// 读取顺序表所有元素
void readall(const array* arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        printf("%d ", arr->elem[i]);
    }
    printf("\n");
}

// 按条件读取顺序表元素
void readone(int left, int right, const array* arr)
{
    printf("大于%d且小于%d的数据为：", left, right);
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->elem[i] > left && arr->elem[i] < right)
        {
            printf("%d ", arr->elem[i]);
        }
    }
    printf("\n");
}

// 按条件修改顺序表元素
void change(int left, int right, array* arr)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->elem[i] > left && arr->elem[i] < right)
        {
            printf("要修改的值为：%d\n", arr->elem[i]);
            printf("请输入要修改的数据：");
            int temp = 0;
            scanf("%d", &temp);
            arr->elem[i] = temp;
        }
    }
}

// 在指定位置插入元素
void insert(array* arr, int pos, int value)
{
    if (pos < 0 || pos > arr->length)
    {
        printf("插入位置非法\n");
        return;
    }

    // 扩展数组空间
    if (arr->length == 100)
    {
        arr->elem = (int*)realloc(arr->elem, 2 * arr->length * sizeof(int));
    }

    // 后移元素
    for (int i = arr->length; i > pos; i--)
    {
        arr->elem[i] = arr->elem[i - 1];
    }

    // 插入新元素
    arr->elem[pos] = value;
    arr->length++;
}

// 删除指定位置的元素
void del(array* arr, int pos)
{
    if (pos < 0 || pos >= arr->length)
    {
        printf("删除位置非法\n");
        return;
    }

    // 前移元素
    for (int i = pos; i < arr->length - 1; i++)
    {
        arr->elem[i] = arr->elem[i + 1];
    }

    arr->length--;
}

int main()
{
    array arr;

    // 创建顺序表
    create(&arr);

    // 输出顺序表长度
    printf("顺序表的长度为%d\n", arr.length);

    // 输出顺序表所有元素
    printf("顺序表的元素为：");
    readall(&arr);

    // 指定条件读取顺序表元素
    int left, right;
    printf("请输入要读取数据的范围，例如：30，80或者70，20：\n");
    scanf("%d,%d", &left, &right);
    if (left > right)
    {
        int temp = left;
        left = right;
        right = temp;
    }
    readone(left, right, &arr);
    printf("\n");

    // 指定条件修改顺序表元素
    printf("请输入要修改数据的范围，例如：30，80或者70，20：\n");
    scanf("%d,%d", &left, &right);
    if (left > right)
    {
        int temp = left;
        left = right;
        right = temp;
    }
    change(left, right, &arr);
    readall(&arr);
    printf("\n");

    // 插入元素
    int pos, value;
    printf("请输入要插入的位置：");
    scanf("%d", &pos);
    printf("请输入要插入的值：");
    scanf("%d", &value);
    insert(&arr, pos, value);
    printf("插入后的线性表的长度为：%d\n", arr.length);
    printf("插入后的线性表为：");
    readall(&arr);
    printf("\n");

    // 删除元素
    printf("请输入要删除的位置：");
    scanf("%d", &pos);
    del(&arr, pos);

    // 输出修改后的顺序表所有元素
    printf("删除后的线性表的长度为：%d\n", arr.length);
    printf("修改后的顺序表的元素为：");
    readall(&arr);


    return 0;
}

