//#include<stdio.h>
//#include<string.h>
//
////����ṹ�壨˫������
//typedef struct ListNode {
//	struct ListNode* pre;
//	int val;
//	struct ListNode* next;
//
//}LN;
//
////β�巨
//
////����˫��ջ
//LN* creatn(LN* head) {
//	int n;
//	printf("�����봴���ĳ���\n");
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
////�п�
//void check(LN* bot) {
//	if (bot == NULL || bot->pre == NULL) printf("��ջ\n");
//	else  printf("�ǿ�ջ\n");
//		return;
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
//		top->next = temp;
//		temp->next = NULL;
//		temp->pre = top;
//		top = top->next;
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
//		if (top == NULL||top->pre==NULL) return NULL;
//		LN* temp = top->pre;
//		top->pre = NULL;
//		temp->next = NULL;
//		top = temp;
//	}
//	return top;
//}
//
////��ӡջ
//void prin(LN* top) {
//	if (top == NULL) printf("��ջ");
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
