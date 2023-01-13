#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	long long a;
//	scanf("%d", &a);
//	int q = 2, p = 1;
//	long double sum = 0;
//	for (int i = 0; i < a; i++)
//	{
//		sum += q * 1000 / p;
//		int temp = q;
//		q += p;
//		p = temp;
//	}
//	printf("%.2lf", sum/1000);
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int n = 1;
//	for (int i = a; i > 1; i--)
//	{
//		n = (n + 1) * 2;
//	}
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 10;; i++)
//	{
//		if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10)
//			break;
//	}
//	printf("%d", i);
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int n=1;
//	int temp = a;
//	for (int i = 0;; i++)
//	{
//		if (temp < 10)
//			break;
//		temp /= 10;
//		n++;
//	}
//	while (a > 0)
//	{
//		if (a < 9)
//		{
//			printf("%d", a);
//			break;
//		}
//		printf("%d ", a / pow(10, n - 1));
//		n--;
//		a -= a / pow(10, n - 1) * pow(10, n - 1);
//	}
//	return 0;
//}
//i(int x)
//{
//	if (x > 9)
//	{
//		i(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	i(a);
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int q = 0, p = 0;
//	for (q = 0;q<=100; q++)
//	{
//		for (p = 0;p<100; p++)
//		{
//			if (q * 100 + p == a + 2 * p * 100 + 2 * q)
//				goto out;
//		}
//	}
//	if (q * 100 + p != a + p * 100 + q)
//		printf("No Solution");
//	goto ou;
//	out:
//	printf("%d.%d", p, q);
//	ou:
//	return 0;
//}
//int main()
//{
//	int min;
//	scanf("%d", &min);
//	int rab = 0, tor = 0;//乌龟3m/mim,兔子9m/min  10min or rest 30min or run 10min
//	int flag = 0;
//	int n = 0, i;
//	if (min < 10)
//	{
//		tor += min * 3; rab += min * 9;
//		goto out;
//	}
//	for (i = 10; i <= min / 10 * 10; i += 10)
//	{
//		if (rab > tor)
//		{
//			flag = 1;//休息
//		}
//		if (n == 3)
//		{
//			flag = 0;//休息结束
//		}
//		if (flag == 0)
//		{
//			rab += 90;
//			tor += 30;
//			n = 0;//清空休息次数
//		}
//		else {
//			tor += 30;
//			n++;//增加次数
//		}
//	}
//	i -= 10;
//	if (i != min)
//	{
//		if (n < 3) tor += (min - i) * 3;
//		else {
//			tor += (min - i) * 3; rab += (min - i) * 9;
//		}
//	}
//	out:
//	if (rab > tor)
//	{
//		printf("^_^ %d", rab);
//	}
//	else if (rab < tor)
//		printf("@_@ %d", tor);
//	else printf("-_- %d", tor);
//	return 0;
//}
//int main()
//{
//	int a;
//	double len, wei;
//	scanf("%d", &a);
//	getchar();
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%lf %lf", &len, &wei);
//		getchar();
//		double std = (len - 100) * 0.9 * 2;
//		double temp = wei - std;
//		if (fabs(temp) < std * 0.1 ) printf("You are wan mei!\n");
//		else if (fabs(temp) > std * 0.1) printf("You are tai pang le!\n");
//		else printf("You are tai shou le!\n");
//	}
//	return 0;
//}