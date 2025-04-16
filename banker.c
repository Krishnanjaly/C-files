#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,allo[20][20],max[20][20],m,avai[20];
    printf("Enter the number of processes:");
    scanf("%d",&n);
    printf("Enter the no of resources:");
    scanf("%d",&m);
    printf("Enter the allocation matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&allo[i][j]);
        }
    }
    printf("Enter the max matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&max[i][j]);
        }
    }
    int need[n][m],safe[n],ind=0,work[m],finish[n];
    printf("Enter the available resources:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&avai[i]);
    }
    for(int i=0;i<n;i++)
    {
        finish[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        work[i]=avai[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            need[i][j]=max[i][j]-allo[i][j];
        }
    }
    printf("\nNEED MATRIX\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",need[i][j]);
        }
        printf("\n");
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            if(finish[i]==0)
            {
                int flag=0;
                for(int j=0;j<m;j++)
                {
                    if(need[i][j]>work[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    safe[ind++]=i+1;
                    for(int l=0;l<m;l++)
                    {
                        work[l]+=allo[i][l];
                    }
                    finish[i]=1;
                }
            }
        }
    }
    if(ind==n)
    {
        printf("The system is in safe state!");
        printf("\nSAFE SEQUENCE\n");
        for(int i=0;i<ind;i++)
        {
            printf("P%d\t",safe[i]);
        }
        printf("\nThe no of available resources are:");
        for(int i=0;i<m;i++)
        {
            printf("%d\t",work[i]);
        }
    }
    else
    {
        printf("The system is in unsafe state!");
    }
    return 0;
}