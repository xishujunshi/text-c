#include <stdio.h>
#include <math.h>
//int main()
//{
//    int a;
//    int b, c;
//    scanf_s("%d", &a);
//    for (int i = 0; i < a; i++)
//    {
//        scanf_s("%d %d", &b, &c);
//        //bºÍcÏàµÈ
//        if (b == c)
//        {
//            if ((b + c) % 3 == 0)
//            {
//                printf("YES");
//            }
//            else
//            {
//                printf("NO");
//            }
//        }
//        else
//        {
//            int num1 = 1, num2 = 1;
//            while (b > 9)
//            {
//                b /= 10;
//                num1++;
//            };
//            while (c > 9)
//            {
//                c /= 10;
//                num2++;
//            };
//            if (num1 == num2)
//            {
//                long temp = b * pow(10, num1 * 2) + (b + 1) * pow(10, num1) + c;
//
//                if (temp % 3 == 0)
//                    printf("YES\n");
//                else printf("NO\n");
//            }
//            else
//            {
//                long temp = num1 * pow(10, num1 * 2 + 1) + (num1 + 1) * pow(10, num1 + 1) + num2;
//                if (temp % 3 == 0)
//                    printf("YES\n");
//                else printf("NO\n");
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b, c, d;
//    int arr[100000];
//    int num = 0;
//    scanf_s("%d %d", &a, &b);
//    for (int i = 0; i < a; i++)
//    {
//        arr[i] = i + 1;
//    }
//    for (int i = 0; i < b; i++)
//    {
//        scanf_s("%d %d", &c, &d);
//        if (c == 1)
//        {
//            arr[d - 1] = 0;
//        }
//        else
//        {
//            if (d == 1)
//                printf("0\n");
//            else
//            {
//                for (int j = 0; j < d-1; j++)
//                {
//                    if (arr[j] != 0)
//                        num = j;
//                }
//                if (num == 0)
//                    printf("0\n");
//                else
//                    printf("%d\n", arr[num]);
//            }
//        }
//    }
//    return 0;
//}
//typedef struct student
//{
//	int num;
//	struct student* pp;
//}st2;
//int main()
//{
//	struct student st1 = { 2022,NULL };
//	struct student st2 = { 2023,NULL };
//	struct student st3 = { 2024,NULL };
//	struct student st4 = { 2025,NULL };
//	struct student st5 = { 2026,NULL };
//	struct student st6 = { 2027,NULL };
//	struct student st7 = { 2028,NULL };
//	struct student st8 = { 2029,NULL };
//	st1.pp = &st2;
//	st2.pp = &st3;
//	struct student* p = &st1;
//	while (p != NULL)
//	{
//		printf("%d\n", p->num);
//		p = p->pp;
//	}
//}
typedef struct book {
	int price;
	char name[100];
}bok;

main()
{
	struct book A = {100,"abcd" };
	bok B = { 20,"abcde" };
	printf("%d", A.price);
}