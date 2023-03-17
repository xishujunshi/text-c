//#define _CRT_SECURE_NO_WARNINGS
//
////#include <stdio.h>
////char arr[10][5];
////void shuchu(int a)
////{
////    for (int i = 0; i < a; i++)
////    {
////        for (int j = 0; j < 5; j++)
////        {
////            if (j == 4)
////                printf("%c", arr[i][j]);
////            else
////                printf("%c", arr[i][j]);
////        }
////    }
////}
////int main()
////{
////    int a;
////    for (int m = 0; m < 3; m++)
////    {
////        scanf("%d", &a);
////        getchar();
////        for (int i = 0; i < a; i++)
////        {
////            for (int j = 0; j < 5; j++)
////            {
////                scanf("%c", &arr[i][j]);
////            }
////            getchar();
////        }
////        for (int i = 0; i < a; i++)
////        {
////            if (arr[i][0] == arr[i][1] && arr[i][0] == 'O')
////            {
////                arr[i][0] = '+';
////                arr[i][1] = '+';
////                printf("YES");
////                shuchu(a);
////                break;
////            }
////            else if (arr[i][3] == arr[i][4] && arr[i][3] == 'O')
////            {
////                arr[i][3] = '+';
////                arr[i][4] = '+';
////                printf("YES");
////                shuchu(a);
////                break;
////            }
////            else if (i == a - 1)
////            {
////                printf("NO");
////            }
////        }
////    }
////    return 0;
////}
//#include <stdio.h>
//char arr[5][5];
//int main()
//{
//    int a, b;
//    scanf("%d", &a);
//    getchar();
//    for (int i = 0; i < a; i++)
//    {
//        scanf("%d", &b);
//        getchar();
//        for (int j = 0; j < b; j++)
//        {
//            for (int m = 0; m < b; m++)
//            {
//                scanf("%c", &arr[j][m]);
//            }
//            getchar();
//        }//录入
//
//        for (int i = 0; i < b; i++)
//        {
//            if (b - i < 5) break;
//            else
//                for (int j = 0; j < b; j++)
//                {//行
//                    if (arr[i][j] == arr[i][j + 1] || arr[i][j] == arr[i][j + 2] || arr[i][j] == arr[i][j + 3] || arr[i][j] == arr[i][j + 4])
//                    {
//                        if ('w' == arr[i][j])
//                        {
//                            printf("FYMNB\n");
//                            break;
//                        }
//                        else if ('b' == arr[i][j])
//                        {
//                            printf("DDNB\n");
//                            i++;
//                            goto out;
//                        }
//                    }//列
//                    if (arr[j + 0][i] == arr[j + 1][i] || arr[j + 0][i] == arr[j + 2][i] || arr[j + 0][i] == arr[j + 3][i] || arr[j + 0][i] == arr[j + 4][i])
//                    {
//                        if ('w' == arr[j + 0][i])
//                        {
//                            printf("FYMNB\n");
//                            i++;
//                            goto out;
//                        }
//                        else if ('b' == arr[j + 0][i])
//                        {
//                            printf("DDNB\n");
//                            i++;
//                            goto out;
//                        }
//                    }
//                    if (arr[i][j] == arr[i + 1][j + 1] || arr[i][j] == arr[i + 2][j + 2] || arr[i][j] == arr[i + 3][j + 3] || arr[i][j] == arr[i + 4][j + 4])
//                    {
//                        if ('w' == arr[i][j])
//                        {
//                            printf("FYMNB\n");
//                            i++;
//                            goto out;
//                        }
//                        else if ('b' == arr[i][j])
//                        {
//                            printf("DDNB\n");
//                            i++;
//                            goto out;
//                        }
//                    }//右下
//                    if (arr[i][j] == arr[i - 1][j + 1] || arr[i][j] == arr[i - 2][j + 2] || arr[i][j] == arr[i - 3][j + 3] || arr[i][j] == arr[i - 4][j + 4])
//                    {
//                        if ('w' == arr[i][j])
//                        {
//                            printf("FYMNB\n");
//                            i++;
//                            goto out;
//                        }
//                        else if ('b' == arr[i][j])
//                        {
//                            printf("DDNB\n");
//                            i++;
//                            goto out;
//                        }
//                    }
//                }
//        }
//
//    }
//    printf("PINGJU\n");
//    return 0;
//}#include <stdio.h>
//#include <stdio.h>
//void solve()
//{
//int i = 0;
//char arr[1000]; 
//    while (arr[i]=getchar(), arr[i]!= '\n')
//    {
//        i++;
//    }
//    for (int j = i; j >= 0; j--)
//    {
//        if (arr[j] != '\n')
//        {
//            printf("%c", arr[j]);
//        }
//    }
//}
//
//int main()
//{
//    solve();
//    return 0;
//}
#include <stdio.h>
//char* solve(char* str)
//{
//    char arr[1000];
//    int m = strlen(str);
//    for (int j = 0; j < m - 1; j++)
//    {
//        arr[j] = str[j];
//    }
//    int i = 0;
//    for (int j = m - 1; j >= 0; j--)
//    {
//        str[i] = arr[j];
//        i++;
//    }
//    return str;
//}
//#include <stdio.h>
//int main()
//{
//    int prices[5] ;
//    for (int i = 0; i < 5; i++)
//    {
//        scanf_s("%d", (prices + i));
//    }
//    int a = 5;
//    int m = maxProfit(* prices,  a);
//    printf("%d", m);
//    return 0;
//}
//int maxProfit(int* prices, int pricesLen) {
//    int a = -1, b;
//    int max = 0;;
//    for (int j = 0; j < pricesLen; j++)
//    {
//        if (j == pricesLen - 1||j==pricesLen-2)
//            break;
//        if (*(prices + j) < *(prices + 1 + j))
//        {
//            a = j, b = *(prices + j);
//        }
//    }
//    if (a == pricesLen) return 0;
//    for (int j = a + 1; j < pricesLen; a++)
//    {
//        if (*(prices + j) > b && max < *(prices + j) - b)
//            max = *(prices + j) - b;
//    }
//    return max;
//}
#include<stdio.h>
#include<math.h>

int panduan(int x, int y)
{
    int a = 0, b = 0;
    while (x > 10)
    {
        x /= 10;
        a++;
    }
    while (y > 10)
    {
        y /= 10;
        b++;
    }
    if (a == b) return 1;
    else return 0;
}
void jisuan(int x, int y)
{
    int a = 0, b = 0;
    int len1 = 0;
    int temp = x;
    int ab[10000];
    while (x >= 10)
    {
        x /= 10;
        len1++;
    }
    len1++;
    int m = len1;
    do {
        int u = temp / pow(10, len1 - 1);
        int v = y / pow(10, len1 - 1);
        int p = u*v;
        ab[a] = p;
        u = temp / pow(10, len1 - 1);
        v = pow(10, len1 - 1);
        int j = u * v;
        temp = temp -j ;
        u = y / pow(10, len1 - 1);
        y = y - u * v;
        len1--;
        a++;
    } while (temp > 0);
    for (int i = 0; i < m; i++)
    {
        printf("%d", ab[i]);
        if (i == m - 1)
            printf("\n");
    }
}
int main()
{
    int a;
    long b, c;
    scanf_s("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf_s("%ld %ld", &b, &c);
        getchar();
        int m = panduan(b, c);
        if (m == 0) printf("-1");
        else jisuan(b, c);
    }
    return 0;
}