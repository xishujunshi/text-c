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