//#include<stdio.h>
////�������ϴ��µ����꣬x y
//int panduan(char arr[15][15], int x, int y)
//{
//	int count = 0; //���㼸����������һ��
//	int q = x, p = y;
//	int row = 0, col = 0, na = 0, pie = 0;//����ѡ�����ַ�ʽ
//	//��
//	for (int i = x - 4; i < x + 4; i++)
//	{
//		if (i < 0) { i = -1; continue; }
//		else if (i > 15) break;
//		else
//		{
//			if (arr[i - 1][y - 1] == '*')
//			{
//				count++;
//				q = i;
//				p = y;
//				col = count;
//			}
//			else count = 0;
//		}
//	}
//	//��
//	count = 0;
//	for (int j = x - 4; j < x + 4; j++)
//	{
//		if (j < 0) { j = -1; continue; }
//		else if (j > 15) break;
//		else
//		{
//			if (arr[x - 1][j - 1] == '*')
//			{
//				count++;
//				row = count;
//				if(col<row)
//				{
//					q = x;
//					p = j;
//				}
//			}
//			else count = 0;
//		}
//	}
//	//������
//	count = 0;
//	for (int i = x - 4; i < x + 4; i++)
//	{
//		if (i < 0) { i = -1; continue; }
//		else if (i > 15) break;
//		else
//			for (int j = y - 4; j < y - 4; j++)
//			{
//				if (j < 0) { j = 0; continue; }
//				else if (j > 15) break;
//				else
//				{
//					if (arr[x - 1][j - 1] == '*')
//					{
//						count++;
//						na = count;
//						if (count > row)
//						{
//							q = x;
//							p = j;
//						}
//					}
//					else count = 0;
//				}
//			}
//	}
//	//������
//	count = 0;
//	for (int i = x + 4; i > x - 4; i--)
//	{
//		if (i > 15) { i = 15; continue; }
//		else if (i < 0) break;
//		else
//			for (int j = y - 4; j < y - 4; j++)
//			{
//				if (j < 0) { j = 0; continue; }
//				else if (j > 15) break;
//				else
//				{
//					if (arr[x - 1][j - 1] == '*')
//					{
//						count++;
//						pie = count;
//						if (count > na)
//						{
//							q = x;
//							p = j;
//						}
//					}
//					else count = 0;
//				}
//			}
//	}
//	arr[q][p] = '*';
//	return q*100+p; 
//}