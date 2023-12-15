#include <stdio.h>
void fun(int i)
{
    if (i == 6)
        return;
    fun(i + 1);
    printf("%d\n", i);
}
// fun k age call korle eta ulta print kore
int main()
{
    fun(1);
    return 0;
}