#include <stdio.h>
int main()
{
    // diagonal matrix row and colum are same size
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 0;
    if (row != col)
    {
        flag = 1;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                if (a[i][j] != 1)
                {
                    flag = 1;
                }
            }
            continue;
            // or else if use korte hobe

            if (a[i][j] != 0)
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("Unit matrix \n");
    }
    else
    {
        printf("Not Unit matrix \n");
    }
    return 0;
}
/*
3 3
1 0 0
0 1 0
0 0 1


ans
Unit matrix
*/