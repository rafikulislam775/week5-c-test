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
            if (i != j && a[i][j] != a[j][i])
            {
                flag = 1;
            }
            else if (i == j && a[i][j] != 1)
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
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