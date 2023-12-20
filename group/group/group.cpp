#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int gp[10][10] = { 0 };//ͼ
int vis[10];//�ж��Ƿ��ȡ
int pre[10];//�洢��һ���ڵ�
int dis[10];//�洢���·��

//����
void create() {
	int rowq, b, length;
	printf("�������������㼰Ȩֵ��\n");
	scanf_s("%d %d %d", &rowq, &b, &length);
	gp[rowq][b] = length;
	gp[b][rowq] = length;
}

//������ȡ
void read() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", gp[i][j]);
		}
		printf("\n");
	}
}

//�Ͻ�˹�����㷨
void shortest(int ori) {
	vis[ori] = 1;
	for (int i = 0; i < 10; i++) {
		//�����·�������ҽ����滻
		if (dis[ori] + gp[ori][i] < dis[i]) {
			dis[i] = dis[ori] + gp[ori][i];
			pre[i] = ori;//�ҵ��Ļ����洢ǰ���ڵ�
		}
	}
	//����Сֵ���±�
	int flag = ori;
	int min = 100;
	for (int i = 0; i < 10; i++) {
		if (min > gp[ori][i] && vis[i] == 0 ) {
			flag = i;
			min = gp[ori][i];
		}
	}
	if(flag!=ori)
	shortest(flag);
	for (int i = 0; i < 10; i++) {
		if (vis[i] == 0 && gp[ori][i] < 100)
			shortest(i);
	}
}

//���·��
void roa(int i) {
	if (pre[i] != -1) {
		roa(pre[i]);
		printf("%d", pre[i]);
	}
	else {
		return;
	}
}

//���·��
void road(int ori) {
	for (int i = 0; i < 10; i++) {
		if (i == ori) continue;
		printf("%d��%d�����·������Ϊ��%d  ·��Ϊ��", ori, i, dis[i]);
		roa(i);
		printf("%d", i);
		printf("\n");
	}
}

int main() {
	
	//����
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			gp[i][j] = 100;
		}
	}
	{
	while (1) {
		int flag = 0;
		printf("�������������������Ƿ�Ҫ����������");
		scanf_s("%d", &flag);
		if (flag) create();
		else break;
	}
	read();
}
	
	{//��ʼ��
		memset(vis, 0, sizeof(vis));//��ʼ���ѷ������飬0Ϊδ����
		memset(dis, 100, sizeof(dis));//��ʼ�����·�����飬Ĭ�����Ϊ100
		memset(pre, -1, sizeof(pre));//�洢ǰһ����㣬Ĭ��Ϊ-1��-1Ϊ��ǰ���ڵ�
	}

	//����������������·��
	int ori = 0;
	printf("��������㣡����\n");
	scanf_s("%d", &ori);
	for (int i = 0; i < 10; i++) {   
		dis[i] = gp[ori][i];
		if (gp[ori][i] != 100) 
			pre[i] = ori;
	}
	dis[ori] = 0;
	//�Ͻ�˹�����㷨
	shortest(ori);
	road(ori);
}