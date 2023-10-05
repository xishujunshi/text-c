#include<stdio.h>
#include<math.h>
////int main()
////{
////	int arr[] = { 1,2,3,2,7,8,4,1,2,3,4,5,1,2,2,4 };
////	int min = arr[0], max = arr[0];
////	int m = 10000;
////	//1统计出现次数  2统计一共几个数
////	int arr1[10000], r[10000];
////
////	memset(arr1, 0, sizeof(arr1));
////
////	//找出出现次数
////	for (int i = 0; i < sizeof(arr) / 4; i++)
////		++arr1[arr[i]];
////
////	//前缀和
////	for (int i = 2; i < 10000; i++)
////		arr1[i] += arr1[i - 1];
////
////	//填充
////	for (int i = sizeof(arr) / 4-1; i; i--)
////	{
////		r[i] = arr1[arr[i]]--;
////	}
////	for (int i = 1; i < sizeof(arr) / 4; i++)
////		printf("%d", r[i]);
////
////
////	return 0;
////}*/
////struct colour {
////	char name[10];
////	struct colour* p;
////};
////int main()
////{
////	struct colour A = { "red",NULL };
////	struct colour B = { "blue",NULL };
////	struct colour C = { "grey",NULL };
////	A.p = &B;
////	B.p = &C;
////	struct colour* pc = &A;
////	for (; ; )
////	{
////		for (int i = 0;; i++)
////		{
////			if (pc->name[i] != NULL)
////				printf("%c", pc->name[i]);
////			else
////				break;
////		}
////		pc = pc->p;
////		if (pc == NULL)
////			break;
////	}
////	return 0;
////}*/
////int main()
////{
////	printf("printf(\"Hello world!\\n\")\;\ncout << \"Hello world!\" << endl;\n");
////	return 0;
////}*/
////int main()
////{
////	int a, b, c;
////	scanf_s("%d\n%d\n%d", &a, &b, &c);
////	if (a > b)
////	{
////		int temp = a;
////		a = b;
////		b = temp;
////	}
////	if (b > c) {
////		int temp = b;
////		b = c;
////		c = temp;
////	}
////	if (c > a)
////	{
////		int temp = c;
////		c = a;
////		a = temp;
////	}
////	if (a == 1)
////	{
////		if (b == 1)
////		{
////			if (c == 1)
////				printf("3");
////			else
////				printf("%d", 2 * c);
////		}
////		else if (c == 1)
////			printf("%d", 2 * b);
////		else
////			printf("%d", (b > c ? c + 1 : b + 1) * (b > c ? b : c));
////	}
////	else
////		printf("%d", a * b * c);
////	return 0;
////}*/
////main()
////{
////	char a[10];
////	for (int i = 0; i < 10; i++)
////	{
////		scanf_s("%c", &a[i]);
////	}
////	if (a[5] == 49 && a[6] > 48)
////		printf("QAQ");
////	else if ((a[5] == 48 && a[6] == 57)&&(a[8] == 51 || (a[8] == 50 && a[9] == 57)))
////		printf("QAQ");
////	else
////		printf("No. It's not too late.");
////}*/
////main()
////{
////	int a[10];
////	int c = 0;
////	for (int i = 0; i < 13; i++)
////	{
////		if (i == 1 || i == 5 || i == 11)
////		{
////			getchar();
////			c++;
////		}
////		else
////			scanf_s("%1d", &a[i - c]);
////	}
////	int b = 0;
////	for (int i = 0; i < 9; i++)
////	{
////		b += a[i] * (i + 1);
////	}
////	if (b % 11 == a[9])
////		printf("Right");
////	else
////	{
////		a[9] = b % 11;
////		for (int i = 0; i < 9; i++)
////		{
////			if (i == 1 || i == 4 || i == 11)
////			{
////				printf("-%d", a[i]);
////			}
////			else
////				printf("%d", a[i]);
////		}
////	}
////}
//main()
//{
//    long int a;
//    int b;
//    int c = 0;
//    scanf_s("%ld %d", &a, &b);
//    for (long int i = 1; i <=a; i++)
//    {
//        if (i < 10 && b == i)
//            c++;
//        if (i > 9)
//        {
//            c += check(i, b);
//        }
//    }
//    printf("%d", c);
//}
//int check(a, b)
//{
//    int c = 0;
//    while (a > 9)
//    {
//        if (a % 10 == b)
//            c++;
//        a /= 10;
//    }
//    if (a == b)
//        c++;
//    return c;
//}
//double check(int c[1000], double a, int b)
//{
//    double m = 0;
//    for (int i = 0; i < b; i++)
//    {
//        double n = 0;
//        n = c[i] - a;
//        m += n * n;
//    }
//    return 1.0*m / b;
//}
//main()
//{
//    int a;
//    int b = 0, c[1000];
//    int sum = 0;
//
//    scanf_s("%d", &a);
//    for (int i = 0; i < a; i++)
//    {
//        sum = 0;
//        int num = 0;
//        scanf_s("%d", &b);
//        for (int j = 0; j < b; j++)
//        {
//            scanf_s("%d", &c[j]);
//            sum += c[j];
//        }
//        //排序
//        bul(c, b);
//        double e = 0;
//        e = 1.0 * sum / b;
//        printf("%d ", c[b - 1] - c[0]);
//        double m = check(c, e, b);
//        printf("%.3f\n", m);
//    }
//}
//bul(int c[1000], int a)
//{
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = i + 1; j < a; j++)
//        {
//            if (c[i] > c[j])
//            {
//                int temp = c[i];
//                c[i] = c[j];
//                c[j] = temp;
//            }
//        }
//    }
//}
//void bul(int c[], int m)
//{
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = i + 1; j < m; j++)
//        {
//            if (c[i] > c[j])
//            {
//                int temp = c[i];
//                c[i] = c[j];
//                c[j] = temp;
//            }
//        }
//    }
//}
//main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int c[200];
//    int m, n;
//    for (int i = 0; i < b; i += 2)
//    {
//        scanf("%d %d", &c[i], &c[i + 1]);
//    }
//    bul(c, b * 2);
//    printf("%d", a - 1 - c[b * 2 - 1] + c[0]);
//}
main()
{
    int a, b;
    long long int sum = 1;
    scanf_s("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < 4; i++) {
            scanf_s("%d", &b);
            sum *= b;
        }
    printf("%ld\n", sum % 1000000007);
    }
}