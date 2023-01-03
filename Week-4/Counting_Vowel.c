#include<stdio.h>
int  main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int counter=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] == 'a' || str[i]=='A')
        {
            counter++;
        }
        else if (str[i] == 'e' || str[i]=='E')
        {
            counter++;
        }
        else if (str[i] == 'i' || str[i]=='I')
        {
            counter++;
        }
        else if (str[i] == 'o' || str[i]=='O')
        {
            counter++;
        }
        else if (str[i] == 'u' || str[i]=='U')
        {
            counter++;
        }
       
    }
    printf("%d \n",counter);
}