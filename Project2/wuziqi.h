//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdio.h>
//#include <stdlib.h>
//#include<time.h>
////char arr[15][15] = { ' ' };
//void jinru();
//void youxi();
//int quanzhong(char arr[15][15]);
//char check(char arr[15][15], int x, int y, int a);
//int panduan(char arr[15][15], int x, int y);
//void jinru()
//{
//	int a;
//	printf("**************************\n");
//	printf("*   请选择游戏还是退出   *\n");
//	printf("*   1.游戏      0.退出   *\n");
//	printf("**************************\n");
//	scanf("%d", &a);//判断是否进入
//	fflush(stdin);//清空缓存区
//	if (a == 0)exit(0);
//	else if (a == 1) return 0;
//	else {
//		do {
//			getchar();
//			printf("输入数据非法，请重新输入\n");
//			scanf("%d", &a);
//			fflush(stdin);
//			if (a == 0) exit(0);
//			else if (a == 1) return 0;
//		} while (a);
//	}
//}
//void youxi()
//{
//	int a, b, e, f;
//	char ch;
//	int num = 0;
//	printf("请输入要下的位置，如：2，1即在第二行第一列\n ");
//	do {
//		scanf("%d%c%d", &a, &ch, &b);
//		fflush(stdin);
//		while (getchar() == '\n') break;
//		system("cls");
//		//判断输入坐标是否有误，有误返回还是重新输入，可以当作中途退出功能
//		if (a <= 0 || a > 15 || b <= 0 || b > 15)
//		{
//			printf("输入错误，继续(1)还是退出游戏(0)\n");
//		cuowu:;
//			int i = 0;
//			scanf("%d", &i);
//			fflush(stdout);
//			if (i)
//				continue;
//			else exit(0);
//		}
//		//判断用户下的位置是否已经有棋子
//		if (arr[a - 1][b - 1] != ' ')
//		{
//			printf("该位置已经下过了，继续（1）还是退出游戏（0）");
//			goto cuowu;
//		}
//
//		arr[a - 1][b - 1] = '#';//用户下的棋为#
//		int f = 1;//判断是传入的是电脑还是玩家
//		if (check(arr, a, b, f) == 'o')
//		{
//			printf("你赢了\n");
//			goto out;
//		}
//
//		//电脑下
//		int q, p;
//		int m;
//		srand(time(NULL));
//		if (num < 2)
//		{
//			q = rand() % 5 + 5;
//			p = rand() % 5 + 5;
//			while (arr[q][p] == '*' || arr[q][p] == '#')
//			{
//				q = rand(time(NULL)) % 5 + 5;
//				p = rand(time(NULL)) % 5 + 5;
//			}
//			arr[q][p] = '*';
//			num++;
//		}
//		else
//		{
//			m = quanzhong(arr);
//			p = m - m / 100 * 100;
//			q = m / 100;
//		}
//		f = 0;
//		if (check(arr, q, p, f) == 'o')
//		{
//			printf("电脑赢了\n");
//			goto out;
//		}
//		//打印列数
//		for (int i = 1; i <= 15; i++) {
//			if (i == 1)printf("   %d ", 1);
//			else if (i != 15)
//			{
//				if (i >= 10)
//				{
//					printf(" %d ", i);
//				}
//				else
//					printf("  %d ", i);
//			}
//			else  printf(" %d \n", i);
//		}
//		//打印下好后的棋盘以及行数
//		for (int i = 0; i < 15; i++)
//		{
//			if (i >= 9)
//			{
//				printf("%d %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n", i + 1, arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], arr[i][6], arr[i][7], arr[i][8], arr[i][9], arr[i][10], arr[i][11], arr[i][12], arr[i][13], arr[i][14]);
//			}
//			else
//				printf("%d  %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n", i + 1, arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], arr[i][6], arr[i][7], arr[i][8], arr[i][9], arr[i][10], arr[i][11], arr[i][12], arr[i][13], arr[i][14]);
//			printf("-------------------------------------------------------------\n");
//		}
//	} while (1);
//out:;
//}