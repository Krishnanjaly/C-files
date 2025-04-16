#include<stdio.h>
int factrec(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factrec(n-1);
    }
}
int factnonrec(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    printf("The factorial using recursion is:%d\n",factrec(n));
    printf("The factorial using non recursion is:%d\n",factnonrec(n));
    return 0;
}


