#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

//节点结构
typedef struct Hash {
	char* a[100];
	int code;
	struct Hash* next;
}hs;

//哈希表
void insert(char* fir,hs str[102]) {
	//哈希函数为取前两个字符的值取模101 因为两个值的最大情况是zz
	//相当于51+51=102
	int a = 0;
	if (fir[1] == NULL) a = fir[0] - 'A';//单字符情况
	else a = fir[0] + fir[1] - 2 * 'A';//字符串情况
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

//寻找
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
	printf("请输入两个数组的大小：");
	int n = 0;
	scanf_s("%d", &n);
	getchar();
	char** fir = (char**)malloc(n * sizeof(char*));
	char** sec = (char**)malloc(n * sizeof(char*));
	printf("接下来是对第一个数组进行赋值！！！\n");
	for (int i = 0; i < n; i++) {
		char buffer[100];
		if (fgets(buffer, 100, stdin) == NULL) {
			// 如果输入失败，则退出循环
			break;
		}
		fir[i] = _strdup(buffer);
		insert(fir[i],str);
	}
	system("cls");//清空控制台

	printf("接下来是对第二个数组进行赋值！！！\n");
	for (int i = 0; i < n; i++) {
		char buffer[100];
		if (fgets(buffer, 100, stdin) == NULL) {
			// 如果输入失败，则退出循环
			break;
		}
		sec[i] = _strdup(buffer);
	}
	system("cls");//清空控制台

	int count = 0;
	for (int i = 0; i < n; i++) {
		int temp = search(sec[i], str);
		if (temp != 0) {
			count++;
			printf("%s 出现了%d次！！！\n", sec[i], temp);
		}
	}
	printf("\n一共有%d个字符相同！！！\n", count);
	
	return 0;
}