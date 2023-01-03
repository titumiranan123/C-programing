#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    int len = strlen(str);
    int max = 0;
    for (int i = 0; i < len-2; i++)
    {
        int counter = 1;
        if (str[i] == '+')
        {
            counter++;

            if (str[i] != str[i + 1])
            {
                if (counter > max)
                {
                    max = counter;
                }
                counter = 1;
            }
        }
        
    }

    printf("%d\n", max);

    return 0;
}