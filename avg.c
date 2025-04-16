#include<stdio.h>
int main()
{
    int arr[200],sum=0,num;
    float avg;
    printf("Enter the size of array:");
    scanf("%d",&num);
    printf("Enter the array elements:");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        avg=(float)sum/num;
    }
    printf("The averge of the numbers is %0.2f",avg);
    return 0;
}