#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int arr[4];
        int flag = 0;

        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int j = 0; j <= arr[0]; j++)
        {
            if (arr[0] == arr[1] * arr[2] * arr[3] * 0)
            {
                printf("%d\n", j);
                flag = 1;
                break;
            }
            else if (arr[0] == arr[1] * arr[2] * arr[3] * j)
            {
                printf("%d\n", j);
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("-1\n");
        }
    }

    return 0;
}
