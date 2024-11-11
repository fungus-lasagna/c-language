#include <stdio.h>
#include <string.h>

int main()
{
    int field[15][15];
    int R, C;
    
    scanf("%d %d", &R, &C);
    
    //輸入
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &field[i][j]);
        }
    }
    
    int detected_bomb = 0, undetected_bomb = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            switch (field[i][j])
            {
                case 0:
                    break;
                case 1:
                    break;
                default :
                    //若為偵測器, 檢查鄰近是否有偵測器
                    for (int m = i - 1;m <= i + 1; m++)
                    {
                        for (int n = j - 1;n <= j + 1; n++)
                        {
                            if (m>=0 && m<R && n>=0 && n<C && !(m==i && n==j))
                            {
                                if (field[m][n] >= 5)
                                {
                                    field[m][n] = 6;
                                    field[i][j] = 6;
                                }
                            }
                        }
                    }
                    
                    //若為偵測器, 且鄰近無偵測器, 偵測炸彈
                    if (field[i][j] == 5)
                    {
                        for (int m = i - 1;m <= i + 1; m++)
                        {
                            for (int n = j - 1;n <= j + 1; n++)
                            {
                                if (m>=0 && m<R && n>=0 && n<C && !(m==i && n==j))
                                {
                                    if (field[m][n] == 1)
                                    {
                                        field[m][n] = 0;
                                        detected_bomb++;
                                    }
                                }
                            }
                        }
                    }
            }
        }
    }
    
    //未偵測到的炸彈
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (field[i][j] == 1)
                undetected_bomb++;
        }
    }
    
    /*
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d ", field[i][j]);
        }
        printf("\n");
    }
    */

    printf("%d %d", detected_bomb, undetected_bomb);
}