#include<stdio.h>
#include<stdlib.h>

////读取键盘输入转化为字符数组或者字符串，然后据此进行先序遍历
//
////二叉树基本结构
//typedef struct TreeNode{
//	int date;
//    struct TreeNode* left;
//    struct TreeNode* right;
//}Tn, *Tn; 
//
//int main() {
//    char a;
//    Tn* root;
//    while (1) {
//        a = getchar();
//        if (a == "\n") break;
//        else createTree(a);
//    }
//}
//void createTree(char a) {
//    
//}


//[问题描述]
//实现带头结点的单链表的建立、求长度，取元素、修改元素、插入、删除等单链表的基本操作。
//[基本要求]
//（1）依次从键盘读入数据，建立带头结点的单链表；
//（2）输出单链表中的数据元素
//（3）求单链表的长度；
//（4）根据指定条件能够取元素和修改元素；
//（5）实现在指定位置插入和删除元素的功能。

//typedef struct ListNode {
//	int date;
//	struct ListNode* next;
//}list;
//
////创建
//list* createlist(int num, list* root) {
//	list* temp = (list*)malloc(sizeof(list));  // 为新的节点分配内存
//	temp->date = num;
//	temp->next = NULL;
//	root->next = temp;
//	return temp;
//}
//
////遍历
//void readlist(list* root) {
//	if (root != NULL) {
//		printf("%d ", root->date);
//		readlist(root->next);
//	}
//}
//
////读取指定位置的数据
//void readone(int min,int max,list* root) {
//	if (root != NULL) {
//		if(root->date<max&&root->date>min)  printf("%d ", root->date);
//		readone(min, max, root->next);
//	}
// }
//
////修改数据
//void changeone(int min, int max, list* root) {
//	if (root != NULL) {
//	
//		if (root->date<max && root->date>min) {
//			int num = 0;
//			printf("请输入要修改的数！！！");
//			scanf_s("%d", &num);
//			root->date = num;
//		}
//		changeone(min, max, root->next);
//	}
//}
//
////插入数据
//void insertone(int filed, list* root) {
//	filed--;
//	if (root != NULL) {
//		insertone(filed, root->next);
//		if (filed == 0) {
//			int num = 0;
//			printf("请输入插入数据的数值！！！\n");
//			scanf_s("%d", &num);
//			if (root->next == NULL) {
//				list* temp = (list*)malloc(sizeof(list));
//				temp->date = num;
//				temp->next = NULL;
//				root->next = temp;
//			}
//			else {
//				list* temp = (list*)malloc(sizeof(list));
//				list* pre = root->next;
//				temp->next = pre;
//				temp->date = num;
//				root->next = temp;
//			}
//		}
//		return;
//	}
//}
//
////删除数据
//void delone(int filed, list* root) {
//	filed--;
//	if (root != NULL) {
//		if (filed == 0) {
//			if (root->next == NULL||root->next->next==NULL) {
//				root->next = NULL;
//			}
//			else {
//		delone(filed, root->next);
//				root->next = root->next->next;
//			}
//		}
//		return;
//	}
//}
//
//
//int main() {
//	list dummy = { 0 ,NULL};//头节点
//	list* head = &dummy;//head永远指向头节点
//	int num = 0;//读取数据
//	int sum = 0;//总数
//
//	printf("请输入数据，并且以-1为结束标志！！！\n");
//	list* temp = head;
//	//创建链表
//	while (1) {
//		scanf_s("%d", &num);
//		getchar();
//		if (num == -1) break;
//		temp = createlist(num,temp);
//		sum ++;
//	}
//
//	//循环读取链表
//	readlist(head->next);
//
//
//	
//
//	//读取和修改  根据指定条件
//	printf("\n请输入要读取数据的范围，例如：30，80或者70，20！！！\n");
//	int left = 0, right = 100;
//	scanf_s("%d,%d", &left, &right);
//	if (left > right) {
//		int temp = left;
//		left = right;
//		right = temp;
//	}
//	printf("大于%d且小于%d的数据为：", left, right);
//	readone(left, right, head->next);
//
//
//
//	printf("\n请输入要修改数据的范围，例如：30，80或者70，20！！！\n");
//	left = 0;
//	right = 100;
//	scanf_s("%d,%d", &left, &right);
//	if (left > right) {
//		int temp = left;
//		left = right;
//		right = temp;
//	}
//	changeone(left, right, head->next);
//	printf("修改之后的数据为：");
//	readlist(head->next);
//
//	//指定位置的数据
//	int filed = 0;
//
//	//插入
//	printf("\n请输入要插入的数据的位置！！！\n");
//	scanf_s("%d", &filed);
//	insertone(filed, head->next);
//	readlist(head->next);
//	
//	//删除
//	printf("\n请输入要删除的数据的位置！！！\n");
//	scanf_s("%d", &filed);
//	delone(filed, head->next);
//	readlist(head->next);
//
//	return 0;
//}

