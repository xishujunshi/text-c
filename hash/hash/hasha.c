#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

//�ڵ�ṹ
typedef struct Hash {
	char* a[100];
	int code;
	struct Hash* next;
}hs;

//��ϣ��
void insert(char* fir,hs str[102]) {
	//��ϣ����Ϊȡǰ�����ַ���ֵȡģ101 ��Ϊ����ֵ����������zz
	//�൱��51+51=102
	int a = 0;
	if (fir[1] == NULL) a = fir[0] - 'A';//���ַ����
	else a = fir[0] + fir[1] - 2 * 'A';//�ַ������
	hs* temp = &str[a % 101];
	if (str[a % 101].code == 0) {
		str[a % 101].a[0] = fir;
		str[a % 101].code = 1;
		str[a % 101].next = NULL;
	}
	else {
		while (temp->next) {
			temp = temp->next;
		}
		hs* temp1 = (hs*)malloc(sizeof(hs));
		temp->next = temp1;
		temp->next->a[0] = fir;
		temp->next->code = 1;
		temp->next->next = NULL;
	}
}

//Ѱ��
int search(char* sec, hs str[102]) {
	int m = 0;
	if (sec[1] == '\0') {
		m = sec[0] - 'A';
	}
	else {
		m = sec[0] + sec[1] - 2 * 'A';
	}
	int count = 0;

	if (str[m % 101].code == 0) {
		return count;
	}
	else {
		hs* temp = &str[m % 101];
		while (temp != NULL) {
			if (strcmp(temp->a[0], sec) == 0) {
				count++;
			}
			temp = temp->next;
		}
	}

	return count;
}

int main() {
	hs str[102];
	for (int i = 0; i < 102; i++) {
		str[i].code = 0;
	}
	printf("��������������Ĵ�С��");
	int n = 0;
	scanf_s("%d", &n);
	getchar();
	char** fir = (char**)malloc(n * sizeof(char*));
	char** sec = (char**)malloc(n * sizeof(char*));
	printf("�������ǶԵ�һ��������и�ֵ������\n");
	for (int i = 0; i < n; i++) {
		char buffer[100];
		if (fgets(buffer, 100, stdin) == NULL) {
			// �������ʧ�ܣ����˳�ѭ��
			break;
		}
		fir[i] = _strdup(buffer);
		insert(fir[i],str);
	}
	system("cls");//��տ���̨

	printf("�������ǶԵڶ���������и�ֵ������\n");
	for (int i = 0; i < n; i++) {
		char buffer[100];
		if (fgets(buffer, 100, stdin) == NULL) {
			// �������ʧ�ܣ����˳�ѭ��
			break;
		}
		sec[i] = _strdup(buffer);
	}
	system("cls");//��տ���̨

	int count = 0;
	for (int i = 0; i < n; i++) {
		int temp = search(sec[i], str);
		if (temp != 0) {
			count++;
			printf("%s ������%d�Σ�����\n", sec[i], temp);
		}
	}
	printf("\nһ����%d���ַ���ͬ������\n", count);
	
	return 0;
}