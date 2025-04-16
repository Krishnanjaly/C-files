#include<stdio.h>
int main()
{
    int n,i,j,num=2;
    long long int sum=0,value=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The series is:");
    for(i=1;i<=n;i++)
    {
        value=(value*10)+num;
        sum=sum+value;
        for(j=1;j<=i;j++)
        {
            printf("%d",num);
        }
        if(i<n)
        {
            printf("+");
        }
    }
    printf("\nSum of the series is %lld",sum);
    return 0;
}