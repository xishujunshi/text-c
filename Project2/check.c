#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int m, n;
//char check(char arr[15][15], int x, int y, int a)
//{//行
//	char ch;
//	if (a == 1) ch = '#';
//	else ch = '*';
//	int count = 0, i, j;//用count来统计几个连在一起
//	//列
//	for (i = 0; i < 15; i++) {
//		if (arr[x - 1][i] == ch) {
//			count++;
//			if (count == 5) return 'o';
//			else continue;
//		}
//		else count= 0;
//	}
//	//行
//	count = 0;//计数归零
//	for (i = 0; i < 15; i++) {
//		if (arr[i][y - 1] == ch)
//		{
//			count++;
//			if (count == 5) return 'o';
//			else continue;
//		}
//		else count=0;
//	}
//	//往右下(四个角落单独判断)
//	count = 0;
//	//不在四个角落
//	if (x >= 5 || y >= 5 || x <= 11 || y <= 11)
//	{
//		for (int i = x - 5; i < x + 5; i++)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	//在左上角
//	else if (x < 5 && y < 5)
//	{
//		for (int i = x; i < x + 5; i++)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	// 在右下角，x decrease，y increase
//	else if (x > 11 && y < 5)
//	{
//		for (int i = x - 5; i < x; i++)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	//往左下
//	count = 0;
//	if (x >= 5 || y >= 5 || x <= 11 || y <= 11)
//	{
//		for (int i = x + 5; i > x - 5; i--)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	//在右上角,x减小，y增大
//	else if (x > 11 && y < 5)
//	{
//		for (int i = x; i > x - 5; i--)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	//在左下角,x增大，y减小
//	else if (x < 5 && y > 11)
//	{
//		for (int i = x; i < x + 5; i++)
//		{
//			for (int j = y + (i - x); ; )
//			{
//				if (arr[i][j] == ch)
//				{
//					count++;
//					if (count == 5) return 'o';
//					else break;
//				}
//				else
//				{
//					count = 0;
//					break;
//				}
//			}
//		}
//	}
//	return 'p';
//}
