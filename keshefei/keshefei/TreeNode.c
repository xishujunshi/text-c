#include<stdio.h>
#include<stdlib.h>

//[问题描述]
//实现带头结点的单链表的建立、求长度，取元素、修改元素、插入、删除等单链表的基本操作。
//[基本要求]
//（1）依次从键盘读入数据，建立带头结点的单链表；
//（2）输出单链表中的数据元素
//（3）求单链表的长度；
//（4）根据指定条件能够取元素和修改元素；
//（5）实现在指定位置插入和删除元素的功能。

typedef struct ListNode {
    int data;
    struct ListNode* next;
} list;

// 遍历链表
void readList(list* root) {
    list* current = root;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}

// 读取指定范围内的数据
void readRange(int min, int max, list* root) {
    list* current = root;
    while (current != NULL) {
        if (current->data > min && current->data < max) {
            printf("%d ", current->data);
        }
        current = current->next;
    }
}

// 修改指定范围内的数据
void changeRange(int min, int max, list* root) {
    list* current = root;
    while (current != NULL) {
        if (current->data > min && current->data < max) {
            int num = 0;
            printf("当前要修改的值为%d，请输入要修改的数：", current->data);
            scanf("%d", &num);
            current->data = num;
        }
        current = current->next;
    }
}

// 在指定位置插入数据
void insertAt(int position, list* root) {
    list* current = root;
    for (int i = 1; i < position; i++) {
        if (current == NULL) {
            printf("插入位置超出链表长度！");
            return;
        }
        current = current->next;
    }

    int num = 0;
    printf("请输入要插入的数值：");
    scanf("%d", &num);

    list* newNode = (list*)malloc(sizeof(list));
    newNode->data = num;
    newNode->next = current->next;
    current->next = newNode;
}

// 删除指定位置的数据
void deleteAt(int position, list* root) {
    list* current = root;
    for (int i = 1; i < position; i++) {
        if (current == NULL || current->next == NULL) {
            printf("删除位置超出链表长度！");
            return;
        }
        current = current->next;
    }

    list* deletedNode = current->next;
    current->next = current->next->next;
    free(deletedNode);
}


// 创建指定长度的链表
list* create(int length) {
    list* head = (list*)malloc(sizeof(list));
    list* current = head;
    printf("接下来请输入数据来创建线性表！！！\n");
    for (int i = 0; i < length; i++) {
        int num;
        scanf("%d", &num);

        current->data = num;
        if (i < length - 1) {
            current->next = (list*)malloc(sizeof(list));
            current = current->next;
        }
        else {
            current->next = NULL;
        }
    }
    return head;
}


int main() {
    int length;
    printf("请输入要创建的线性表长度：");
    scanf("%d", &length);

    list* head = create(length);
    printf("创建的线性表为：");
    readList(head);
    printf("\n");

    // 释放链表内存
    list* current = head;


    // 读取和修改指定范围的数据
    int left = 0, right = 0;
    printf("请输入要读取数据的范围，例如：30，80或者70，20：\n");
    scanf("%d,%d", &left, &right);
    if (left > right) {
        int temp = left;
        left = right;
        right = temp;
    }
    printf("大于%d且小于%d的数据为：", left, right);
    readRange(left, right, head);
    printf("\n");

    printf("请输入要修改数据的范围，例如：30，80或者70，20：\n");
    scanf("%d,%d", &left, &right);
    if (left > right) {
        int temp = left;
        left = right;
        right = temp;
    }
    changeRange(left, right, head);
    printf("修改之后的数据为：");
    readList(head);
    printf("\n");

    // 指定位置插入数据
    int position = 0;
    printf("请输入要插入的数据的位置：\n");
    scanf("%d", &position);
    insertAt(position, head);
    printf("插入后的线性表的长度为：%d\n", ++length);
    printf("修改后的线性表为：");
    readList(head);
    printf("\n");

    // 删除指定位置的数据
    printf("请输入要删除的数据的位置：\n");
    scanf("%d", &position);
    deleteAt(position, head);
    printf("删除后的线性表的长度为：%d\n", ++length);
    printf("删除后的线性表为：");
    readList(head);

    return 0;
}