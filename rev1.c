#include<stdio.h>
int main()
{
    int my[30],rev[30],i,n,j;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&my[i]);
    }
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        rev[j]=my[i];
    }
    printf("The reversed element is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",rev[i]);
    }
    return 0;
}