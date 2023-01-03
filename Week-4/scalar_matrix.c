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
        int ans = 1,x=mat[0][0];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (mat[i][j]!=x)
                    {
                        ans = 0;
                    }
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
            printf("scalar");
        }
        else
            printf("Not scalar");
    }
    else
        printf("Not scalar");
}