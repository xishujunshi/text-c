#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
char arr[15][15] = { ' '};
int m, n;
char iswin(char board[15][15], int row, int col,int x) {
	//行
	char ch;
	if (x == 1) ch = '#';
	else ch = '*';
	int ren = 0, dian = 0, i, j;
	for (i = 0; i < row; i++) {
		ren = 0;
		for (j = 0; j < col; j++) {
			if (board[i][j] == '#')
				ren++;
			else
				ren = 0;
			if (ren >= 5)
				return 'o';
		}

	}
	//列
	ren = dian = 0;
	for (i = 0; i < row; i++) {
		ren = 0;
		for (j = 0; j < col; j++) {
			if (board[j][i] == '#')
				ren++;
			else
				ren = 0;
			if (ren >= 5)
				return 'o';
		}

	}
	//右下
	ren = dian = i = j = 0;
	for (int k = 0; k < row; k++) {
		i = k;
		j = 0;
		ren = 0;
		while (i < row && j < col) {
			if (board[i][j] == '#') {
				ren++;
			}
			else {
				ren = 0;
			}
			i++;
			j++;
			if (ren >= 5)
				return 'o';
		}

	}
	//右上
	for (int k = row; k >= 0; k--) {
		j = col;
		i = k;
		ren = 0;
		while (i >= 0 && j >= 0) {
			if (board[i][j] == '#') {
				ren++;
			}
			else
				ren = 0;
			i--;
			j--;
			if (ren >= 5)
				return 'o';
		}

	}
	for (int k = row; k >= 0; k--) {
		i = k;
		j = 0;
		dian = 0;
		while (i >= 0 && j < col) {
			if (board[i][j] == '#') {
				dian++;
			}
			else
				dian = 0;
			i--;
			j++;
			if (dian >= 5)
				return 'o';
		}

	}
	for (int k = 0; k < row; k++) {
		i = k;
		j = col;
		dian = 0;
		while (i < row && j >= 0) {
			if (board[i][j] == '#') {
				dian++;
			}
			else
				dian = 0;
			i++;
			j--;
			if (dian >= 5)
				return 'o';
		}

	}
	for (int k = row; k >= 0; k--) {
		i = k;
		j = 0;
		dian = 0;
		while (i >= 0 && j < col) {
			if (board[i][j] == '#') {
				dian++;
			}
			else
				dian = 0;
			i--;
			j++;
			if (dian >= 5)
				return 'o';
		}

	}
	for (int k = 0; k < row; k++) {
		i = k;
		j = col;
		dian = 0;
		while (i < row && j >= 0) {
			if (board[i][j] == '#') {
				dian++;
			}
			else
				dian = 0;
			i++;
			j--;
			if (dian >= 5)
				return 'o';
		}

	}
	return 'c';
	//左
}
int main()
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
			arr[i][j] = ' ';
	}
	jinru();
	youxi();
	return 0;
}
jinru()
{
	int a;
	printf("**************************\n");
	printf("*   请选择游戏还是退出   *\n");
	printf("*   1.游戏      0.退出   *\n");
	printf("**************************\n");
	scanf("%d", &a);//判断是否进入
	fflush(stdout);//清空缓存区
	if (a)
	{
		int x = 0, y = 0;
	}
}
youxi()
{
	int a, b;
	char ch;
	printf("请输入要下的位置，如：2，1即在第二行第一列\n ");
	do{
	scanf("%d%c%d", &a, &ch,&b);
	fflush(stdout);
	system("cls");
	//判断用户下的位置是否已经有棋子
	if (arr[a - 1][b - 1] != ' ')
	{
		printf("该位置已经下过了，继续（1）还是退出游戏（0）");
			goto cuowu;
	}
	//判断输入坐标是否有误，有误返回还是重新输入，可以当作中途退出功能
	arr[a-1][b-1] = '#';
	if (a <= 0 || a>15 || b <= 0 || b>15)
	{
		printf("输入错误，继续(1)还是退出游戏(0)");
		cuowu:;
		int i = 0;
		scanf("%d", &i); 
		fflush(stdout);
		if (i)
			continue;
		else exit(0);
	}
	int f = 1;
	if (iswin(arr,a,b,f)=='o')
	{
		printf("你赢了\n");
		goto out;
	}
	int q, p;//电脑自动下棋
	srand(time(NULL));
	q = rand()%15-1;
	p = rand()%15-1;
	arr[q][p] = '*';
	while(arr[q][p] != ' ')
	{
		q = rand(time(NULL)) % 15 - 1;
		p = rand(time(NULL)) % 15 - 1;
	}
	f = 0;
	if (iswin(arr,q,p,f)=='o')
	{
		printf("电脑赢了\n");
		goto out;
	}
	//打印列数
	for(int i=1;i<=15;i++){
		if (i == 1)printf("   %d ", 1);
		else if (i != 15)
		{
			if (i >= 10)
			{
				printf(" %d ", i);
			}
			else
			printf("  %d ", i);
		}
		else  printf(" %d \n", i);
	}
	//打印下好后的棋盘以及行数
	for (int i = 0; i < 15; i++) 
	{
		if(i>=9)
		{
			printf("%d %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n", i+1, arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], arr[i][6], arr[i][7], arr[i][8], arr[i][9], arr[i][10], arr[i][11], arr[i][12], arr[i][13], arr[i][14]);
		}else
		printf("%d  %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n", i+1,arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], arr[i][6], arr[i][7], arr[i][8], arr[i][9], arr[i][10], arr[i][11], arr[i][12], arr[i][13], arr[i][14]);
		printf("-------------------------------------------------------------\n");
	}
	} while (1);
out:;
} 