#include<stdio.h>
int count(int a)
{
    int count=0;
    if(a==0)
    {
        return 1;
    }
    while(a!=0)
    {
        a=a/10;
        count++;
    }
     return count;
}
int sum(int a)
{
    int sum=0,rem;
    while(a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int c=count(n);
    int s=sum(n);
    printf("The number of digits is %d\n",c);
    printf("The sum of digits is %d\n",s);
    return 0;
}