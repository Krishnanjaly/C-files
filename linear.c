#include<stdio.h>
int main()
{
    int a[30],i,n,k,flag=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("Element is found at %d",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Element is not found in the array.");
    }
    return 0;
}