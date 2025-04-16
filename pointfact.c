#include<stdio.h>
int main()
{
    int a,fact=1,*p;
    printf("Enter a number:");
    scanf("%d",&a);
    p=&fact;
    for(int i=1;i<=a;i++)
    {
        (*p)*=i;
    }
    printf("Factorial of the number is %d",*p);
    return 0;
}
