#include<stdio.h>
#include<stdlib.h>

////��ȡ��������ת��Ϊ�ַ���������ַ�����Ȼ��ݴ˽����������
//
////�����������ṹ
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


//[��������]
//ʵ�ִ�ͷ���ĵ�����Ľ������󳤶ȣ�ȡԪ�ء��޸�Ԫ�ء����롢ɾ���ȵ�����Ļ���������
//[����Ҫ��]
//��1�����δӼ��̶������ݣ�������ͷ���ĵ�����
//��2������������е�����Ԫ��
//��3��������ĳ��ȣ�
//��4������ָ�������ܹ�ȡԪ�غ��޸�Ԫ�أ�
//��5��ʵ����ָ��λ�ò����ɾ��Ԫ�صĹ��ܡ�

//typedef struct ListNode {
//	int date;
//	struct ListNode* next;
//}list;
//
////����
//list* createlist(int num, list* root) {
//	list* temp = (list*)malloc(sizeof(list));  // Ϊ�µĽڵ�����ڴ�
//	temp->date = num;
//	temp->next = NULL;
//	root->next = temp;
//	return temp;
//}
//
////����
//void readlist(list* root) {
//	if (root != NULL) {
//		printf("%d ", root->date);
//		readlist(root->next);
//	}
//}
//
////��ȡָ��λ�õ�����
//void readone(int min,int max,list* root) {
//	if (root != NULL) {
//		if(root->date<max&&root->date>min)  printf("%d ", root->date);
//		readone(min, max, root->next);
//	}
// }
//
////�޸�����
//void changeone(int min, int max, list* root) {
//	if (root != NULL) {
//	
//		if (root->date<max && root->date>min) {
//			int num = 0;
//			printf("������Ҫ�޸ĵ���������");
//			scanf_s("%d", &num);
//			root->date = num;
//		}
//		changeone(min, max, root->next);
//	}
//}
//
////��������
//void insertone(int filed, list* root) {
//	filed--;
//	if (root != NULL) {
//		insertone(filed, root->next);
//		if (filed == 0) {
//			int num = 0;
//			printf("������������ݵ���ֵ������\n");
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
////ɾ������
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
//	list dummy = { 0 ,NULL};//ͷ�ڵ�
//	list* head = &dummy;//head��Զָ��ͷ�ڵ�
//	int num = 0;//��ȡ����
//	int sum = 0;//����
//
//	printf("���������ݣ�������-1Ϊ������־������\n");
//	list* temp = head;
//	//��������
//	while (1) {
//		scanf_s("%d", &num);
//		getchar();
//		if (num == -1) break;
//		temp = createlist(num,temp);
//		sum ++;
//	}
//
//	//ѭ����ȡ����
//	readlist(head->next);
//
//
//	
//
//	//��ȡ���޸�  ����ָ������
//	printf("\n������Ҫ��ȡ���ݵķ�Χ�����磺30��80����70��20������\n");
//	int left = 0, right = 100;
//	scanf_s("%d,%d", &left, &right);
//	if (left > right) {
//		int temp = left;
//		left = right;
//		right = temp;
//	}
//	printf("����%d��С��%d������Ϊ��", left, right);
//	readone(left, right, head->next);
//
//
//
//	printf("\n������Ҫ�޸����ݵķ�Χ�����磺30��80����70��20������\n");
//	left = 0;
//	right = 100;
//	scanf_s("%d,%d", &left, &right);
//	if (left > right) {
//		int temp = left;
//		left = right;
//		right = temp;
//	}
//	changeone(left, right, head->next);
//	printf("�޸�֮�������Ϊ��");
//	readlist(head->next);
//
//	//ָ��λ�õ�����
//	int filed = 0;
//
//	//����
//	printf("\n������Ҫ��������ݵ�λ�ã�����\n");
//	scanf_s("%d", &filed);
//	insertone(filed, head->next);
//	readlist(head->next);
//	
//	//ɾ��
//	printf("\n������Ҫɾ�������ݵ�λ�ã�����\n");
//	scanf_s("%d", &filed);
//	delone(filed, head->next);
//	readlist(head->next);
//
//	return 0;
//}

//[��������]
//ʵ��˳���Ľ������󳤶ȣ�ȡԪ�ء��޸�Ԫ�ء����롢ɾ���Ȼ���������
//[����Ҫ��]
//��1�����δӼ��̶������ݣ�����˳���
//��2�����˳����е�����Ԫ�أ�
//��3����˳���ĳ��ȣ�
//��4������ָ�������ܹ�ȡԪ�غ��޸�Ԫ�أ�
//��5��ʵ����ָ��λ�ò����ɾ��Ԫ�صĹ��ܡ�


//����
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

//��ȡ
void readall(int arr[],int num,int* temp) {
	if (arr[num - *temp] != -1) {
		printf("%d ", arr[num - *temp]);
		(*temp)--;
		readall(arr, num, temp);
	}
	else return;
}

//ָ������
//��ȡ
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
//�޸�
void change(int left, int right, int arr[]) {
	for (int i = 0; i < 100; i++) {
		if (arr[i] != -1) {
			if (arr[i] > left && arr[i] < right) {
				printf("������Ҫ�޸ĵ����ݣ�");
				int temp = 0;
				scanf_s("%d", &temp);
				arr[i] = temp;
			}
		}
		else return;
	}
}

//ָ��λ��
//����
void insert(int arr[], int* size, int pos, int value) {
	for (int i = *size; i > pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos] = value;
	(*size)++;
}
//ɾ��
void del(int arr[], int* size, int pos) {
	for (int i = pos; i < *size; i++) {
		arr[i] = arr[i + 1];
	}
	(*size)++;
}
int main() {

	//����
	int arr[100];
	printf("������˳�������ݣ���-1Ϊ������־������\n");
	int num = 0;
	memset(arr, -1, sizeof(arr));
	create(arr,&num);

	//����
	printf("˳���ĳ���Ϊ%d\n", num);
	
	//���
	int temp = num;
	readall(arr,num,&temp);
	temp = num;
	printf("\n");

	//ָ������
	//�Ķ�ȡ
	printf("������Ҫ��ȡ���ݵķ�Χ�����磺30��80����70��20������\n");
	int left = 0, right = 100;
	scanf_s("%d,%d", &left, &right);
	if (left > right) {
		int temp = left;
		left = right;
		right = temp;
	}
	printf("����%d��С��%d������Ϊ��", left, right);
	readone(left, right, arr);

	//���޸�
	printf("\n������Ҫ�޸����ݵķ�Χ�����磺30��80����70��20������\n");
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

	//ָ��λ��
	int flag = 0;
	//����
	printf("\n������Ҫ�����λ�ã�");
	scanf_s("%d", &flag);
	int value = 0;
	printf("������Ҫ�����ֵ��");
	scanf_s("%d", &value);
	insert(arr,&temp,flag,value);
	num = temp;
	readall(arr, num, &temp);
	temp = num;
	//ɾ��
	printf("\n������Ҫɾ����λ�ã�");
	scanf_s("%d", &flag);
	del(arr, &temp, flag);
	num = temp;
	readall(arr, num, &temp);
	temp = num;
}