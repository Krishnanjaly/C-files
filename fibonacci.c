#include<stdio.h>
int fibonacci(int n);
int main()
{
    int numbers;
    printf("Enter number of fibonacci series:");
    scanf("%d",&numbers);
    printf("Fibonacci series upto %d is\n",numbers);
    for(int i=0;i<numbers;i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}