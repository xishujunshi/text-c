#include<stdio.h>

void choose()
{
	int a = 0;
	do {
		scanf_s("%d", &a);
		switch (a)
		{
		case 0:
			printf("����\n");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while (a);
}