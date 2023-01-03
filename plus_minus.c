#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &str[i]);
    }

    int pl = 0, mi = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '+')
        {
            pl++;
        }
        else
        {
            mi++;
        }
    }
    if (pl > mi)
    {
        printf("%d\n", pl);
    }
    else
        printf("%d\n", mi);
}