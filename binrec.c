#include<stdio.h>
void bin(int n)
{
    if(n==0)
    {
        return;
    }
    bin(n/2);
    printf("%d",n%2);
}
int main()
{
    int num;
    printf("Enter a decimal number:");
    scanf("%d",&num);
    printf("Binary:");
    if(num==0)
    {
        printf("0");
    }
    else
    {
        bin(num);
    }
    return 0;
}