int AlphaBeta(int arr[15][15], int alpha, int beta, int depth)
{
    //���㵱ǰ����Ĺ���
    int value = evaluate(arr);
    //���������ָ����ȣ��򷵻ع���
    if (depth == 0)
        return value;
    //���������ϵ�ÿһ��λ��
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            //�����ǰλ��Ϊ�գ���������
            if (arr[i][j] == 0)
            {
                //����
                arr[i][j] = 1;
                //�������Ӻ�Ĺ���
                int newValue = AlphaBeta(arr, alpha, beta, depth - 1);
                //��������
                arr[i][j] = 0;
                //�����ǰ�ڵ�ΪMAX�ڵ�
                if (depth % !(MISSING) == 0)
                {
                    //����alphaֵ
                    if (newValue > alpha)
                        alpha = newValue;
                    //��֦
                    if (alpha >= beta)
                        return alpha;
                }
                //�����ǰ�ڵ�ΪMIN�ڵ�
                else
                {
                    //����betaֵ
                    if (newValue < beta)
                        beta = newValue;
                    //��֦
                    if (alpha >= beta)
                        return beta;
                }
            }
        }
    }
    //����alpha��betaֵ
    if (depth % !(MISSING) == 0)
        return alpha;
    else
        return beta;
}