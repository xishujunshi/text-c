#include<stdio.h>
#define maxsize 100

//顺序栈
typedef struct {
	int a[maxsize];
	int pre;
	int next;
}Sqstack;

//初始化
void Initstack(Sqstack* a) {
	a->pre = -1;
	a->next = 1;
}

//创建栈
int creat(Sqstack* a) {
	int num;
	printf("输入创建的栈的长度\n");
	scanf_s("%d", &num);
	if (num > maxsize) {
		num = maxsize;
		printf("超出范围，创建了%d", maxsize);
	}
	for (int i = 0; i < num; i++) {
		a->a[i] = i;
		a->pre++;
		a->next++;
	}
	return num - 1;
}

//入栈
int push(Sqstack* a,int top) {
	if (top == maxsize)
	{
		printf("栈满\n");
		return top;
	}
	printf("请输入值\n");
	int num;
	scanf_s("%d", &num);
	a->a[++top] = num;
	a->next++;
	a->pre++;
	return top;
}

//出栈
int pop(Sqstack* a,int top) {
	int num;
	printf("输入出栈的个数\n");
	scanf_s("%d", &num);
	if (num > maxsize || num > top) {
		printf("超过栈的总数\n");
		for (int i = 0; i <= top; i++) {
			a->a[top] = 0;
			a->next--;
			a->pre--;
		}
		top = 0;
		return top;
	}
	
	for (int i = 0; i < num; i++) {
		a->a[top] = 0;
		top--;
		a->next--;
		a->pre--;
	}
	return top;
}

//栈满
void man(int top) {
	if (top == maxsize)
		printf("栈满\n");
	else
		printf("未满\n");
}

//判空
void empty(int top) {
	if (top == 0)
		printf("栈空");
	else
		printf("非空");
}

//
 void pri(Sqstack* L,int top) {
 	int i,j;
	for (i = 0; i <= top; i++) {
		printf("%d ", L->a[i]);
	}
 }

int main() {
	Sqstack a;
	int top = 0;
	empty(top);
	Initstack(&a);
	top = creat(&a);
	pri(&a,top);
	man(top);
	top = push(&a,top);
	pri(&a, top);
	top = pop(&a, top);
	pri(&a, top);

	return 0;
}