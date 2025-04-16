#include<stdio.h>
int main()
{
    int p,t,r,s;
    printf("Enter the principal amount:");
    scanf("%d",&p);
    printf("Enter the time in years:");
    scanf("%d",&t);
    printf("Enter the interest rate:");
    scanf("%d",&r);
    s=(p*t*r)/100;
    printf("Simple Interest=%d",s);
    return 0;
}