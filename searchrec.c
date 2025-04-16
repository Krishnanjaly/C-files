#include<stdio.h>
int search(int n,int arr[],int number)
{
    if(n<0)
    {
        return-1;
    }
    if(arr[n]==number)
    {
        return n+1;
    }
    return search(n-1,arr,number);
}
int main()
{
    int n,k,arr[100];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&k);
    int pos=search(n-1,arr,k);
    if(pos==-1)
    {
        printf("The element is not found");
    }
    else
    {
        printf("The element is found at position %d",pos);
    }
    return 0;
}