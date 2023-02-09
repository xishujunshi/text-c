#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include "wuziqi.h"
char arr[15][15] = { ' ' };
int Score[15][15] = { 0 };
void ChessScore()
{
	int x, y, i, j, k;      //循环变量
	int number1 = 0, number2 = 0;   //number用来统计玩家或电脑棋子连成个数
	int empty = 0;    //empty用来统计空点个数
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			Score[i][j] = 0;
		}
	}
	for (x = 0; x < 15; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (arr[x][y] == ' ')    //如果这个点为空
			{
				for (i = -1; i <= 1; i++)
				{
					for (j = -1; j <= 1; j++)   //判断8个方向
					{
						if (i != 0 || j != 0)   //若是都为0的话，那不就是原坐标嘛
						{
							//对玩家落点评分
							for (k = 1; i <= 4; k++)   //循环4次
							{
								//这点没越界  且这点存在黑子（玩家）
								if (x + k * i >= 0 && x + k * i <= 14 &&
									y + k * j >= 0 && y + k * j <= 14 &&
									arr[x + k * i][y + k * j] == 0)
								{
									number1++;
								}
								else if (arr[x + k * i][y + k * j] == ' ')     //这点是个空点，+1后退出
								{
									empty++;
									break;
								}
								else                    //否则是墙或者对方的棋子了
								{
									break;
								}
							}
							for (k = -1; k >= -4; k--)            //向它的相反方向判断
							{
								//这点没越界  且这点存在黑子（玩家）
								if (x + k * i >= 0 && x + k * i <= 14 &&
									y + k * j >= 0 && y + k * j <= 14 &&
									arr[x + k * i][y + k * j] == 0)
								{
									number1++;
								}
								else if (arr[x + k * i][y + k * j] == ' ')     //这点是个空点，+1后退出
								{
									empty++;
									break;
								}
								else
								{
									break;
								}
							}
							if (number2 == 1)   //2个棋子
							{
								Score[x][y] += 1;
							}
							else if (number1 == 2)   //3个棋子
							{
								if (empty == 1)
								{
									Score[x][y] += 5;   //有一个空点+5分 死3
								}
								else if (empty == 2)
								{
									Score[x][y] += 10;  //有两个空点+10分 活3
								}
							}
							else if (number1 == 3)   //4个棋子
							{
								if (empty == 1)
								{
									Score[x][y] += 20;  //有一个空点+20分 死4
								}
								else if (empty == 2)
								{
									Score[x][y] += 100;  //有2个空点+100分 活4
								}
							}
							else if (number1 >= 4)
							{
								Score[x][y] += 1000;  //对方有5个棋子，分数要高点，先堵
							}

							empty = 0;   //统计空点个数的变量清零
							//对电脑落点评分
							for (k = 1; i <= 4; k++)   //循环4次
							{
								//这点没越界  且这点存在白子（电脑）
								if (x + k * i >= 0 && x + k * i <= 14 &&
									y + k * j >= 0 && y + k * j <= 14 &&
									arr[x + k * i][y + k * j] == 1)
								{
									number2++;
								}
								else if (arr[x + k * i][y + k * j] == ' ')
								{
									empty++;
									break;   //空点
								}
								else
								{
									break;
								}
							}
							for (k = -1; k >= -4; k--)   //向它的相反方向判断
							{
								if (x + k * i >= 0 && x + k * i <= 14 &&
									y + k * j >= 0 && y + k * j <= 14 &&
									arr[x + k * i][y + k * j] == '*')
								{
									number2++;
								}
								else if (arr[x + k * i][y + k * j] == ' ')
								{
									empty++;
									break;
								}
								else
								{
									break;   //注释与上面玩家版相同
								}
							}
							if (number2 == 0)
							{
								Score[x][y] += 1;    //1个棋子
							}
							else if (number2 == 1)
							{
								Score[x][y] += 2;    //2个棋子
							}
							else if (number2 == 2)   //3个棋子
							{
								if (empty == 1)
								{
									Score[x][y] += 8;  //死3
								}
								else if (empty == 2)
								{
									Score[x][y] += 30;  //活3
								}
							}
							else if (number2 == 3)   //4个棋子
							{
								if (empty == 1)
								{
									Score[x][y] += 50;   //死4
								}
								else if (empty == 2)
								{
									Score[x][y] += 200;   //活4
								}
							}
							else if (number2 >= 4)
							{
								Score[x][y] += 10000;   //自己落在这点能形成5个，也就能胜利了，分数最高
							}

							number1 = 0;     //清零，以便下次重新统计
							number2 = 0;
							empty = 0;
						}
					}
				}
			}
		}
	}
}

