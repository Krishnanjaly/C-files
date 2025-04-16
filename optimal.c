#include<stdio.h>
int optimal(int n,int a[],int f,int frame[],int index)
{
    int farthest=-1,ri=-1;
    for(int i=0;i<f;i++)
    {
        int j;
        for(j=index;j<n;j++)
        {
            if(frame[i]==a[j])
            {
                if(j>farthest)
                {
                    farthest=j;
                    ri=i;
                }
                break;
            }
        }
        if(j==n)
        {
            return i;
        }
    }
    return ri;
}
int main()
{
    int f,n,frame[10],count=0;
    printf("Enter the number of pages:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the page number:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no of frames:");
    scanf("%d",&f);
    for(int i=0;i<f;i++)
    {
        frame[i]=-1;
    }
    int j=0;
    printf("\nREF STRING\tPAGE FRAMES\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t",a[i]);
        int avail=0;
        for(int k=0;k<f;k++)
        {
            if(frame[k]==a[i])
            {
                avail=1;
                break;
            }
        }
        if(avail==0)
        {
            count++;
            int ri=-1;
            for(int j=0;j<f;j++)
            {
                if(frame[j]==-1)
                {
                    ri=j;
                    break;
                }
            }
            if(ri==-1)
            {
                ri=optimal(n,a,f,frame,i);
            }
            frame[ri]=a[i];
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
            continue;
        }
        printf("\n");
    }
    printf("Total page faults:%d\n",count);
}