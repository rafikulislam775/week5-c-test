#include <stdio.h>
int main()
{
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
    for (int j = 0; j < col; j++)
    {
        printf("%d ", a[row - 1][j]);
    }
    printf("\n");
    for (int k = 0; k < row; k++)
    {
        printf("%d ", a[k][col - 1]);
    }
    printf("\n");
    return 0;
}