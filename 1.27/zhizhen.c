#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	char* p[10]={"abcd","cdef"};
//	char*(*p1)[10] = { &p };
//	printf("%s\n", p[1]);
//	printf("%s\n", *p1[0]);
//	return 0;
//}
//int main()
//{
//	int pua[4] = { 1,2,3,4 };
//	int* pi[4] = { pua };
//	printf("%d", (*pi[0]));
//	return 0;
//}
//#define N 10
//void fun(int a[N][N], int n);
//int main()
//{
//    int a[N][N];
//    int i, j, n;
//    scanf("%d", &n);
//    fun(a, n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//            printf("%6d", a[i][j]);
//        printf("\n");
//    }
//    return 0;
//}
//void fun(int a[N][N], int n)
//{
//    int i = 0;
//    for (i=0; i <= n; i++)
//    {
//        for (int p = 0; p <= i; p++)
//        {
//            if (p == 0 || p == i)
//            {
//                a[i][p] = 1;
//            }
//            else
//                a[i][p] = a[i - 1][p] + a[i - 1][p - 1];
//        }
//    }
//}
//void month_day(int year, int yearday, int* pmonth, int* pday);
//
//int main(void)
//{
//	int day, month, year, yearday; /*  定义代表日、月、年和天数的变量*/
//	scanf("%d%d", &year, &yearday);
//	month_day(year, yearday, &month, &day);/* 调用计算月、日函数  */
//	printf("%d %d %d\n", year, month, day);
//	return 0;
//}
//void month_day(int year, int yearday, int* pmonth, int* pday)
//{
//	int true[12] = { 31,60,91,121,152,182,213,244,274,305,335,366 };
//	int false[12] = { 31,59,90,120,151,181,212,243,273,304,334,365 };
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//	{
//		for (int i = 0; i < 12; i++)
//		{
//			if (yearday < true[i])
//			{
//				if (i == 0)
//				{
//					*pmonth = i + 1;
//					*pday = yearday;
//					break;
//				}
//				else {
//					*pmonth = i + 1;
//					*pday = yearday - true[i - 1];
//					break;
//				}
//			}
//		}
//	}
//	else
//	{
//		for (int i = 0; i < 12; i++)
//		{
//			if (yearday < false[i])
//			{
//				if (i == 0)
//				{
//					*pmonth = i + 1;
//					*pday = yearday;
//					break;
//				}
//				else {
//					*pmonth = i + 1;
//					*pday = yearday - false[i - 1];
//					break;
//				}
//			}
//		}
//	}
//}
//run0(int* pmonth, int* pday, int j,int m)
//{
//	*pmonth = j + 1;
//	*pday = m;
//}
//int MonthDays(int year, int month);
//
//int main()
//{
//    int ndays, month, year;
//
//    scanf("%d", &year);
//    for (month = 1; month <= 12; month++) 
//    {
//        ndays = MonthDays(year, month);
//        printf("%d ", ndays);
//    }
//
//    return 0;
//}
//int MonthDays(int year, int month)
//{
//    int true[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//    int false[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//    {
//        return true[month - 1];
//    }
//    else
//        return false[month - 1];
//}
//#define epsilon 1e-8
//
//int RealLe(double x, double y);
//
//int main()
//{
//    double a, b;
//    scanf("%lg%lg", &a, &b);
//    if (RealLe(a, b))
//    {
//        puts("Yes");
//    }
//    else
//    {
//        puts("No");
//    }
//    return 0;
//}
//int RealLe(double x, double y)
//{
//    return (x - y) <= epsilon;
//}
int main()
{
    int n, h, i, j, k, l;
    scanf("%d %d", &n, &h);//总共有几个,实际几个
    if (n > 1000 || n <= 0 || h <= 0 || h > 1000 || h > n) { printf("Input Error"); goto out; }
    getchar();
    int arr[1000];
    for (i = 0; i <= n; i++) {
        arr[i] = i;
    }//数组遍历并且作为判断标准
    int qa[1000];
    for (j = 1; j <= h; j++) {
        scanf("hc_%d", &k);
        qa[j - 1] = k;
        getchar();
    }
    for (j = 0; j <= h; j++) {
        for (int i = j+1;; i++) {
            if (i == h||i==h+1) break;
            if (qa[j] == qa[i]) { printf("Input Error"); goto out; }
        }
    }
    for (j = 1; j <= h; j++) {
        for (l = 1; l <= n; l++)
        {
            if (arr[l] ==qa[j-1])
            {
                arr[l] = 0;
            }//判断是否有数字相等，没有则为原本数字，有为0；
        }
    }//循环h次
    int c;
    for (c = 1; c <= n; c++) {
        if (arr[c] != 0)
        {
            printf("hc_%d\n", arr[c]);
        }
    }
out:
    return 0;
}
//#define epsilon 1e-8
//
//int RealLe(double x, double y);
//
//int main()
//{
//    double a, b;
//    scanf("%lg%lg", &a, &b);
//    if (RealLe(a, b))
//    {
//        puts("Yes");
//    }
//    else
//    {
//        puts("No");
//    }
//    return 0;
//}
//int RealLe(double x, double y)
//{
//    double a = x - y;
//    if (a <= 0)
//        return 1;
//    else if (a > 0)
//        return a < epsilon;
//}