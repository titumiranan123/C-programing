#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int m = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > m)
        {
            m = num[i];
        }
    }
    int ind;
    for (int i = 0; i < n; i++)
    {
        if (m = num[i])
        {
            ind = i;
        }
    }
    int sumTn[n - 1];
    int index = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (ind == num[i])
        {
            continue;
        }
        sumTn[index] = m + num[i];
        index++;
    }
    int max = sumTn[0];
    int maxEven;
    for (int i = 0; i < n; i++)
    {
        if (sumTn[i] > m)
        {
            m = sumTn[i];
            if (sumTn[i] % 2 == 0)
            {
                maxEven = sumTn[i];
            }
        }
        
    }

    return 0;
}
