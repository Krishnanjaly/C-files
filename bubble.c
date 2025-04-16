#include<stdio.h>
int main()
{
    int data[100],n,step,temp;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    for(step=0;step<n-1;step++)
    {
        for(int i=0;i<step-n-1;i++)
        {
            if(data[i]>data[i+1])
            {
                temp=data[i];
                data[i]=data[i+1];
                data[i+1]=temp;
            }
        }
    }
    printf("In asceneding order:");
    for(int i=0;i<n;i++)
    {
        printf("%d",data[i]);
    }
    return 0;
}