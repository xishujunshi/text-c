#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//题目二：最短路径问题
//[问题描述]
//给定一个无向网，可以求得单源最短路径。
//[基本要求]
//以邻接矩阵为存储结构，用迪杰斯特拉算法求解从某一源点到其它顶点之间的最短路径及最短路径长度。


int a[10][10] = { 0 };
int dist[10]; // 存储源点到各个顶点的最短距离
bool visited[10]; // 标记顶点是否被访问过
int prev[10]; // 存储最短路径的前驱顶点

void create() {
	int rowq, b, length;
	printf("请输入两个顶点及权值！\n");
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

// ori是当前的节点 pre是之前的节点 left是目前为止读取的个数
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
		//需要进行判断，如果还有没访问的节点，还需要继续访问
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
		printf("请输入数字来决定你是否要继续创建表！");
		scanf_s("%d", &flag);
		if (flag) create();
		else break;
	}
	read();
	memset(visited, 0, sizeof(visited));//初始化已访问数组，0为未访问
	memset(dist, 100, sizeof(dist));
	int ori = 0;
	getchar();
	printf("请输入起点！！！\n");
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