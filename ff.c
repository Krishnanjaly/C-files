#include<stdio.h>
int main()
{
    int p,b;
    printf("Enter the number of processes:");
    scanf("%d",&p);
    printf("Enter the number of blocks:");
    scanf("%d",&b);
    int sp[p],sb[b],allo[p];
    printf("Enter the processes:");
    for(int i=0;i<p;i++)
    {
        scanf("%d",&sp[i]);
        allo[i]=-1;
    }
    printf("Enter the block size:");
    for(int i=0;i<b;i++)
    {
        scanf("%d",&sb[i]);
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(sp[i]<=sb[j] && allo[j]==-1)
            {
                allo[i]=j;
                sb[j]-=sp[i];
                break;
            }
        }
    }
    printf("\nPROCESS\tPROCESS SIZE\tBLOCK SIZE\n");
    for(int i=0;i<p;i++)
    {
        printf("\n%d\t\t%d\t\t",i,sp[i]);
        if(allo[i]!=-1)
        {
            printf("B%d\t",allo[i]+1);
        }
        else
        {
            printf("Not allocated\t");
        }
    }
    return 0;
}