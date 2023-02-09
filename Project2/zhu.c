#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include "wuziqi.h"
char arr[15][15] = { ' ' };
int Score[15][15] = { 0 };
void ChessScore()
{
	int x, y, i, j, k;      //ѭ������
	int number1 = 0, number2 = 0;   //number����ͳ����һ�����������ɸ���
	int empty = 0;    //empty����ͳ�ƿյ����
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
			if (arr[x][y] == ' ')    //��������Ϊ��
			{
				for (i = -1; i <= 1; i++)
				{
					for (j = -1; j <= 1; j++)   //�ж�8������
					{
						if (i != 0 || j != 0)   //���Ƕ�Ϊ0�Ļ����ǲ�����ԭ������
						{
							//������������
							for (k = 1; i <= 4; k++)   //ѭ��4��
							{
								//���ûԽ��  �������ں��ӣ���ң�
								if (x + k * i >= 0 && x + k * i <= 14 &&
									y + k * j >= 0 && y + k * j <= 14 &&
									arr[x + k * i][y + k * j] == 0)
								{
									number1++;
								}
								else if (arr[x + k * i][y + k * j] == ' ')     //����Ǹ��յ㣬+1���˳�
								{
									empty++;
									break;
								}
								else                    //������ǽ���߶Է���������
								{
									break;
								}
							}
							for (k = -1; k >= -4; k--)            //�������෴�����ж�
							{
								//���ûԽ��  �������ں��ӣ���ң�
								if (x + k * i >= 0 && x + k * i <= 14 &&
									y + k * j >= 0 && y + k * j <= 14 &&
									arr[x + k * i][y + k * j] == 0)
								{
									number1++;
								}
								else if (arr[x + k * i][y + k * j] == ' ')     //����Ǹ��յ㣬+1���˳�
								{
									empty++;
									break;
								}
								else
								{
									break;
								}
							}
							if (number2 == 1)   //2������
							{
								Score[x][y] += 1;
							}
							else if (number1 == 2)   //3������
							{
								if (empty == 1)
								{
									Score[x][y] += 5;   //��һ���յ�+5�� ��3
								}
								else if (empty == 2)
								{
									Score[x][y] += 10;  //�������յ�+10�� ��3
								}
							}
							else if (number1 == 3)   //4������
							{
								if (empty == 1)
								{
									Score[x][y] += 20;  //��һ���յ�+20�� ��4
								}
								else if (empty == 2)
								{
									Score[x][y] += 100;  //��2���յ�+100�� ��4
								}
							}
							else if (number1 >= 4)
							{
								Score[x][y] += 1000;  //�Է���5�����ӣ�����Ҫ�ߵ㣬�ȶ�
							}

							empty = 0;   //ͳ�ƿյ�����ı�������
							//�Ե����������
							for (k = 1; i <= 4; k++)   //ѭ��4��
							{
								//���ûԽ��  �������ڰ��ӣ����ԣ�
								if (x + k * i >= 0 && x + k * i <= 14 &&
									y + k * j >= 0 && y + k * j <= 14 &&
									arr[x + k * i][y + k * j] == 1)
								{
									number2++;
								}
								else if (arr[x + k * i][y + k * j] == ' ')
								{
									empty++;
									break;   //�յ�
								}
								else
								{
									break;
								}
							}
							for (k = -1; k >= -4; k--)   //�������෴�����ж�
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
									break;   //ע����������Ұ���ͬ
								}
							}
							if (number2 == 0)
							{
								Score[x][y] += 1;    //1������
							}
							else if (number2 == 1)
							{
								Score[x][y] += 2;    //2������
							}
							else if (number2 == 2)   //3������
							{
								if (empty == 1)
								{
									Score[x][y] += 8;  //��3
								}
								else if (empty == 2)
								{
									Score[x][y] += 30;  //��3
								}
							}
							else if (number2 == 3)   //4������
							{
								if (empty == 1)
								{
									Score[x][y] += 50;   //��4
								}
								else if (empty == 2)
								{
									Score[x][y] += 200;   //��4
								}
							}
							else if (number2 >= 4)
							{
								Score[x][y] += 10000;   //�Լ�����������γ�5����Ҳ����ʤ���ˣ��������
							}

							number1 = 0;     //���㣬�Ա��´�����ͳ��
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
{//��
	char ch;
	if (a == 1) ch = '#';
	else ch = '*';
	int count = 0, i, j;//��count��ͳ�Ƽ�������һ��
	//��
	for (i = 0; i < 15; i++) {
		if (arr[x - 1][i] == ch) {
			count++;
			if (count == 5) return 'o';
			else continue;
		}
		else count = 0;
	}
	//��
	count = 0;//��������
	for (i = 0; i < 15; i++) {
		if (arr[i][y - 1] == ch)
		{
			count++;
			if (count == 5) return 'o';
			else continue;
		}
		else count = 0;
	}
	//������(�ĸ����䵥���ж�)
	count = 0;
	//�����ĸ�����
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
	//�����Ͻ�
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
	// �����½ǣ�x decrease��y increase
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
	//������
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
	//�����Ͻ�,x��С��y����
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
	//�����½�,x����y��С
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
	printf("�Ƿ�Ҫ����һ��\n");
	printf("1.��      0.��\n");
	int i; xuanze:;
	scanf("%d", &i);
	if (i == 1) goto jixu;
	else if (i == 0) exit(0);
	else
	{
		getchar();
		printf("��������ٴ�ѡ��1.��0.��"); goto xuanze;
	}
	return 0;
}
jinru()
{
	int a;
	printf("**************************\n");
	printf("*   ��ѡ����Ϸ�����˳�   *\n");
	printf("*   1.��Ϸ      0.�˳�   *\n");
	printf("**************************\n");
	scanf("%d", &a);//�ж��Ƿ����
	fflush(stdin);//��ջ�����
	if (a == 0)exit(0);
	else if (a == 1) return 0;
	else {
		do {
			getchar();
			printf("�������ݷǷ�������������\n");
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
	printf("������Ҫ�µ�λ�ã��磺2��1���ڵڶ��е�һ��\n ");
	do {
		scanf("%d%c%d", &a, &ch, &b);
		fflush(stdin);
		while (getchar() == '\n') break;
		system("cls");
		//�ж����������Ƿ��������󷵻ػ����������룬���Ե�����;�˳�����
		if (a <= 0 || a > 15 || b <= 0 || b > 15)
		{
			printf("������󣬼���(1)�����˳���Ϸ(0)\n");
		cuowu:;
			int i = 0;
			scanf("%d", &i);
			fflush(stdout);
			if (i)
				continue;
			else exit(0);
		}
		//�ж��û��µ�λ���Ƿ��Ѿ�������
		if (arr[a - 1][b - 1] != ' ')
		{
			printf("��λ���Ѿ��¹��ˣ�������1�������˳���Ϸ��0��");
			goto cuowu;
		}

		arr[a - 1][b - 1] = '#';//�û��µ���Ϊ#
		int f = 1;//�ж��Ǵ�����ǵ��Ի������
		if (check(arr, a, b, f) == 'o')
		{
			printf("��Ӯ��\n");
			goto out;
		}

		//������
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
			printf("����Ӯ��\n");
			goto out;
		}
		//��ӡ����
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
		//��ӡ�ºú�������Լ�����
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
