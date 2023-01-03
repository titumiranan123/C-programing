#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d ", &N);
    char ch;
    scanf("%c", &ch);

    for (i = 1; i <= N; i++)
    {
        for (j = 0; j < N - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < N; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }

    return 0;
}