#include<stdio.h>
#include<math.h>

//#define maxsize 100
//
////˳��ջ
//typedef struct {
//	int a[maxsize];
//	int pre;
//	int next;
//}Sqstack;
//
////��ʼ��
//void Initstack(Sqstack* a) {
//	a->pre = -1;
//	a->next = 1;
//}
//
////����ջ
//int creat(Sqstack* a) {
//	int num;
//	printf("���봴����ջ�ĳ���\n");
//	scanf_s("%d", &num);
//	if (num > maxsize) {
//		num = maxsize;
//		printf("������Χ��������%d", maxsize);
//	}
//	for (int i = 0; i < num; i++) {
//		a->a[i] = i;
//		a->pre++;
//		a->next++;
//	}
//	return num - 1;
//}
//
////��ջ
//int push(Sqstack* a,int top) {
//	if (top == maxsize)
//	{
//		printf("ջ��\n");
//		return top;
//	}
//	printf("������ֵ\n");
//	int num;
//	scanf_s("%d", &num);
//	a->a[++top] = num;
//	a->next++;
//	a->pre++;
//	return top;
//}
//
////��ջ
//int pop(Sqstack* a,int top) {
//	int num;
//	printf("�����ջ�ĸ���\n");
//	scanf_s("%d", &num);
//	if (num > maxsize || num > top) {
//		printf("����ջ������\n");
//		for (int i = 0; i <= top; i++) {
//			a->a[top] = 0;
//			a->next--;
//			a->pre--;
//		}
//		top = 0;
//		return top;
//	}
//	
//	for (int i = 0; i < num; i++) {
//		a->a[top] = 0;
//		top--;
//		a->next--;
//		a->pre--;
//	}
//	return top;
//}
//
////ջ��
//void man(int top) {
//	if (top == maxsize)
//		printf("ջ��\n");
//	else
//		printf("δ��\n");
//}
//
////�п�
//void empty(int top) {
//	if (top == 0)
//		printf("ջ��");
//	else
//		printf("�ǿ�");
//}
//
////���
// void pri(Sqstack* L,int top) {
// 	int i,j;
//	for (i = 0; i <= top; i++) {
//		printf("%d ", L->a[i]);
//	}
// }
//
//int main() {
//	Sqstack a;
//	int top = 0;
//	empty(top);
//	Initstack(&a);
//	top = creat(&a);
//	pri(&a,top);
//	man(top);
//	top = push(&a,top);
//	pri(&a, top);
//	top = pop(&a, top);
//	pri(&a, top);
//
//	return 0;
//}
//
//typedef struct ListNode {
//	struct ListNode* pre;
//	int val;
//	struct ListNode* next;
//
//}LN;
//
////��ʼ��
//LN* creatn(LN* head) {
//	int n;
//	printf("�����봴���ĳ���\n");
//	scanf_s("%d", &n);
//	LN* temp;
//	for (int i = 0; i < n; i++) {
//		temp = (LN*)malloc(sizeof(LN));
//		temp->next = head;
//		temp->val = i;
//		temp->pre = NULL;
//		head->pre = temp;
//		head = head->pre;
//	}
//	return head;
//}
//
////�п�
//void check(LN* bot) {
//	if (bot == NULL || bot->next == NULL) printf("��ջ\n");
//	else  printf("�ǿ�ջ\n");
//	return;
//}
//
////��ӡ
//void prin(LN* top) {
//	if (top == NULL) printf("��ջ");
//	else while (top != NULL && top->next != NULL) {
//		printf("%d", top->val);
//		top = top->next;
//	}
//	printf("\n");
//}
//
////��ջ
//LN* jion(LN* top) {
//	int n;
//	printf("��������ջ����\n");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		LN* temp = (LN*)malloc(sizeof(LN));
//		scanf_s("%d", &temp->val);
//		top->pre = temp;
//		temp->pre = NULL;
//		temp->next = top;
//		top = top->pre;
//	}
//	return top;
//}
//
////��ջ
//LN* out(LN* top) {
//	int n;
//	printf("�������ջ����\n");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		if (top == NULL || top->next == NULL) return NULL;
//		LN* temp = top->next;
//		top->next = NULL;
//		temp->pre = NULL;
//		top = temp;
//	}
//	return top;
//}
//
//
//int main() {
//	LN dummy = { NULL, -1,NULL };
//	LN* top;
//	top = creatn(&dummy);
//	prin(top);
//	check(top);
//	top = jion(top);
//	prin(top);
//	top = out(top);
//	prin(top);
//	return 0;
//}
//
//void insert(int a[], int* pre, int* next,int length) {
//	if (*next == *pre - 1) {
//		printf("��");
//		return;
//	}
//	if ((*next + length - 1) % (length) == *pre % length) {
//		printf("��");
//		return;
//	}
//	scanf_s("%d", &a[*pre]);
//	(*pre)++;
//}
//
//void delect(int a[], int* pre, int* next,int length) {
//	if (*next == *pre - 1) {
//		printf("��");
//		return;
//	}
//	if ((*next + length - 1) % (length) == *pre % length) {
//		printf("��");
//		return;
//	}
//	a[*next] = 0;
//	(*next)++;
//}
//
//int main() {
//	int a[5] = { " ",1,2,3,4};
//	int pre = sizeof(a) / sizeof(int);
//	int next = 1;
//	int length = sizeof(a) / sizeof(int);
//	insert(&a, &pre, &next, length);
//	delect(&a, &pre, &next, length);
//	
//	return 0;
//}
//
//typedef struct treeNode {
//	struct treeNode* left;
//	struct treeNode* right;
//	char date;
//}TN;
//int main() {
//	TN* head;
//	head = create(head);
//	int sum = num(head);
//	printf("%d", sum);
//	int depth1 = depth(head);
//	return 0;
//
//}
//
//TN* create(TN* T)
//{
//	char a;
//	a=getchar();
//	if (a == '#')
//		T = NULL;
//	else
//	{
//		T = (TN*)malloc(sizeof(TN));
//		T->date= a;
//		T->left = create(T->left);
//		T->right = create(T->right);
//	}
//	return T;
//}
//
//int num(TN* root) {
//	if (root==NULL) {
//		return 0;
//	}
//	int left = num(root->left);
//	int right = num(root->right);
//	return 1 + left + right;
//}
//
//int depth(TN* root) {
//	if (root->left == NULL && root->right == NULL) {
//		return 0;
//	}
//	int left = depth(root->left);
//	int right = depth(root->right);
//	return 1 + (left>right?left:right);
//}
//
//
//TN* copybtree(TN* root)
//{
//	TN* newnode;
//
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	else
//	{
//		//�����½ڵ�
//		newnode = (TN*)malloc(sizeof(TN));
//		//���ƽڵ�����
//		newnode->date = root->date;
//		//����������
//		newnode->left = copybtree(root->left);
//		//����������
//		newnode->right = copybtree(root->right);
//		//�������д����ȴ����������ٴ��������������˳��ߵ��䴴����˳��ͻ�ߵ����������մ����Ķ���������һ����
//		return newnode;
//	}
//}

