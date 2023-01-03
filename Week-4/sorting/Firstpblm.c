#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    int sortArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int k = 0; k < n; k++)
    {
        int min = num[0];

        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if (num[i] < min)
            {
                min = num[i];
                index = i;
            }
        }
        sortArr[k] = min;
        num[index] = 99999;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", sortArr[i]);
    }
}