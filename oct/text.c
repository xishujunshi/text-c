//#include<stdio.h>
//#include<string.h>
//
//typedef struct ListNode {
//	struct ListNode* pre;
//	int val;
//	struct ListNode* next;
//
//}LN;
//
////初始化
//LN* creatn(LN* head) {
//	int n;
//	printf("请输入创建的长度\n");
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
////判空
//void check(LN* bot) {
//	if (bot == NULL || bot->next == NULL) printf("空栈\n");
//	else  printf("非空栈\n");
//	return;
//}
//
////打印
//void prin(LN* top) {
//	if (top == NULL) printf("空栈");
//	else while (top != NULL && top->next != NULL) {
//		printf("%d", top->val);
//		top = top->next;
//	}
//	printf("\n");
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
//		top->pre = temp;
//		temp->pre = NULL;
//		temp->next = top;
//		top = top->pre;
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