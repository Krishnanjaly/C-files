#include<stdio.h>
int main()
{
    int row,i,j,n;
    printf("Enter no of rows:");
    scanf("%d",&row);
    for(n=row;n>=0;n--)
    {
        for(i=1;i<=row-n;i++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*n+1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}