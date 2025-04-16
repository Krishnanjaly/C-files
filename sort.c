#include<stdio.h>
int main()
{
    int arr[100];
    int n,s,t,*p;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the arrays:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    p=arr;
    for(s=0;s<n-1;s++)
    {
        for(int i=0;i<n-s-1;i++)
        {
            if(p[i]>p[i+1])
            {
                t=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=t;
            }
        }
    }
    printf("Ascending order of the elements:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}