#include<stdio.h>
#include"game.h"
void game()
{
	char ch[ROW][ROL];
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < ROL; j++)
		{
			ch[i][j] = ' ';
		}
	}
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < ROL; j++)
		{
			printf(" %c ", ch[i][j]);
			if (j <ROL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < ROL ; j++)
			{
				printf("---");
				if (j < ROL-1 )
					printf("|");
			}
			printf("\n");
		}
	}
	people();
	comput();
}