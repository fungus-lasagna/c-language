#include <stdio.h>

int main()
{
    int row, column;
    
    scanf("%d %d", &row, &column);
    
    //輸入
    int num[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    
    
    //翻轉, 輸出
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", num[j][i]);
        }
        if (i != column - 1)
        printf("\n");
    }

    return 0;
}