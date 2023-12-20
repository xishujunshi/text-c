#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int gp[10][10] = { 0 };//图
int vis[10];//判断是否读取
int pre[10];//存储上一个节点
int dis[10];//存储最短路径

//创建
void create() {
	int rowq, b, length;
	printf("请输入两个顶点及权值！\n");
	scanf_s("%d %d %d", &rowq, &b, &length);
	gp[rowq][b] = length;
	gp[b][rowq] = length;
}

//遍历读取
void read() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", gp[i][j]);
		}
		printf("\n");
	}
}

//迪杰斯特拉算法
void shortest(int ori) {
	vis[ori] = 1;
	for (int i = 0; i < 10; i++) {
		//找最短路径，并且进行替换
		if (dis[ori] + gp[ori][i] < dis[i]) {
			dis[i] = dis[ori] + gp[ori][i];
			pre[i] = ori;//找到的话，存储前驱节点
		}
	}
	//找最小值的下标
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

//输出路径
void roa(int i) {
	if (pre[i] != -1) {
		roa(pre[i]);
		printf("%d", pre[i]);
	}
	else {
		return;
	}
}

//最短路径
void road(int ori) {
	for (int i = 0; i < 10; i++) {
		if (i == ori) continue;
		printf("%d到%d的最短路径长度为：%d  路径为：", ori, i, dis[i]);
		roa(i);
		printf("%d", i);
		printf("\n");
	}
}

int main() {
	
	//创建
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			gp[i][j] = 100;
		}
	}
	{
	while (1) {
		int flag = 0;
		printf("请输入数字来决定你是否要继续创建表！");
		scanf_s("%d", &flag);
		if (flag) create();
		else break;
	}
	read();
}
	
	{//初始化
		memset(vis, 0, sizeof(vis));//初始化已访问数组，0为未访问
		memset(dis, 100, sizeof(dis));//初始化最短路径数组，默认最大为100
		memset(pre, -1, sizeof(pre));//存储前一个结点，默认为-1，-1为无前驱节点
	}

	//输入起点来计算最短路径
	int ori = 0;
	printf("请输入起点！！！\n");
	scanf_s("%d", &ori);
	for (int i = 0; i < 10; i++) {   
		dis[i] = gp[ori][i];
		if (gp[ori][i] != 100) 
			pre[i] = ori;
	}
	dis[ori] = 0;
	//迪杰斯特拉算法
	shortest(ori);
	road(ori);
}