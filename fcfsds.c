#include<stdio.h>
#include<stdlib.h>
int main()
{
    int head,a[20],n,seektime=0,distance;
    printf("Enter the head position:");
    scanf("%d",&head);
    printf("Enter the number of disk requests:");
    scanf("%d",&n);
    printf("Enter the disk requests:");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    a[0]=head;
    printf("\nFCF<S DISK SCHEDULING\n");
    for(int i=0;i<n;i++)
    {
        distance=abs(a[i]-a[i+1]);
        printf("\nHead movement from %d to %d : %d",a[i],a[i+1],distance);
        seektime+=distance;
    }
    printf("\nTotal seektime distance:%d\n",seektime);
    return 0;
}