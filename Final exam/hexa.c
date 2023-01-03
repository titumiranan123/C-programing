#include <stdio.h>
int gcd(int n, int m)
{
    int gcd;
    for (int i = 1; i <= n && i <= m; ++i)
    {
        if (n % i == 0 && m % i == 0)
            gcd = i;
    }

    return gcd;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        int num[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    int ans = gcd(num[i], num[j]);
                    if (ans == 1)
                    {
                        cnt++;
                    }
                }
            }
        }

        printf("%d ", cnt);
    }
}
