#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 定义结构体
struct {
    int** gp; // 图
    int* vis; // 判断是否读取
    int* pre; // 存储上一个节点
    int* dis; // 存储最短路径
} group;

// 创建
void create(int dian, int bian)
{
    // 动态分配内存给 gp 数组，并初始化所有元素为 100
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
    printf("请输入每条边对应的两个顶点及权值！\n");
    for (int i = 1; i <= bian; i++)
    {
        printf("请输入第 %d 条边：", i);
        scanf("%d %d %d", &row, &col, &length);
        group.gp[row][col] = length;
        group.gp[col][row] = length;
    }
}

// 遍历读取
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

// 迪杰斯特拉算法
void shortest(int ori, int dian)
{
    group.vis[ori] = 1;
    for (int i = 0; i < dian; i++)
    {
        // 找最短路径，并且进行替换
        if (group.dis[ori] + group.gp[ori][i] < group.dis[i])
        {
            group.dis[i] = group.dis[ori] + group.gp[ori][i];
            group.pre[i] = ori; // 找到的话，存储前驱节点
        }
    }
    // 找最小值的下标
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

// 输出路径
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

// 最短路径
void road(int ori, int dian)
{
    for (int i = 0; i < dian; i++)
    {
        if (i == ori)
            continue;
        printf("%d到%d的最短路径长度为：%d  路径为：", ori, i, group.dis[i]);
        roa(i);
        printf("%d", i);
        printf("\n");
    }
}

// 主函数
int main()
{
    int dian, bian;
    printf("请输入顶点个数和边的条数：");
    scanf("%d %d", &dian, &bian);

    // 创建
    create(dian, bian);

    // 遍历读取
    read(dian);

    // 初始化
    group.vis = (int*)malloc(dian * sizeof(int)); // 初始化已访问数组，0为未访问
    memset(group.vis, 0, sizeof(int) * dian);
    group.dis = (int*)malloc(dian * sizeof(int)); // 初始化最短路径数组，默认最大为100
    memset(group.dis, 100, sizeof(int) * dian);
    group.pre = (int*)malloc(dian * sizeof(int)); // 存储前一个结点，默认为-1，-1为无前驱节点
    memset(group.pre, -1, sizeof(int) * dian);

    // 输入起点来计算最短路径
    int ori = 0;
    printf("请输入起点！！！\n");
    scanf("%d", &ori);
    //根据起点来更新dis数组
    for (int i = 0; i < dian; i++)
    {
        group.dis[i] = group.gp[ori][i];
        if (group.gp[ori][i] != 100)
            group.pre[i] = ori;
    }
    group.dis[ori] = 0;

    // 迪杰斯特拉算法
    shortest(ori, dian);

    // 输出最短路径
    road(ori, dian);

    return 0;
}