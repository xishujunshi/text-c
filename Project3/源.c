#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////int main()
////{
////	int a;
////	int count = 0;
////	int arr[] = { 0 };
////	scanf("%d", &a);
////	for (int i = 0; i < a; i++)
////	{
////		scanf("%d", &arr[i]);
////	}
////	for (int i = 0; i < a; i++)
////	{
////		for (int j = 0; j < a; j++)
////		{
////			if (i == j)
////			{
////				continue;
////			}
////			else
////			{
////				int m = arr[i] ^ arr[j];
////				if (m == 0)
////					count++;
////			}
////		}
////	}
////	printf("%d", count);
////	return 0;
////}
////int main()
////{
////	int a, b;
////	int arr[1000] = { 0 };
////	int arr2[1000] = { 0 };
////	int temp;
////	int max = 0;
////	int q = 0;
////	scanf("%d %d", &a, &b);
////	for (int i = 0; i < a * 2; i += 2)
////	{
////		scanf("%d %d", &arr[i], &arr[i + 1]);
////	}
////	//转移晚上大的，并滞空
////	for (int i = 0; i < a * 2; i+=2)
////	{
////		if (arr[i] < arr[i + 1])
////		{
////			q++;
////			arr2[i] = arr[i];
////			arr[i] = 0;
////			arr2[i + 1] = arr[i + 1];
////			arr[i + 1] = 0;
////		}
////	}
////	//晚上排序
////	for (int i = 1; i < a * 2; i += 2)
////	{
////		if (i == a * 2 - 1 || i == a * 2 - 2)
////			break;
////		for (int j = i + 2; j < a * 2; j += 2)
////		{
////			if (arr2[i] < arr2[j])
////			{
////				temp = arr2[i];
////				arr2[i] = arr2[j];
////				arr2[j] = temp;
////			}
////		}
////	}
////	//白天排序
////	for (int i = 0; i < a * 2; i += 2)
////	{
////		if (i == a * 2 - 1 || i == a * 2 - 2)
////			break;
////		for (int j = i + 2; j < a * 2; j += 2)
////		{
////			if (arr[i] < arr[j])
////			{
////				temp = arr[i];
////				arr[i] = arr[j];
////				arr[j] = temp;
////			}
////		}
////	}
////	int count = 0;
////	if (q < b)//晚上大的不足
////	{
////		//先把晚上大的取完
////		for (int i = 1; i < q * 2; i += 2)
////		{
////			if (count == q)
////				break;
////			max += arr2[i];
////			count++;
////		}//再取白天大的
////		count = 0;
////		for (int m = 0; m < a * 2; m += 2)
////		{
////			if (count == a - b)
////				break;
////			max += arr[m];
////			count++;
////		}
////		//最后补齐晚上的
////		count = 0;
////		for (int m = (a - b) * 2 + 1; m < a * 2; m += 2)
////		{
////			if (count == b - q)
////				break;
////			max += arr[m];
////			count++;
////		}
////	}
////	else {
////		count = 0;
////		//晚上
////		for (int m = 1; m < a * 2; m += 2)
////		{
////			if (count == b)
////				break;
////			max += arr2[m];
////			count++;
////		}
////		count = 0;
////		//白天 0 2 4 6
////		for (int i = 0; i < a * 2; i += 2)
////		{
////			if (count == a - b)
////				break;
////			max += arr[i];
////			count++;
////		}
////	}
////	printf("%d", max);
////	return 0;
////}
////int main()
////{
////	int a;
////	int count = 0;
////	long arr[1000] = { 0 };
////	scanf("%d", &a);
////	for (int i = 0; i < a; i++)
////	{
////		scanf("%ld", &arr[i]);
////	}
////	for (int i = 0; i < a; i++)
////	{
////		for (int j = 0; j < a; j++)
////		{
////			if (i == j)
////			{
////				continue;
////			}
////			else
////			{
////				int m = arr[i] ^ arr[j];
////				if (m == 0)
////					count++;
////			}
////		}
////	}
////	printf("%d", count);
////	return 0;
////}
//int main()
//{
//    int a, b;
//    int c, d;
//    char arr[(int)1000][(int)1000];
//    scanf("%d %d", &a, &b);
//    for (int i = 0; i < b*2; i++)
//    {
//        scanf("%d %d", &c, &d);
//        c -= 1, d -= 1;
//        arr[c][d] = '*';
//        int count = 0;
//        if (c - 1 < 0) { goto row; }
//        else {
//            if (d < 0)
//                goto col;
//            if (arr[c - 1][d - 1] == '*')
//            {
//                printf("NO\n");
//                goto out;
//            }
//            else
//                count++;
//        }
//    col:
//        if (arr[c - 1][d] == '*')
//        {
//            printf("NO\n");
//            goto out;
//        }
//        else
//            count++;
//        if (arr[c - 1][d + 1] == '*')
//        {
//            printf("NO\n");
//            goto out;
//        }
//        else
//            count++;
//    row:
//        if (d < 0)
//            goto col1;
//        if (arr[c][d - 1] == '*')
//        {
//            printf("NO\n");
//            goto out;
//        }
//        else
//            count++;
//    col1:
//        if (arr[c][d + 1] == '*')
//        {
//            printf("NO\n");
//            goto out;
//        }
//        else
//            count++;
//        if (arr[c + 1][d - 1] == '*')
//        {
//            printf("NO\n");
//            goto out;
//        }
//        else
//            count++;
//        if (arr[c + 1][d] == '*')
//        {
//            printf("NO\n");
//            goto out;
//        }
//        else
//            count++;
//        if (arr[c + 1][d + 1] == '*')
//        {
//            printf("NO\n");
//            goto out;
//        }
//        else
//            count++;
//        if (count > 3)
//        {
//            printf("YES\n");
//        }
//        out:
//    }
//    return 0;
//}
 main(char* A, char* B) {
     A = gets();
     B = gets();
    int num = 0;
    if (strlen(A) != strlen(B))
    {
        printf("G");
        return 0;
    }
    for (int i = 0; i < strlen(B);)
    {
        for (int j = 0; j < strlen(B); j++)
        {
            j += num;
            if (num > 0 && B + j != A + i)
            {
                printf("G");
                return 0;
            }
            if (B + j == A + i)
            {
                num++;
                i += num;
                break;
            }
        }
    }
    printf("GG");
    return 0;
}