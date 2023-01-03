#include <stdio.h>
int main()
{
    int j;
    scanf("%d",&j);
    for(int k;k<j;k++ ){
        int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int find;
    scanf("%d",&find);
    int ans;
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (find == num[i])
        {
            ans = i;
            flag = 1;
        }
    }
    if(flag != 0){
        printf("Case %d:%d\n", k,ans+1);
    }
    else{
        printf("Case %d:Not Found",k);
    }
    }
}
