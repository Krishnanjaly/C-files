#include<stdio.h>
int fact(int n);
int main()
{
    int number;
    printf("Enter an integer:");
    scanf("%d",&number);
    printf("Factorial is %d",fact(number));
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}