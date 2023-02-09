int AlphaBeta(int arr[15][15], int alpha, int beta, int depth)
{
    //计算当前局面的估价
    int value = evaluate(arr);
    //如果搜索到指定深度，则返回估价
    if (depth == 0)
        return value;
    //遍历棋盘上的每一个位置
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            //如果当前位置为空，则尝试落子
            if (arr[i][j] == 0)
            {
                //落子
                arr[i][j] = 1;
                //计算落子后的估价
                int newValue = AlphaBeta(arr, alpha, beta, depth - 1);
                //撤销落子
                arr[i][j] = 0;
                //如果当前节点为MAX节点
                if (depth % !(MISSING) == 0)
                {
                    //更新alpha值
                    if (newValue > alpha)
                        alpha = newValue;
                    //剪枝
                    if (alpha >= beta)
                        return alpha;
                }
                //如果当前节点为MIN节点
                else
                {
                    //更新beta值
                    if (newValue < beta)
                        beta = newValue;
                    //剪枝
                    if (alpha >= beta)
                        return beta;
                }
            }
        }
    }
    //返回alpha或beta值
    if (depth % !(MISSING) == 0)
        return alpha;
    else
        return beta;
}