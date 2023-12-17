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

typedef struct ListNode {
	int date;
	struct ListNode* next;
}list;

//����
list* createlist(int num, list* root) {
	list* temp = (list*)malloc(sizeof(list));  // Ϊ�µĽڵ�����ڴ�
	temp->date = num;
	temp->next = NULL;
	root->next = temp;
	return temp;
}

//����
void readlist(list* root) {
	if (root != NULL) {
		printf("%d ", root->date);
		readlist(root->next);
	}
}

//��ȡָ��λ�õ�����
void readone(int min,int max,list* root) {
	if (root != NULL) {
		if(root->date<max&&root->date>min)  printf("%d ", root->date);
		readone(min, max, root->next);
	}
 }

//�޸�����
void changeone(int min, int max, list* root) {
	if (root != NULL) {
	
		if (root->date<max && root->date>min) {
			int num = 0;
			printf("������Ҫ�޸ĵ���������");
			scanf_s("%d", &num);
			root->date = num;
		}
		changeone(min, max, root->next);
	}
}

//��������
void insertone(int filed, list* root) {
	filed--;
	if (root != NULL) {
		insertone(filed, root->next);
		if (filed == 0) {
			int num = 0;
			printf("������������ݵ���ֵ������\n");
			scanf_s("%d", &num);
			if (root->next == NULL) {
				list* temp = (list*)malloc(sizeof(list));
				temp->date = num;
				temp->next = NULL;
				root->next = temp;
			}
			else {
				list* temp = (list*)malloc(sizeof(list));
				list* pre = root->next;
				temp->next = pre;
				temp->date = num;
				root->next = temp;
			}
		}
		return;
	}
}

//ɾ������
void delone(int filed, list* root) {
	filed--;
	if (root != NULL) {
		if (filed == 0) {
			if (root->next == NULL||root->next->next==NULL) {
				root->next = NULL;
			}
			else {
		delone(filed, root->next);
				root->next = root->next->next;
			}
		}
		return;
	}
}


int main() {
	list dummy = { 0 ,NULL};//ͷ�ڵ�
	list* head = &dummy;//head��Զָ��ͷ�ڵ�
	int num = 0;//��ȡ����
	int sum = 0;//����

	printf("���������ݣ�������-1Ϊ������־������\n");
	list* temp = head;
	//��������
	while (1) {
		scanf_s("%d", &num);
		getchar();
		if (num == -1) break;
		temp = createlist(num,temp);
		sum ++;
	}

	//ѭ����ȡ����
	readlist(head->next);


	

	//��ȡ���޸�  ����ָ������
	printf("\n������Ҫ��ȡ���ݵķ�Χ�����磺30��80����70��20������\n");
	int left = 0, right = 100;
	scanf_s("%d,%d", &left, &right);
	if (left > right) {
		int temp = left;
		left = right;
		right = temp;
	}
	printf("����%d��С��%d������Ϊ��", left, right);
	readone(left, right, head->next);



	printf("\n������Ҫ�޸����ݵķ�Χ�����磺30��80����70��20������\n");
	left = 0;
	right = 100;
	scanf_s("%d,%d", &left, &right);
	if (left > right) {
		int temp = left;
		left = right;
		right = temp;
	}
	changeone(left, right, head->next);
	printf("�޸�֮�������Ϊ��");
	readlist(head->next);

	//ָ��λ�õ�����
	int filed = 0;

	//����
	printf("\n������Ҫ��������ݵ�λ�ã�����\n");
	scanf_s("%d", &filed);
	insertone(filed, head->next);
	readlist(head->next);
	
	//ɾ��
	printf("\n������Ҫɾ�������ݵ�λ�ã�����\n");
	scanf_s("%d", &filed);
	delone(filed, head->next);
	readlist(head->next);

	return 0;
}