#include <stdio.h>
int main()
{
    int ammu;
    printf("Anmuu taka dilo :");
    scanf("%d\n", &ammu);
    int khoroch;
    printf(" taka khoroch :");
    scanf("%d\n", &khoroch);
    int taka_baki = ammu - khoroch;
    int dal_price;
    printf("dal price :");
    scanf("%d\n", &dal_price);
    if (taka_baki >= dal_price)
    {
        printf("nite parbo");
    }
    else
    {
        printf("Parbo na");
    }
    return 0;
}