char check(char arr[15][15], int x, int y, int a)
{//行
	char ch;
	if (a == 1) ch = '#';
	else ch = '*';
	int count = 0, i, j;//用count来统计几个连在一起
	//列
	for (i = 0; i < 15; i++) {
		if (arr[x - 1][i] == ch) {
			count++;
			if (count == 5) return 'o';
			else continue;
		}
		else count = 0;
	}
	//行
	count = 0;//计数归零
	for (i = 0; i < 15; i++) {
		if (arr[i][y - 1] == ch)
		{
			count++;
			if (count == 5) return 'o';
			else continue;
		}
		else count = 0;
	}
	//往右下(四个角落单独判断)
	count = 0;
	//不在四个角落
	if (x >= 5 || y >= 5 || x <= 11 || y <= 11)
	{
		for (int i = x - 5; i < x + 5; i++)
		{
			for (int j = y + (i - x); ; )
			{
				if (arr[i][j] == ch)
				{
					count++;
					if (count == 5) return 'o';
					else break;
				}
				else
				{
					count = 0;
					break;
				}
			}
		}
	}
	//在左上角
	else if (x < 5 && y < 5)
	{
		for (int i = x; i < x + 5; i++)
		{
			for (int j = y + (i - x); ; )
			{
				if (arr[i][j] == ch)
				{
					count++;
					if (count == 5) return 'o';
					else break;
				}
				else
				{
					count = 0;
					break;
				}
			}
		}
	}
	// 在右下角，x decrease，y increase
	else if (x > 11 && y < 5)
	{
		for (int i = x - 5; i < x; i++)
		{
			for (int j = y + (i - x); ; )
			{
				if (arr[i][j] == ch)
				{
					count++;
					if (count == 5) return 'o';
					else break;
				}
				else
				{
					count = 0;
					break;
				}
			}
		}
	}
	//往左下
	count = 0;
	if (x >= 5 || y >= 5 || x <= 11 || y <= 11)
	{
		for (int i = x + 5; i > x - 5; i--)
		{
			for (int j = y + (i - x); ; )
			{
				if (arr[i][j] == ch)
				{
					count++;
					if (count == 5) return 'o';
					else break;
				}
				else
				{
					count = 0;
					break;
				}
			}
		}
	}
	//在右上角,x减小，y增大
	else if (x > 11 && y < 5)
	{
		for (int i = x; i > x - 5; i--)
		{
			for (int j = y + (i - x); ; )
			{
				if (arr[i][j] == ch)
				{
					count++;
					if (count == 5) return 'o';
					else break;
				}
				else
				{
					count = 0;
					break;
				}
			}
		}
	}
	//在左下角,x增大，y减小
	else if (x < 5 && y > 11)
	{
		for (int i = x; i < x + 5; i++)
		{
			for (int j = y + (i - x); ; )
			{
				if (arr[i][j] == ch)
				{
					count++;
					if (count == 5) return 'o';
					else break;
				}
				else
				{
					count = 0;
					break;
				}
			}
		}
	}
	return 'p';
}
int main()
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
			arr[i][j] = ' ';
	}
	jinru();
jixu:;
	youxi();
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
			arr[i][j] = ' ';
	}
	printf("是否要再玩一次\n");
	printf("1.是      0.否\n");
	int i; xuanze:;
	scanf("%d", &i);
	if (i == 1) goto jixu;
	else if (i == 0) exit(0);
	else
	{
		getchar();
		printf("输入错误，再次选择1.是0.否"); goto xuanze;
	}
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
	fflush(stdin);//清空缓存区
	if (a == 0)exit(0);
	else if (a == 1) return 0;
	else {
		do {
			getchar();
			printf("输入数据非法，请重新输入\n");
			scanf("%d", &a);
			fflush(stdin);
			if (a == 0) exit(0);
			else if (a == 1) return 0;
		} while (a);
	}
}
youxi()
{
	int a, b, e, f;
	char ch;
	int num = 0;
	printf("请输入要下的位置，如：2，1即在第二行第一列\n ");
	do {
		scanf("%d%c%d", &a, &ch, &b);
		fflush(stdin);
		while (getchar() == '\n') break;
		system("cls");
		//判断输入坐标是否有误，有误返回还是重新输入，可以当作中途退出功能
		if (a <= 0 || a > 15 || b <= 0 || b > 15)
		{
			printf("输入错误，继续(1)还是退出游戏(0)\n");
		cuowu:;
			int i = 0;
			scanf("%d", &i);
			fflush(stdout);
			if (i)
				continue;
			else exit(0);
		}
		//判断用户下的位置是否已经有棋子
		if (arr[a - 1][b - 1] != ' ')
		{
			printf("该位置已经下过了，继续（1）还是退出游戏（0）");
			goto cuowu;
		}

		arr[a - 1][b - 1] = '#';//用户下的棋为#
		int f = 1;//判断是传入的是电脑还是玩家
		if (check(arr, a, b, f) == 'o')
		{
			printf("你赢了\n");
			goto out;
		}

		//电脑下
		int q = 0, p = 0;
		int* w = &q;
		int* r = &p;
		int m;
		void score(w, r);
		//arr[q][p] = '*';
		/*if (num < 2)
		{
			q = rand() % 5 + 5;
			p = rand() % 5 + 5;
			while (arr[q][p] == '*' || arr[q][p] == '#')
			{
				q = rand(time(NULL)) % 5 + 5;
				p = rand(time(NULL)) % 5 + 5;
			}
			arr[q][p] = '*';
			num++;
		}
		else
		{
			m = quanzhong(arr);
			p = m - m / 100 * 100;
			q = m / 100;
		}*/
		f = 0;
		if (check(arr, q, p, f) == 'o')
		{
			printf("电脑赢了\n");
			goto out;
		}
		//打印列数
		for (int i = 1; i <= 15; i++) {
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
			if (i >= 9)
			{
				printf("%d %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n", i + 1, arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], arr[i][6], arr[i][7], arr[i][8], arr[i][9], arr[i][10], arr[i][11], arr[i][12], arr[i][13], arr[i][14]);
			}
			else
				printf("%d  %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c \n", i + 1, arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[i][5], arr[i][6], arr[i][7], arr[i][8], arr[i][9], arr[i][10], arr[i][11], arr[i][12], arr[i][13], arr[i][14]);
			printf("-------------------------------------------------------------\n");
		}
	} while (1);
out:;
}
