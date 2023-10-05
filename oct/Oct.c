//#include<stdio.h>
//#include<string.h>
//
////定义结构体（双向链表）
//typedef struct ListNode {
//	struct ListNode* pre;
//	int val;
//	struct ListNode* next;
//
//}LN;
//
////尾插法
//
////创建双向栈
//LN* creatn(LN* head) {
//	int n;
//	printf("请输入创建的长度\n");
//	scanf_s("%d", &n);
//	LN* temp;
//	for (int i = 0; i < n; i++) {
//		temp = (LN*)malloc(sizeof(LN));
//		temp->pre = head;
//		temp->val = i;
//		temp->next = NULL;
//		head->next = temp;
//		head = head->next;
//	}
//	return head;
//}
//
////判空
//void check(LN* bot) {
//	if (bot == NULL || bot->pre == NULL) printf("空栈\n");
//	else  printf("非空栈\n");
//		return;
//}
//
////入栈
//LN* jion(LN* top) {
//	int n;
//	printf("请输入入栈个数\n");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		LN* temp = (LN*)malloc(sizeof(LN));
//		scanf_s("%d", &temp->val);
//		top->next = temp;
//		temp->next = NULL;
//		temp->pre = top;
//		top = top->next;
//	}
//	return top;
//}
//
////出栈
//LN* out(LN* top) {
//	int n;
//	printf("请输入出栈个数\n");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++) {
//		if (top == NULL||top->pre==NULL) return NULL;
//		LN* temp = top->pre;
//		top->pre = NULL;
//		temp->next = NULL;
//		top = temp;
//	}
//	return top;
//}
//
////打印栈
//void prin(LN* top) {
//	if (top == NULL) printf("空栈");
//	else while (top != NULL&&top->pre!=NULL) {
//		printf("%d", top->val);
//		top = top->pre;
//	}
//	printf("\n");
//}
//
//int main() {
//	LN dummy = { NULL, -1,NULL };
//	LN* p = &dummy;
//	LN* top;
//	top = creatn(p);
//	prin(top);
//	check(top);
//	top = jion(top);
//	prin(top);
//	top = out(top);
//	prin(top);
//	return 0;
//}
