#include<stdio.h>
int main()
{
    int n,even=0,odd=0,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(n%2==0)
              {
                   even=even+arr[i];
              }
        else
              {
                  odd=odd+arr[i];
              }
    }
    if(even>odd)
    {
        printf("The larger sum is %d of even numbers.\n",even);
    }
    else{
        printf("The larger sum is %d of odd numbers.\n",odd);
    }
    return 0;
}