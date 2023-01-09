#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int d = a % 100;//计算分钟
//    if (b >= 60)//判断是否可以直接相加
//    {
//
//        int c = b / 60;
//        c *= 100;
//        a += c;//计算小时
//        if ((d + b % 60) > 60)//如果剩下的分钟也能凑够一小时
//        {
//            a = a + (d + b % 60) / 60 * 100;
//            printf("%d", a / 100 * 100 + (d + b) % 60);
//        }
//        else
//            printf("%d", a + b % 60);
//    }
//    else if (d + b < 60)
//    {
//        printf("%d", a + b);
//    }
//    else
//    {
//        printf("%d", (d + b) / 60 * 100 + a / 100 * 100 + (d + b) % 60);
//    };
//    return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c = a % 100;//计算初始时间的分钟数
//	if (b > 0)
//	{
//		if (b+c < 60&&a/100==0)
//		{
//				printf("%03d", c + b);
//		}
//		else if (b+c<60&&a/100>0)
//		{
//			printf("%03d", a + b);
//		}
//		else if (b + c == 60)
//		{
//			printf("%d", (a / 100 + 1) * 100);
//		}
//		else
//		{
//			int q = (b + c) / 60;
//			printf("%d", (a / 100 + q) * 100 + (b + c) % 60);
//		}
//	}
//	else
//	{
//		int q = fabs((c + b) / 60);
//		if (c + b > 0)
//		{
//			printf("%03d", a + b);
//		}
//		else if(c + b % (-60)==0)
//		{
//			printf("%03d", (a / 100 - q) * 100);
//		}
//		else
//		{
//			printf("%03d", (a / 100 -1-q) * 100 + (c + b)%60+60);
//		}
//	}
//	return 0;
//}
//change(int a)
//{
//	int c,i;
//	for (int i = 1;; i++)
//	{
//		if (a / pow(10, i) == 0)
//			break;
//	}
//	while (a > 0)
//	{
//		c = a / pow(10, i - 1)%2;
//	}
//}
//int main()
//{
//	int a,b;
//	scanf("%d", &a);
//	b = change(a);
//	return 0;
//}
int main()
{
	int a, b,sum=0;
	char c;
	scanf("%d", &a);
	sum = a;
	do {
		scanf("%c", &c);
		if (c == '=')
		{
			break;
		}
		scanf("%d", &b);
		if (c == '/' && b == 0)
		{
			printf("ERROR!");
			break;
		}
		if (c == '+')
		{
			sum += b;
		}
		if (c == '-')
		{
			sum -= b;
		}
		if (c == '*')
		{
			sum *= b;
		}
		if (c == '/')
		{
			sum /= b;
		}
	} while (1);
	printf("%d", sum);
	return 0;
}