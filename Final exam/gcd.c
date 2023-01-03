#include <stdio.h>
int gcd(int n,int m){
    int gcd;
    for(int i=1; i <= n && i <= m; ++i)
    {
        if(n%i==0 && m%i==0)
            gcd = i;
    }

   return gcd;
}
int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    int ans = gcd(n1,n2);
    printf("%d ",ans);
    

    return 0;
}