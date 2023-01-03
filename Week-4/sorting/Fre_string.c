#include <stdio.h>
int main()
{
    int n;
    scanf("%d ", &n);
    char str[n];
    scanf("%s", str);
    int fre[27];
    for (int i = 1; i <= 26; i++)
    {
        fre[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        fre[(str[i] - 'a') + 1]++;
    }
    int cnt = 0;
    for (int i = 1; i <= 26; i++)
    {
        if (fre[i] != 0)
        {
            if (fre[i]==1)
            {
                cnt++;
            }
            
        }
    }
    printf("%d\n",cnt);
    return 0;
}