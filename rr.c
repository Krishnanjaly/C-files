#include<stdio.h>
int main()
{
    int pid[20],bt[20],n,tq;
    printf("Enter the no of processes:");
    scanf("%d",&n);
    printf("Enter the process id for each process:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&pid[i]);
    }
    printf("Enter the burst time for each processes:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("Enter the time quantum:");
    scanf("%d",&tq);
    int rt[n];
    for(int i=0;i<n;i++)
    {
        rt[i]=bt[i];
    }
    int start=0,end=0;
    int wt[n];
    printf("\nGANNT CHART\n");
    while(1)
    {
        int done=1;
        for(int i=0;i<n;i++)
        {
                if(rt[i]>0)
            {
                done=0;
                if(rt[i]>tq)
                {
                    start=end;
                    end+=tq;
                    rt[i]-=tq;
                    printf("%d | P%d | %d\t",start,pid[i],end);
                }
                else
                {
                    start=end;
                    end+=rt[i];
                    wt[i]=end-bt[i];
                    rt[i]=0;
                    printf("%d | P%d | %d\t",start,pid[i],end);
                }
            }
        }
        if(done) break;
    }
    float tat=0.0,twt=0.0;
    printf("\nPROCESS ID\tBURST TIME\tWAITING TIME\tTURN AROUND TIME\n");
    for(int i=0;i<n;i++)
    {
        printf("\n%d\t\t",pid[i]);
        printf("%d\t\t",bt[i]);
        printf("%d\t\t",wt[i]);
        printf("%d\t\t",wt[i]+bt[i]);
        twt+=wt[i];
        tat+=(wt[i]+bt[i]);
    }
    float awt=twt/n;
    float atat=tat/n;
    printf("\nAverage waiting time:%0.2f",awt);
    printf("\nAverage turn around time:%0.2f\n",atat);
    return 0;
}