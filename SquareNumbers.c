#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, m, ans[1000] = {0}, num = 0;
    while (1)
    {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
        {
            break;
        }
        else
        {
            for (int i = n; i <= m; i++)
            {
                for (int j = 1; j <= sqrt(i); j++)
                {
                    if (i == j*j)
                    {
                        ans[num]++;
                    }
                }
            }
        }
        num++;
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d\n", ans[i]);
    }
}