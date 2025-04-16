#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],i,j;
    int r1,r2,c1,c2;
    printf("Enter no of rows and columns in matrix 1:");
    scanf("%d,%d",&r1,&c1);
    printf("Enter no of rows and columns in matrix 2:");
    scanf("%d,%d",&r2,&c2);
    if(r1==r2 && c1==c2)
    {
        printf("Enter the elments of matrix A:");
        {
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
        }
        printf("Enter the elments of matrix B:");
        {
            for(i=0;i<r2;i++)
            {
                for(j=0;j<c2;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
        }
            printf("The sum of matrix is\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    c[i][j]=a[i][j]+b[i][j];
                                printf("%d\t",c[i][j]);
                }
                        printf("\n");
            }
    }
    else
    {
        printf("Invalid matrix");
    }
    return 0;
}