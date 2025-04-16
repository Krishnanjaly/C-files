#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number of digits:");
    scanf("%d",&N);
    int sum=0,i=1;
    while(i<=N)
    sum=sum+ i++;
    printf("Sum of numbers is %d",sum);
    return 0;
}