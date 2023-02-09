int evaluate(int arr[15][15])
{
    int score = 0;
    int i, j;
    // ÅĞ¶ÏºáÏò
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 11; j++)
        {
            if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] && arr[i][j] == arr[i][j + 3] && arr[i][j] == arr[i][j + 4])
            {
                if (arr[i][j] == 1)
                    score += 10000;
                else if (arr[i][j] == 2)
                    score -= 10000;
            }
        }
    }
    // ÅĞ¶Ï×İÏò
    for (i = 0; i < 11; i++)
    {
        for (j = 0; j < 15; j++)
        {
            if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && arr[i][j] == arr[i + 3][j] && arr[i][j] == arr[i + 4][j])
            {
                if (arr[i][j] == 1)
                    score += 10000;
                else if (arr[i][j] == 2)
                    score -= 10000;
            }
        }
    }
    // ÅĞ¶ÏĞ±Ïò
    for (i = 0; i < 11; i++)
    {
        for (j = 0; j < 11; j++)
        {
            if (arr[i][j] == arr[i + 1][j + 1] && arr[i][j] == arr[i + 2][j + 2] && arr[i][j] == arr[i + 3][j + 3] && arr[i][j] == arr[i + 4][j + 4])
            {
                if (arr[i][j] == 1)
                    score += 10000;
                else if (arr[i][j] == 2)
                    score -= 10000;
            }
        }
    }
    // ÅĞ¶Ï·´Ğ±Ïò
    for (i = 0; i < 11; i++)
    {
        for (j = 14; j > 3; j--)
        {
            if (arr[i][j] == arr[i + 1][j - 1] && arr[i][j] == arr[i + 2][j - 2] && arr[i][j] == arr[i + 3][j - 3] && arr[i][j] == arr[i + 4][j - 4])
            {
                if (arr[i][j] == 1)
                    score += 10000;
                else if (arr[i][j] == 2)
                    score -= 10000;
            }
        }
    }
    return score;
}