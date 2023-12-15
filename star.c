#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int arrB[n];
        int arrC[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d ", &arr[j]);
        }

        // copy the arrays
        for (int j = 0; j < n; j++)
        {
            arrB[j] = arr[j];
        }
        // sorting the arrays by ascending order

        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arrB[j] > arrB[k])
                {
                    int temp = arrB[j];
                    arrB[j] = arrB[k];
                    arrB[k] = temp;
                }
            }
        }
        for (int j = 0; j < n; j++)
        {
            arrC[j] = abs(arr[j] - arrB[j]);
            printf("%d ", arrC[j]);
        }

        printf("\n");
    }

    return 0;
}
