//#include <stdio.h>
//int quanzhong(char arr[15][15])
//{
//	int max=-1000000, min=100000;
//	int row = 0, col = 0, pie = 0, na = 0;
//	//��������һ��,��������б��
//	int i = 0;
//	int xq, xp;//��¼���ֵ����
//	int nq, np;//��¼��Сֵ����
//	for (i = 0; i<15; i ++)//������
//	{
//		for (int j = 0; j < 15; j++)//������
//		{   //����
//			for (int m = i - 4; m < i + 4; m++)
//			{
//				if (m == i)continue;
//				if (m < 0) { m = -1; continue; }
//				else if (m > 15) break;
//				if (arr[m][j] == '*') col++;
//				else if (arr[m][j] == '#') col--;
//			}
//			//����
//			for (int m = j - 4; m < j + 4; m++)
//			{
//				if (m == j) continue;
//				if (m < 0) { m = -1; continue; }
//				else if (m > 15) break;
//				if (arr[i][m] == '*') row++;
//				else if (arr[i][m] == '#') row--;
//			}
//			//na
//			for (int m = i - 4; m < i + 4; m++)
//			{
//				if (m == i) continue;
//				if (m < 0) { m = -1; continue; }
//				else if (m > 15) break;
//				else
//					for (int n = j-(i-m); ; )
//					{
//						if (arr[m][n] == '*') {
//							na++; break;
//						}
//						else if (arr[m][n] == '#') {
//							na--; break;
//						}
//						else break;
//					}
//			}
//			//pie
//			for (int m = i + 4; m > i - 4; m--)
//			{
//				if (m == i) continue;
//				if (m > 15) { m = 15; continue; }
//				else if (m < 0) break;
//				else
//					for (int n = j - (i - m); ; )
//					{
//						if (arr[m][n] == '*') {
//							pie++; break;
//						}
//						else if (arr[m][n] == '#') {
//							pie--; break;
//						}
//						else break;
//					}
//			}
//			int temp = row + col + pie + na;
//			if (temp >= max)
//			{
//				max = temp;
//				if(arr[i][j]=='#'){
//				xq = i;
//				xp = j;}
//			}
//			else if (temp <= min) 
//			{
//				min = temp;
//				if (arr[i][j] == '#') {
//					nq = i;
//					np = j;
//				}
//			}
//		}
//	}
//	if (max > min) {
//		arr[xq][xp] = '*'; return xq * 100 + xp;
//	}
//	else{
//		arr[nq][np] = '*'; return nq * 100 + np;
//	}
//}