#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
char arr[15][15] = { ' '};
int m, n;
char iswin(char board[15][15], int row, int col,int x) {
	//��
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
	//��
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
	//����
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
	//����
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
	//��
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
	printf("*   ��ѡ����Ϸ�����˳�   *\n");
	printf("*   1.��Ϸ      0.�˳�   *\n");
	printf("**************************\n");
	scanf("%d", &a);//�ж��Ƿ����
	fflush(stdout);//��ջ�����
	if (a)
	{
		int x = 0, y = 0;
	}
}
youxi()
{
	int a, b;
	char ch;
	printf("������Ҫ�µ�λ�ã��磺2��1���ڵڶ��е�һ��\n ");
	do{
	scanf("%d%c%d", &a, &ch,&b);
	fflush(stdout);
	system("cls");
	//�ж��û��µ�λ���Ƿ��Ѿ�������
	if (arr[a - 1][b - 1] != ' ')
	{
		printf("��λ���Ѿ��¹��ˣ�������1�������˳���Ϸ��0��");
			goto cuowu;
	}
	//�ж����������Ƿ��������󷵻ػ����������룬���Ե�����;�˳�����
	arr[a-1][b-1] = '#';
	if (a <= 0 || a>15 || b <= 0 || b>15)
	{
		printf("������󣬼���(1)�����˳���Ϸ(0)");
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
		printf("��Ӯ��\n");
		goto out;
	}
	int q, p;//�����Զ�����
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
		printf("����Ӯ��\n");
		goto out;
	}
	//��ӡ����
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
	//��ӡ�ºú�������Լ�����
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