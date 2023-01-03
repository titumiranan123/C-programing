#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    if (r == c)
    {
        int ans = 1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    continue;
                }
                if (mat[i][j] != 0)
                {
                    ans = 0;
                }
            }
        }
        if (ans == 1)
        {
            printf("Diagonal");
        }
        else
            printf("Not Diagonal");
    }
    else
        printf("Not Diagonal");
}