#include<stdio.h>
int main()
{
    int arr[200],flag=0,i,k,num;
    printf("Enter the size of the array:");
    scanf("%d",&num);
    printf("Enter the elements of the array:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be found:");
    scanf("%d",&k);
    for(i=0;i<num;i++)
    {
        if(arr[i]==k)
        {
            printf("The element is found at position %d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
        {
            printf("The element is not found");
        }
    return 0;
}