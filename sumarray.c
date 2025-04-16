#include<stdio.h>
int main()
{
 int n,sum=0;
 printf("Enter the no of inetegers:");
 scamf("%d",&n);
 int arr[n];
 printf("Enter the %d integers:\n",n);
 for(int i=0;i<n;i++)
 {
    scanf("%d",&arr[i]);
 }
 for(int i=0;i<n;i++)
 {
    sum=sum+arr[i];
 }
 float average=sum/n;
 printf("Sum of the inetgers :%d",sum);
 printf
}