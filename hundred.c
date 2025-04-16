#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<100)
    {
        if(num%2==0)
        {
            printf("%d is even number less than 100",num);
        }
        else
        {
            printf("%d is odd number less than 100",num);
        }
    }
    else
    {
        printf("%d is a positive number greater than 100",num);
    }
    return 0;
}