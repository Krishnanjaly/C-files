#include<stdio.h>
int main()
{
    int num,i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&num);
    n=num;
    for(i=1;i<=n;i++)
    {
        for(j=num;j>0;j--)
        {
            printf("* ");
        }
        printf("\n");
        num--;
    }
    return 0;
}