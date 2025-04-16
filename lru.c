#include<stdio.h>
int main()
{
    int f,n,frame[10],count=0,time[10];
    printf("Enter the number of pages:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the page number:");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no of frames:");
    scanf("%d",&f);
    for(int i=0;i<f;i++)
    {
        frame[i]=-1;
        time[i]=0;
    }
    int j=0;
    printf("\nREF STRING\tPAGE FRAMES\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d\t\t",a[i]);
        int avail=0;
        for(int k=0;k<f;k++)
        {
            if(frame[k]==a[i])
            {
                avail=1;
                time[k]=i;
                break;
            }
        }
        if(avail==0)
        {
            if(i<=f)
            {
                frame[i-1]=a[i];
                time[i-1]=i;
            }
            else
            {
                int lr=time[0];
                int lri=0;
                for(int k=1;k<f;k++)
                {
                    if(time[k]<lr)
                    {
                        lr=time[k];
                        lri=k;
                    }
                }
                frame[lri]=a[i];
                time[lri]=i;
            }
            count++;
            for(int k=0;k<f;k++)
            {
                if(frame[k]!=-1)
                {
                    printf("%d\t\t",frame[k]);
                }
                else
                {
                    printf("-\t\t");
                }
            }
        }
        else
        {
            printf("hit\n");
        }
        printf("\n");
    }
    printf("Total page faults:%d\n",count);
}