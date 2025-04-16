#include<stdio.h>
int factorial(int num)
{
    int fact=1;
    for( int i=1;i<=num;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    int fact=factorial(number);
    printf("The factorial of %d is %d",number,fact);
    return 0;
}