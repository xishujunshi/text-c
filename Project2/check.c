#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
int m, n;
//char check(char arr[15][15], int x, int y, int a)
//{//��
//	char ch;
//	if (a == 1) ch = '#';
//	else ch = '*';
//	int count = 0, i, j;//��count��ͳ�Ƽ�������һ��
//	//��
//	for (i = 0; i < 15; i++) {
//		if (arr[x - 1][i] == ch) {
//			count++;
//			if (count == 5) return 'o';
//			else continue;
//		}
//		else count= 0;
//	}
//	//��
//	count = 0;//��������
//	for (i = 0; i < 15; i++) {
//		if (arr[i][y - 1] == ch)
//		{
//			count++;
//			if (count == 5) return 'o';
//			else continue;
//		}
//		else count=0;
//	}
//	//������(�ĸ����䵥���ж�)
//	count = 0;
//	//�����ĸ�����
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
//	//�����Ͻ�
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
//	// �����½ǣ�x decrease��y increase
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
//	//������
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
//	//�����Ͻ�,x��С��y����
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
//	//�����½�,x����y��С
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
