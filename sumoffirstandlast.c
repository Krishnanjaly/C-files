#include<stdio.h>
int main()
{
    int num,originalNum,fdigit,ldigit,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
    {
        num=-num;
    }
    ldigit=num%10;
    originalNum=num;
    while(num>=10)
    {
        num=num/10;
    }
    fdigit=num;
    sum=fdigit+ldigit;
    printf("The sum of first digit and last digit of a number is %d",sum);
    return 0;
}