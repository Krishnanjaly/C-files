#include<stdio.h>
int main()
{
    float basic,hra,da,gross;
    printf("Enter the basic salary:");
    scanf("%f",&basic);
    if(basic>=1 && basic<=4000)
    {
        hra=0.1*basic;
        da=0.5*basic;
    }
    else if(basic>=4001 && basic<=8000)
    {
        hra=0.2*basic;
        da=0.6*basic;
    }
    else if(basic>=8001 && basic<=12000)
    {
        hra=0.25*basic;
        da=0.7*basic;
    }
    else if(basic>12000)
    {
        hra=0.3*basic;
        da=0.8*basic;
    }
    gross=basic+hra+da;
    printf("Gross salary=%0.3f",gross);
    return 0;
}