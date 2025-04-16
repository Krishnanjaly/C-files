#include<stdio.h>
#include<stdlib.h>
void sort(int a[],int n)
{
    for(int step=0;step<n;step++)
    {
        for(int i=0;i<n-step-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
int main()
{
    int head,a[20],n,seektime=0,distance,size;
    printf("Enter the head position:");
    scanf("%d",&head);
    printf("Enter the number of disk requests:");
    scanf("%d",&n);
    printf("Enter the disk size:");
    scanf("%d",&size);
    printf("Enter the disk requests:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[n]=head;
    n++;
    sort(a,n);
    int pos;
    for(int i=0;i<n;i++)
    {
        if(a[i]==head)
        {
            pos=i;
            break;
        }
    }
    printf("\nSCAN DISK SCHEDULING\n");
    for(int i=pos;i<n-1;i++)
    {
        distance=abs(a[i]-a[i+1]);
        printf("\nHead movement from %d to %d : %d",a[i],a[i+1],distance);
        seektime+=distance;
    }
    if(a[n-1]!=size-1)
    {
        distance=size-1-a[n-1];
        printf("\nHead movement from %d to %d : %d",a[n-1],size-1,distance);
        seektime+=distance;
    }
    if(pos>0)
    {
        printf("\nHead movement from %d to %d : %d",size-1,a[pos-1],size-1-a[pos-1]);
        seektime+=size-1-a[pos-1];
        for(int i=pos-1;i>0;i--)
        {
            distance=a[i]-a[i-1];
            printf("\nHead movement from %d to %d : %d",a[i],a[i-1],distance);
            seektime+=distance;
        }
    }
    printf("\nTotal seektime distance:%d\n",seektime);
    return 0;
}