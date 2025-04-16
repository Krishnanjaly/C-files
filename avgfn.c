#include<stdio.h>
int avg(int arr[100],int num)
{
    int sum=0;
    for (int i=0;i<num;i++)
    {
        sum=sum+arr[i];
    }
    return sum/num;
}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int average=avg(arr,n);
    printf("The average of the elements is %d",average);
    return 0;
}