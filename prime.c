#include<stdio.h>
int main()
{
    int limit,i,j;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        int prime=1;
        for(j=2;j<=(i/2);j++)
        {
            if((i%j)==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
        {
             printf("%d ",i);
        }
    }
    return 0;
}