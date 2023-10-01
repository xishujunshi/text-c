#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//	int arr[1000];
////quick(int l, int r)
////{
////	if (l >= r)
////		return;
////	int i = l, j = r;
////
////	int x = arr[1];
////	while (i < j) {
////		while (i<j && arr[j]>x)
////			j--;
////		if (i < j) {
////			arr[i] = arr[j];
////			i++;
////		}
////		while (i < j && arr[i] < x)
////			i++;
////		if (i < j) {
////			arr[j] = arr[i];
////			j--;
////		}
////	}
////	arr[i] = x;
////	quick(l, i - 1);
////	quick(i + 1, r);
////}
////main()
////{
////	int a;
////	scanf_s("%d", &a);
////	for (int i = 1; i <= a; i++)
////	{
////		scanf_s("%d", &arr[i]);
////	}
////	quick(1, a);
////	for (int i = 1; i <= a; i++)
////	{
////		printf("%d", arr[i]);
////	}
////}
//
//	quick(int l, int r)
//	{
//		if (l >= r)
//			return;
//		int i = l, j = r;
//		int x = arr[1];
//		while (i < j) {
//			while (i<j && arr[j]>x)
//				j--;
//			if (i < j)
//			{
//				arr[i] = arr[j];
//				i++;
//			}
//			while (i < j && arr[i] < x)
//				i++;
//			if (i < j)
//			{
//				arr[j] = arr[i];
//				j--;
//			}
//		}
//		quick(l, i - 1);
//		quick(i - 1, r);
//	}
//main()
//{
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//		scanf("%d", &arr[i]);
//	quick(1, a);
//	for (int i = 1; i <= a; i++)
//		printf("%d", arr[i]);
//}
//int  main()
//{
//    int x;
//    scanf_s("%d", &x);
//    int flag = x;
//    if (x < 0)
//        return 1;
//    long long int m=0;
//    long long int n = 0;
//    int q=0;
//    while (flag > 9)
//    {
//        m = flag % 10;
//        q += m * pow(10.0, 1.0 * n);
//        flag /= 10;
//        n++;
//    }
//    q += flag;
//}
//int main() {
//    int a, m = 0;
//    int i = 0;
//    scanf_s("%d", &a);
//    int ji[1000], q = 0;
//    int ou[1000], p = 0;
//    for (int d = 0; d < a; d++) {
//        scanf_s("%d", &m);
//        if (m % 2) {
//            ji[q] = m;
//            q++;
//        }
//        else {
//            ou[p] = m;
//            p++;
//        }
//    }
//    for (int j = 0; j < a; j++) {
//        if (j / 3 > strlen(ou)) {
//                printf("%d ", ji[j - strlen(ou)-1]);
//      
//        }
//        else {
//            if (j == 0) {
//                printf("%d ", ji[0]);
//            }
//            else if (j % 3 == 2) {
//                printf("%d ", ou[j / 3]);
//                continue;
//            }
//            else 
//                printf("%d ", ji[j - j / 3]);
//            }
//        }
//    return 0;
//    }
//int main() {
//    char arr[1000];
//    char a;
//    int k;
//    char b;
//    int len = 0;
//    scanf_s("%d", &k);
//    getchar();
//    for (int i = 0;; i++){
//        scanf_s("%c", &a);
//        getchar();
//        if (a < 48) break;
//        else {
//            arr[i] = a;
//            len++;
//        }
//    }
//    if (k > len+1) return -1;
//    int fast = 0, slow = 0;
//    while (fast != k) {
//        fast++;
//    }
//    fast++;
//    while (fast != len+1) {
//        fast++;
//        slow++;
//    }
//    printf("%c", arr[slow]);
//    return 0;
//}
// int main()
//{
// int a[] = { 2,5,8 };
// int b[] = { 1,2,3,4,5 };
// int c[100];
// int m=0;
// int a1 = 0, b1 = 0;
// while (a1 < sizeof(a) / 4 && b1 < sizeof(b) / 4) {
//  if (a[a1] < b[b1]) {
//   c[m] = a[a1];
//   a1++;
//   m++;
//  }
//  else {
//   c[m] = b[b1];
//   b1++;
//   m++;
//  }
// }
// if (a1 >= sizeof(a) / 4) {
//  while (b1 < sizeof(b) / 4) {
//   c[m] = b[b1];
//   b1++;
//   m++;
//  }
// }
// if (b1 >= sizeof(b) / 4) {
//  while (a1 < sizeof(a) / 4) {
//   c[m] = a[a1];
//   a1++;
//   m++;
//  }
// }
//
// for (int i = 0; i < sizeof(a) / 4 + sizeof(b) / 4; i++) {
//  printf("%d ", c[i]);
// }
// return 0;
//}
// //LN* yao(LN* head) {
//	if (head->next == NULL) return head;
//	LN* p1 = head->next;
//	LN* p2 = head;
//	LN* temp = p1->next;
//	while (p1->next != NULL) {
//		p1->next = p2;
//		//p2->next = a;
//		p2 = p1;
//		p1 = temp;
//		temp = temp->next;
//	}
//	p1->next = p2;
//	return p1;
//}


//反转链表
/*typedef struct ListNode {
	int date;
	struct ListNode* next;
}LN;
void createLN(LN * head,int n) {
	LN* newLN;
	for (int i = 0;i<n;i++) {
		newLN = (LN*)malloc(sizeof(LN));
		newLN->date = i;
		head->next = newLN;
		head = head->next;
		/*newLN->next = head->next;
		head->next = newLN;
	}
	head->next = NULL;
};
LN* yao(LN* head) {
	if (head->next == NULL) return head;
	LN* p1 = head;
	LN* p2 = NULL;
	LN* temp = p1->next;
	while (p1->next!=NULL) {
		p1->next = p2;
		//p2->next = a;
		p2 = p1;
		p1 = temp;
		temp = temp->next;
	}
	p1->next = p2;
	return p1;
}
int main() {
	int n;
	scanf_s("%d", &n);
	LN head={ -1,NULL };
	createLN(&head,n);
	LN* a=yao(&head);
	while (a != NULL) {
		printf("%d ",a->date);
		a = a->next;
	}
	return 0;
}*/


//删除有序链表大于min，小于max的值
typedef struct ListNode {
	int val;
	struct ListNode* next;
}ln;
void createLN(ln* head, int n) {
	ln* newLN;
	for (int i = 0; i < n; i++) {
		newLN = (ln*)malloc(sizeof(ln));
		newLN->val = i;
		head->next = newLN;
		head = head->next;
		/*newLN->next = head->next;
		head->next = newLN;*/
	}
	head->next = NULL;
};
void delln(ln* head, int min, int max) {
	ln* slow=NULL;
	ln* fast=NULL;
	while (head != NULL) {
		if (head->val <= min) {
			slow = head;
		}
		if (head->val < max) {
			fast = head;
		}
		head = head->next;
	}
	slow->next = fast->next;
}
main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	ln LN = { -1,NULL };
	ln* head = &LN;
	int n;
	scanf_s("%d", &n);
	createLN(head, n);
	delln(head, a, b);
	while (head != NULL) {
		printf("%d ", head->val);
		head = head->next;
	}
}