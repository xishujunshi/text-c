#include<stdio.h>

void choose()
{
	int a = 0;
	do {
		scanf_s("%d", &a);
		switch (a)
		{
		case 0:
			printf("结束\n");
			break;
		case 1:
			printf("开始游戏\n");
			game();
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (a);
}