#include<stdio.h>
int main()
{
    int pid[20],bt[20],n;
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
    int start=0,end=0;
    printf("\nGANNT CHART\n");
    for(int i=0;i<n;i++)
    {
        printf("P%d\t",pid[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        end+=bt[i];
        printf("%d -%d\t",start,end);
        start+=bt[i];
    }
    int wt[n];
    wt[0]=0;
    for(int i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
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