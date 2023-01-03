#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",arr[i][j]);
        }
        
    }
    int x,y;
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (arr[i][j]==1)
           {
            x=i;
            y=j;
           }
           
        }
        
    }
    
    
}