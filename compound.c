#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,n,t,a,ci;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the interest rate:");
    scanf("%f",&r);
    r=r/100;
    printf("Enter number of times interest applied per time period:");
    scanf("%f",&n);
    printf("Enter the time period in years:");
    scanf("%f",&t);
    a=p*pow((1+r/n),n*t);
    ci=a-p;
    printf("The Compound Interest is:%f",ci);
    return 0;
}