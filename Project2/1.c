//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//#include<time.h>
//#include<memory.h>
//char arr[15][15] = { ' ' };
//int Score[15][15] = { 0 };
//
//jilu(int m)
//{
//	FILE* fp;
//	if ((fp = fopen("score.txt", "w")) == NULL)
//	{
//		printf("Open error...");
//		return;
//	}
//	fprintf(fp, "第%d次", m);
//	fprintf(fp, "\n");
//	for (int i = 0; i < 15; i++)
//	{
//		for (int j = 0; j < 15; j++)
//		{
//
//			for (int i = 1; i <= 15; i++) {
//				if (i == 1)fprintf(fp, "   %d ", 1);
//				else if (i != 15)
//				{
//					if (i >= 10)
//					{
//						fprintf(fp, " %d ", i);
//					}
//					else
//						fprintf(fp, "  %d ", i);
//				}
//				else  fprintf(fp, " %d \n", i);
//			}
//			//打印下好后的棋盘以及行数
//			for (int i = 0; i < 15; i++)
//			{
//				if (i >= 9)
//				{
//					fprintf(fp, "%d %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n", i + 1, arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], arr[i][6], arr[i][7], arr[i][8], arr[i][9], arr[i][10], arr[i][11], arr[i][12], arr[i][13], arr[i][14]);
//				}
//				else
//					fprintf(fp, "%d  %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n", i + 1, arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], arr[i][6], arr[i][7], arr[i][8], arr[i][9], arr[i][10], arr[i][11], arr[i][12], arr[i][13], arr[i][14]);
//				fprintf(fp, "-------------------------------------------------------------\n");
//			}
//		}
//	}
//	fclose(fp);
//}
//
//int dian()
//{
//	memset(Score, 0, sizeof(Score));
//	evaluate();
//	int temp = 0, count = 0;
//	int mx, my, nx, ny, x, y;
//	for (int i = 0; i < 15; i++)
//	{
//		for (int j = 0; j < 15; j++)
//		{
//			if (Score[i][j] == -100) continue;
//			else if (0 < Score[i][j])
//			{
//				if (temp < Score[i][j])
//				{
//					mx = i; my = j;
//					temp = Score[i][j];
//				}
//			}
//			else if (0 < Score[i][j])
//			{
//				if (count > Score[i][j])
//				{
//					nx = i; ny = j;
//					count = Score[i][j];
//				}
//			}
//			if (fabs(count) >= temp)
//			{
//				x = nx;
//				y = ny;
//			}
//			else
//			{
//				x = mx;
//				y = my;
//			}
//		}
//	}
//	return x * 100 + y;
//}
//
//evaluate()
//{
//	int i, j;
//	for (i = 0; i < 15; i++)
//	{
//		int temp = 0, score = 0;
//		for (j = 0; j < 15; j++)
//		{
//			if (arr[i][j] == ' ')
//			{
//				score = 0;
//				int row = 0, col = 0, pie = 0, na = 0;
//				//row
//				for (int m = i - 5; m < i + 5; m++)
//				{
//					if (m < 0) { m = -1; continue; }
//					else if (m > 15) break;
//					if (arr[i][m] == '*') score += 1;
//					else if (arr[i][m] == ' ') score += 0;
//					else score -= 1;
//				}
//				//col
//				for (int m = j - 5; m < j + 5; m++)
//				{
//					if (m < 0) { m = -1; continue; }
//					else if (m > 15) break;
//					if (arr[m][j] == '*') score += 1;
//					else if (arr[m][j] == ' ') score += 0;
//					else score -= 1;
//				}
//				//na
//				for (int m = i - 5; m < i + 5; m++)
//				{
//					if (m < 0) { m = -1; continue; }
//					else if (m > 15) break;
//					for (int n = j - (i - m);;)
//					{
//						if (arr[m][n] == '*') score += 1;
//						else if (arr[m][n] == ' ') score += 0;
//						else score -= 1;
//						break;
//					}
//				}
//				//pie
//				for (int m = i + 5; m > i - 5; m--)
//				{
//					if (m > 15) { m = 15; continue; }
//					else if (m < 0) break;
//					for (int n = j - (i - m);;)
//					{
//						if (arr[m][n] == '*') score += 1;
//						else if (arr[m][n] == ' ') score += 0;
//						else score -= 1;
//						break;
//					}
//				}
//				Score[i][j] = score;
//			}
//			else Score[i][j] = -100;
//		}
//	}
//}
//
//char check(char arr[15][15], int x, int y, int a)
//{//行
//	char ch;
//	if (a == 1) ch = '#';
//	else ch = '*';
//	int count = 0, i, j;//用count来统计几个连在一起
//	//列
//	for (i = 0; i < 15; i++) {
//		if (arr[x - 1][i] == ch) {
//			count++;
//			if (count == 5) return 'o';
//			else continue;
//		}
//		else count = 0;
//	}
//	//行
//	count = 0;//计数归零
//	for (i = 0; i < 15; i++) {
//		if (arr[i][y - 1] == ch)
//		{
//			count++;
//			if (count == 5) return 'o';
//			else continue;
//		}
//		else count = 0;
//	}
//	//往右下(四个角落单独判断)
//	count = 0;
//	//不在四个角落
//	if (x >= 5 || y >= 5 || x <= 11 || y <= 11)
//	{
//		for (int i = x - 5; i < x + 5; i++)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	//在左上角
//	else if (x < 5 && y < 5)
//	{
//		for (int i = x; i < x + 5; i++)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	// 在右下角，x decrease，y increase
//	else if (x > 11 && y < 5)
//	{
//		for (int i = x - 5; i < x; i++)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	//往左下
//	count = 0;
//	if (x >= 5 || y >= 5 || x <= 11 || y <= 11)
//	{
//		for (int i = x + 5; i > x - 5; i--)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	//在右上角,x减小，y增大
//	else if (x > 11 && y < 5)
//	{
//		for (int i = x; i > x - 5; i--)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	//在左下角,x增大，y减小
//	else if (x < 5 && y > 11)
//	{
//		for (int i = x; i < x + 5; i++)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	return 'p';
//}
//
//int main()
//{
//	int count = 1;
//	for (int i = 0; i < 15; i++)
//	{
//		for (int j = 0; j < 15; j++)
//			arr[i][j] = ' ';
//	}
//	jinru();
//jixu:;
//	youxi();
//	jilu(count);
//	for (int i = 0; i < 15; i++)
//	{
//		for (int j = 0; j < 15; j++)
//			arr[i][j] = ' ';
//	}
//	printf("是否要再玩一次\n");
//	printf("1.是      0.否\n");
//	int i; xuanze:;
//	scanf("%d", &i);
//	if (i == 1)
//	{
//		count++;
//		goto jixu;
//	}
//	else if (i == 0) exit(0);
//	else
//	{
//		getchar();
//		printf("输入错误，再次选择1.是0.否"); goto xuanze;
//	}
//	return 0;
//}
//
//jinru()
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
//
//youxi()
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
//		int c = dian();
//		int q, p;
//		q = c - c / 100 * 100;
//		p = c / 100;
//		arr[p][q] = '*';
//		f = 0;
//		if (check(arr, p, q, f) == 'o')
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