//[问题描述]
//实现顺序表的建立、求长度，取元素、修改元素、插入、删除等基本操作。
//[基本要求]
//（1）依次从键盘读入数据，建立顺序表；
//（2）输出顺序表中的数据元素；
//（3）求顺序表的长度；
//（4）根据指定条件能够取元素和修改元素；
//（5）实现在指定位置插入和删除元素的功能。


//创建
void create(int arr[],int* num) {
	int a;
	scanf_s("%d", &a);
	getchar();
	if (a != -1) {
		arr[*num] = a;
		(*num)++;
		create(arr, num);
	}
	else return;

}

//读取
void readall(int arr[],int num,int* temp) {
	if (arr[num - *temp] != -1) {
		printf("%d ", arr[num - *temp]);
		(*temp)--;
		readall(arr, num, temp);
	}
	else return;
}

//指定条件
//读取
void readone(int left, int right, int arr[]) {
	for (int i = 0; i < 100; i++) {
		if (arr[i] != -1) {
			if (arr[i] > left && arr[i] < right) {
				printf("%d ", arr[i]);
			}
		}
		else return;
	}
}
//修改
void change(int left, int right, int arr[]) {
	for (int i = 0; i < 100; i++) {
		if (arr[i] != -1) {
			if (arr[i] > left && arr[i] < right) {
				printf("请输入要修改的数据：");
				int temp = 0;
				scanf_s("%d", &temp);
				arr[i] = temp;
			}
		}
		else return;
	}
}

//指定位置
//插入
void insert(int arr[], int* size, int pos, int value) {
	for (int i = *size; i > pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos] = value;
	(*size)++;
}
//删除
void del(int arr[], int* size, int pos) {
	for (int i = pos; i < *size; i++) {
		arr[i] = arr[i + 1];
	}
	(*size)++;
}
int main() {

	//创建
	int arr[100];
	printf("请输入顺序表的数据，以-1为结束标志！！！\n");
	int num = 0;
	memset(arr, -1, sizeof(arr));
	create(arr,&num);

	//长度
	printf("顺序表的长度为%d\n", num);
	
	//输出
	int temp = num;
	readall(arr,num,&temp);
	temp = num;
	printf("\n");

	//指定条件
	//的读取
	printf("请输入要读取数据的范围，例如：30，80或者70，20！！！\n");
	int left = 0, right = 100;
	scanf_s("%d,%d", &left, &right);
	if (left > right) {
		int temp = left;
		left = right;
		right = temp;
	}
	printf("大于%d且小于%d的数据为：", left, right);
	readone(left, right, arr);

	//和修改
	printf("\n请输入要修改数据的范围，例如：30，80或者70，20！！！\n");
	left = 0;
	right = 100;
	scanf_s("%d,%d", &left, &right);
	if (left > right) {
		int temp = left;
		left = right;
		right = temp;
	}
	change(left, right, arr);
	readall(arr, num, &temp);
	temp = num;

	//指定位置
	int flag = 0;
	//插入
	printf("\n请输入要插入的位置：");
	scanf_s("%d", &flag);
	int value = 0;
	printf("请输入要插入的值：");
	scanf_s("%d", &value);
	insert(arr,&temp,flag,value);
	num = temp;
	readall(arr, num, &temp);
	temp = num;
	//删除
	printf("\n请输入要删除的位置：");
	scanf_s("%d", &flag);
	del(arr, &temp, flag);
	num = temp;
	readall(arr, num, &temp);
	temp = num;
}