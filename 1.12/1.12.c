#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a, num[9] = { 0 };
//	char *pin[10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//	scanf("%d", &a);
//	getchar();
//	int n=0;
//	int temp = a;
//	int q = a;
//	a = fabs(a);
//	for (int i = 0;; i++)
//	{
//		if (a < 10) { n++; break; }
//		else { a /= 10; n++; }
//	}//计算位数 n为位数
//	int m = n;
//	if(temp<0)
//	temp = -temp;
//	for (int c = pow(10, n-1); c > 0; c /= 10)
//	{
//		num[n-m] = temp / c;
//		temp -= (temp / c) * c;
//		m--;
//	}
//	if (q < 0) printf("fu ");
//	q = fabs(q);
//	for (int i = 0; i < n; i++)
//	{
//		if (i == n - 1) {
//			printf("%s", pin[num[i]]); break;
//		}
//		printf("%s ", pin[num[i]]);
//	}
//	return 0;
//}
//int main()
//{
//	int a, sum = 0;
//	scanf("%d", &a);
//	int uper=a, iner=-1;//上一个跟下一个
//	int n = 0;
//	int temp = 1;
//	while(uper!=iner)//判断循环条件
//	{
//		if(n!=0)
//		uper = iner;
//		sum = 0;
//		while (uper > 0)
//		{
//			sum += uper % 10;
//			uper /= 10;
//		} 
//		uper = sum * 3 + 1;
//		n++;
//		sum = 0;
//		printf("%d:%d\n", n, uper);
//		temp = uper;
//		while (uper > 0)
//		{
//			sum += uper % 10;
//			uper /= 10;
//		}
//		iner = sum * 3 + 1;
//		n++;
//		printf("%d:%d\n", n, iner);
//		uper = temp;
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	double sum = 0;
//	scanf("%d", &a);
//	int i = 0;
//		for(i=1;i<=a;i++)
//		{ 
//			sum += pow(-1, i+1) * (i *10000 / (2 * i - 1))/10000;
//		}
//		printf("%.3lf", sum);
//	return 0;
//}
//int main()
//{
//	int a, b, n=0;
//	scanf("%d %d", &a, &b);
//	int sum = 0;
//	for (int i = a; i < b + 1; i++)
//	{
//		int q = 0;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				q++;
//				break;
//			}
//		}
//		if (q == 0 && i != 1)
//		{
//			n++;
//			sum += i;
//		}
//	}
//	printf("%d %d", n, sum);
//	return 0;
//}