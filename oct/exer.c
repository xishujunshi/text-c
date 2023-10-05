#include<stdio.h>
#define maxsize 100

//˳��ջ
typedef struct {
	int a[maxsize];
	int pre;
	int next;
}Sqstack;

//��ʼ��
void Initstack(Sqstack* a) {
	a->pre = -1;
	a->next = 1;
}

//����ջ
int creat(Sqstack* a) {
	int num;
	printf("���봴����ջ�ĳ���\n");
	scanf_s("%d", &num);
	if (num > maxsize) {
		num = maxsize;
		printf("������Χ��������%d", maxsize);
	}
	for (int i = 0; i < num; i++) {
		a->a[i] = i;
		a->pre++;
		a->next++;
	}
	return num - 1;
}

//��ջ
int push(Sqstack* a,int top) {
	if (top == maxsize)
	{
		printf("ջ��\n");
		return top;
	}
	printf("������ֵ\n");
	int num;
	scanf_s("%d", &num);
	a->a[++top] = num;
	a->next++;
	a->pre++;
	return top;
}

//��ջ
int pop(Sqstack* a,int top) {
	int num;
	printf("�����ջ�ĸ���\n");
	scanf_s("%d", &num);
	if (num > maxsize || num > top) {
		printf("����ջ������\n");
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

//ջ��
void man(int top) {
	if (top == maxsize)
		printf("ջ��\n");
	else
		printf("δ��\n");
}

//�п�
void empty(int top) {
	if (top == 0)
		printf("ջ��");
	else
		printf("�ǿ�");
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