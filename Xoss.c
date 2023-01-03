#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d",i);
    }
    printf("\n");
    
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==n)
            {
                printf("%d",n);
                continue;
            }
            if (j == n)
            {
                printf("%d",n);
            }
           
            if (j == 1 )
            {
                printf("%d", i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}