#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a, b, sum = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &b);
//		sum += b;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int arr[10000] = { 0 }, a, b, c=0;
//	scanf("%d %d", &a, &b);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", (arr + i));
//		if(i==0)
//		c = arr[0];
//		if (i > 0)
//		{
//			c *= arr[i];
//		}
//	}
//	printf("%d", c % b);
//	return 0;
//}
//int main()
//{
//	int a,sum=0;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		if (a % i == 0)
//		{
//			sum += i;
//		}
//		else
//			continue;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a' };
//	gets(arr,stdin);
//	/*printf("%s", arr[0]);*/
//	puts(arr);
//
//	return 0;
//}
//int main()
//{
//	int a, b[1000] = { '1' }, sum = 0;
//	scanf("%d", &a);
//	getchar();
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%1d", (b + i));
//	}
//	/*if (b[0] == 0)
//		sum++;*/
//	for (int i = 0; i < a; i++)
//	{
//		if (b[i] != b[i + 1] && b[i])
//			sum++;
//		else if (b[i] == b[i + 1] && b[i] == 0)
//			sum++;
//		else
//			continue;
//	}
//	printf("%d", sum);
//	return 0;
//}