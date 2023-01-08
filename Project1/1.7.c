#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a, b, arr[1000] = { 0 };
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	getchar();
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", arr + i);
//		getchar();
//		if (*(arr + i) > b)
//			sum++;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a, b[100000];
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", b + i);
//		getchar();
//	}
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < a - 1; j++)
//		{
//			int c;
//			if (b[i] > b[j])
//			{
//				c = b[j];
//				b[j] = b[i];
//				b[i] = c;
//			}
//
//		}
//	}
//	printf("%d %d", *b, *(b + a - 1));
//	return 0;
//}
//int main()
//{
//	int a, b[100000];
//	int max, min;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", b + i);
//		getchar();
//	}
//	max = *b;
//	for (int i = 1; i < a; i++)
//	{
//		if (max < *(b + i))
//		{
//			max=*(b+i);
//		}
//	}
//	printf("%d ", max);
//	min = *b;
//	for (int j = 1; j < a; j++)
//	{
//		if (min > *(b + j))
//			min = *(b + j);
//	}
//	printf("%d", min);
//	return 0;
//}
//int main()
//{
//	int a, sum = 1;
//	scanf("%d", &a);
//	while (a > 9)
//	{
//		sum *= (a % 10);
//		a /= 10;
//	}
//	sum *= a;
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a, b[1000], sum=0;
//	scanf("%d", &a);
//	getchar();
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", (b + i));
//		getchar();
//		int q = 0;
//		for (int j = 1; j <= *(b + i); j++)
//		{
//			if (*(b + i) % j == 0)
//				q += 1;
//		}
//		if (q <= 2)
//			sum += 1;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a, b, c, d;
//	int o = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	for (int i = -100; i <= 100; i++)
//	{
//		for (int j = -100; j <= 100; j++)
//		{
//			for (int q = -100; q <= 100; q++)
//			{
//				if (a * i + b * j + q * c + d == 0)
//				{
//					printf("%d %d %d", i, j, q);
//					o++;
//					goto out;
//				}
//			}
//		}
//	}
//	if (o == 0)
//	{
//		printf("-1");
//	}
//	out:
//	return 0;
//}
//sum(int* p, int* q)
//{
//	printf("%d\n", *p + *q);
//}
//int main()
//{
//	int a, b[2];
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d %d", b, b + 1);
//		sum(b, b + 1);
//	}
//	return 0;
//}