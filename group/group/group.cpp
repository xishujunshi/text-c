#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// ����ṹ��
struct {
    int** gp; // ͼ
    int* vis; // �ж��Ƿ��ȡ
    int* pre; // �洢��һ���ڵ�
    int* dis; // �洢���·��
} group;

// ����
void create(int dian, int bian)
{
    // ��̬�����ڴ�� gp ���飬����ʼ������Ԫ��Ϊ 100
    group.gp = (int**)malloc(dian * sizeof(int*));
    for (int i = 0; i < dian; i++)
    {
        group.gp[i] = (int*)malloc(dian * sizeof(int));
        for (int j = 0; j < dian; j++)
        {
            group.gp[i][j] = 100;
        }
    }

    int row, col, length;
    printf("������ÿ���߶�Ӧ���������㼰Ȩֵ��\n");
    for (int i = 1; i <= bian; i++)
    {
        printf("������� %d ���ߣ�", i);
        scanf("%d %d %d", &row, &col, &length);
        group.gp[row][col] = length;
        group.gp[col][row] = length;
    }
}

// ������ȡ
void read(int dian)
{
    for (int i = 0; i < dian; i++)
    {
        for (int j = 0; j < dian; j++)
        {
            if (group.gp[i][j] == 100)
                printf("0 ");
            else
            printf("%d ", group.gp[i][j]);
        }
        printf("\n");
    }
}

// �Ͻ�˹�����㷨
void shortest(int ori, int dian)
{
    group.vis[ori] = 1;
    for (int i = 0; i < dian; i++)
    {
        // �����·�������ҽ����滻
        if (group.dis[ori] + group.gp[ori][i] < group.dis[i])
        {
            group.dis[i] = group.dis[ori] + group.gp[ori][i];
            group.pre[i] = ori; // �ҵ��Ļ����洢ǰ���ڵ�
        }
    }
    // ����Сֵ���±�
    int flag = ori;
    int min = 100;
    for (int i = 0; i < dian; i++)
    {
        if (min > group.gp[ori][i] && group.vis[i] == 0)
        {
            flag = i;
            min = group.gp[ori][i];
        }
    }
    if (flag != ori)
        shortest(flag, dian);
    for (int i = 0; i < dian; i++)
    {
        if (group.vis[i] == 0 && group.gp[ori][i] < 100)
            shortest(i, dian);
    }
}

// ���·��
void roa(int i)
{
    if (group.pre[i] != -1)
    {
        roa(group.pre[i]);
        printf("%d  ", group.pre[i]);
    }
    else
    {
        return;
    }
}

// ���·��
void road(int ori, int dian)
{
    for (int i = 0; i < dian; i++)
    {
        if (i == ori)
            continue;
        printf("%d��%d�����·������Ϊ��%d  ·��Ϊ��", ori, i, group.dis[i]);
        roa(i);
        printf("%d", i);
        printf("\n");
    }
}

// ������
int main()
{
    int dian, bian;
    printf("�����붥������ͱߵ�������");
    scanf("%d %d", &dian, &bian);

    // ����
    create(dian, bian);

    // ������ȡ
    read(dian);

    // ��ʼ��
    group.vis = (int*)malloc(dian * sizeof(int)); // ��ʼ���ѷ������飬0Ϊδ����
    memset(group.vis, 0, sizeof(int) * dian);
    group.dis = (int*)malloc(dian * sizeof(int)); // ��ʼ�����·�����飬Ĭ�����Ϊ100
    memset(group.dis, 100, sizeof(int) * dian);
    group.pre = (int*)malloc(dian * sizeof(int)); // �洢ǰһ����㣬Ĭ��Ϊ-1��-1Ϊ��ǰ���ڵ�
    memset(group.pre, -1, sizeof(int) * dian);

    // ����������������·��
    int ori = 0;
    printf("��������㣡����\n");
    scanf("%d", &ori);
    //�������������dis����
    for (int i = 0; i < dian; i++)
    {
        group.dis[i] = group.gp[ori][i];
        if (group.gp[ori][i] != 100)
            group.pre[i] = ori;
    }
    group.dis[ori] = 0;

    // �Ͻ�˹�����㷨
    shortest(ori, dian);

    // ������·��
    road(ori, dian);

    return 0;
}