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
//	fprintf(fp, "��%d��", m);
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
//			//��ӡ�ºú�������Լ�����
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
//{//��
//	char ch;
//	if (a == 1) ch = '#';
//	else ch = '*';
//	int count = 0, i, j;//��count��ͳ�Ƽ�������һ��
//	//��
//	for (i = 0; i < 15; i++) {
//		if (arr[x - 1][i] == ch) {
//			count++;
//			if (count == 5) return 'o';
//			else continue;
//		}
//		else count = 0;
//	}
//	//��
//	count = 0;//��������
//	for (i = 0; i < 15; i++) {
//		if (arr[i][y - 1] == ch)
//		{
//			count++;
//			if (count == 5) return 'o';
//			else continue;
//		}
//		else count = 0;
//	}
//	//������(�ĸ����䵥���ж�)
//	count = 0;
//	//�����ĸ�����
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
//	//�����Ͻ�
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
//	// �����½ǣ�x decrease��y increase
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
//	//������
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
//	//�����Ͻ�,x��С��y����
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
//	//�����½�,x����y��С
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
//	printf("�Ƿ�Ҫ����һ��\n");
//	printf("1.��      0.��\n");
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
//		printf("��������ٴ�ѡ��1.��0.��"); goto xuanze;
//	}
//	return 0;
//}
//
//jinru()
//{
//	int a;
//	printf("**************************\n");
//	printf("*   ��ѡ����Ϸ�����˳�   *\n");
//	printf("*   1.��Ϸ      0.�˳�   *\n");
//	printf("**************************\n");
//	scanf("%d", &a);//�ж��Ƿ����
//	fflush(stdin);//��ջ�����
//	if (a == 0)exit(0);
//	else if (a == 1) return 0;
//	else {
//		do {
//			getchar();
//			printf("�������ݷǷ�������������\n");
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
//	printf("������Ҫ�µ�λ�ã��磺2��1���ڵڶ��е�һ��\n ");
//	do {
//		scanf("%d%c%d", &a, &ch, &b);
//		fflush(stdin);
//		while (getchar() == '\n') break;
//		system("cls");
//		//�ж����������Ƿ��������󷵻ػ����������룬���Ե�����;�˳�����
//		if (a <= 0 || a > 15 || b <= 0 || b > 15)
//		{
//			printf("������󣬼���(1)�����˳���Ϸ(0)\n");
//		cuowu:;
//			int i = 0;
//			scanf("%d", &i);
//			fflush(stdout);
//			if (i)
//				continue;
//			else exit(0);
//		}
//		//�ж��û��µ�λ���Ƿ��Ѿ�������
//		if (arr[a - 1][b - 1] != ' ')
//		{
//			printf("��λ���Ѿ��¹��ˣ�������1�������˳���Ϸ��0��");
//			goto cuowu;
//		}
//
//		arr[a - 1][b - 1] = '#';//�û��µ���Ϊ#
//		int f = 1;//�ж��Ǵ�����ǵ��Ի������
//		if (check(arr, a, b, f) == 'o')
//		{
//			printf("��Ӯ��\n");
//			goto out;
//		}
//
//		//������
//		int c = dian();
//		int q, p;
//		q = c - c / 100 * 100;
//		p = c / 100;
//		arr[p][q] = '*';
//		f = 0;
//		if (check(arr, p, q, f) == 'o')
//		{
//			printf("����Ӯ��\n");
//			goto out;
//		}
//		//��ӡ����
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
//		//��ӡ�ºú�������Լ�����
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