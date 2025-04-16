#include<stdio.h>
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
            frame[j]=a[i];
            j=(j+1)%f;
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
            continue;
        }
        printf("\n");
    }
    printf("Total page faults:%d\n",count);
}