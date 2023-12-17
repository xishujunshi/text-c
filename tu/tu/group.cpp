#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//��Ŀ�������·������
//[��������]
//����һ����������������õ�Դ���·����
//[����Ҫ��]
//���ڽӾ���Ϊ�洢�ṹ���õϽ�˹�����㷨����ĳһԴ�㵽��������֮������·�������·�����ȡ�


int a[10][10] = { 0 };
int dist[10]; // �洢Դ�㵽�����������̾���
bool visited[10]; // ��Ƕ����Ƿ񱻷��ʹ�
int prev[10]; // �洢���·����ǰ������

void create() {
	int rowq, b, length;
	printf("�������������㼰Ȩֵ��\n");
	scanf_s("%d %d %d", &rowq, &b, &length);
	a[rowq][b] = length;
	a[b][rowq] = length;
}

void read() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

// ori�ǵ�ǰ�Ľڵ� pre��֮ǰ�Ľڵ� left��ĿǰΪֹ��ȡ�ĸ���
void shortest(int ori,int pre,int left) {
	prev[left++] = ori;
	int min = 100;
	int flag = -1;
	for (int i = 0; i < 10; i++) {
		if (a[ori][i] != 0) {
			if (dist[ori] + a[ori][i] < dist[i]) {
				dist[i] = dist[ori] + a[ori][i];
			}
			if (a[ori][i] < min && visited[i] == 0 && dist[i] != 0) {
				min = a[ori][i];
				flag = i;
			}
		}
	}	

	if (flag != -1) {
		visited[flag] = 1;
		//��Ҫ�����жϣ��������û���ʵĽڵ㣬����Ҫ��������
		shortest(flag, ori,left);
	}

	printf("Origin to %d: ", ori);
	for (int i = 0; i < left; i++) {
		printf("%d ", prev[i]);
	}
	printf("\n");
	prev[left] = 0;
}


int main() {
	while (1) {
		int flag = 0;
		printf("�������������������Ƿ�Ҫ����������");
		scanf_s("%d", &flag);
		if (flag) create();
		else break;
	}
	read();
	memset(visited, 0, sizeof(visited));//��ʼ���ѷ������飬0Ϊδ����
	memset(dist, 100, sizeof(dist));
	int ori = 0;
	getchar();
	printf("��������㣡����\n");
	scanf_s("%d", &ori);
	dist[ori] = 0;
	prev[0] = ori;
	shortest(ori, -1,0);
	for (int i = 0; i < 10; i++) {
		printf("%d ", visited[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d  ", dist[i]);
	}
	return 0;
}