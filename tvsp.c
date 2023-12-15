#include <stdio.h>
#include <string.h>
int main()
{
    int t, n;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        char a[n];
        scanf("%s", &a);

        int pathaan = 0;
        int Tiger = 0;
        for (int j = 0; j < strlen(a); j++)
        {
            if (a[j] == 'P')
            {
                pathaan++;
            }
            else
            {
                Tiger++;
            }
        }
        if (pathaan > Tiger)
        {
            printf("Pathaan\n");
        }
        else if (Tiger > pathaan)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}