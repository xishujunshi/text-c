#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
jie(int c,int sum)
{
	int j = 1;
	if(c>0)
	for (int i = 1; i <= c; i++)
	{
		j *= i;
	}
	sum = j;
	if(c!=0)
	return sum + jie(c - 1,sum);
}
int main()
{
	int a, sum = 0;
	scanf("%d", &a);
	sum = 0;
	sum = jie(a,sum);
	printf("%d", sum-1);
	return 0;
}