#include <stdio.h>
int main()
{
    float basic,gross,hra,da
    printf("enter basic salary");
    scanf("%f",&basic);
    if (basic>=1 && basic<=4000)
    {
        hra=basic*0.10;
        da=basic*0.50;
        
    }
    else if (basic>=4001 && basic<=8000)
    {
        hra=basic*0.20;
        da=basic*0.60;

    }
    else if(basic>=8001 && basic<=12000)
    {
        hra=basic*0.25;
        da=basic*0.70;
        
    }
    else if (basic>=12001)
    {
        hra=basic*0.30;
        da=basic*0.80;
    }
    else
    {
        printf("invalid salary");
    }
    return 0;
}