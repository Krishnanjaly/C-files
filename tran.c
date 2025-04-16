#include<stdio.h>
int main()
{
    int m[20][20],t[20][20],r,c;
    printf("Enter the number of rows and columns of the matrix:");
    scanf("%d %d",&r,&c);
    printf("The elements in the matrix are:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            t[i][j]=m[j][i];
        }
    }
    printf("The elements of the matrix is :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}