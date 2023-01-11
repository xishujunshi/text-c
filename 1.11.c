#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a, b;
//	int min=1;
//	scanf("%d %d", &a, &b);
//	//getchar();
//	int temp;
//	int d = a * b;
//		while (a % b != 0)
//		{
//			temp = a % b;
//			a = b;
//			b = temp;
//		}
//	
//	printf("%d %d", b, d/b);
//	/*while (a % 2 == 0 && b % 2 == 0)
//	{
//		min *= 2;
//		a /= 2;
//		b /= 2;
//	}
//	min = min * a * b;
//	printf("%d", min);*/
//	return 0;
//}
//int main()
//{
//	int a, n=4;
//	int j=1, k=2;
//	int fib = j + k;
//	scanf("%d", &a);
//	if (a <= 1)
//		printf("2");
//	if (a == 2) printf("3");
//	if (a > 2)
//	{
//		while (fib < a)
//		{
//			int temp = fib;
//			fib += k;
//			j = k;
//			k = temp;
//			n++;
//		}
//		printf("%d", n);
//	}
//	return 0;
//}
int main()
{
	int a, b[] = { 0 };
	scanf("%d", &a);
	getchar();
	if (a < 0)
		printf("fu");
	for (int i = 0;; i++)
	{
		if (a < 10)
		{
			switch (a)
			{
			case 1:printf("yi"); break;
			case 2:printf("er"); break;
			case 3:printf("san"); break;
			case 4:printf("si"); break;
			case 5:printf("wu"); break;
			case 6:printf("liu"); break;
			case 7:printf("qi"); break;
			case 8:printf("ba"); break;
			case 9:printf("jiu"); break;
			}
			break;
		}

	}
	
	return 0;
}