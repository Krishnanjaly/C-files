#include<stdio.h>
void main()
{
    int mat1[5][5],mat2[5][5],mat3[5][5],r1,r2,c1,c2;
    printf("Enter the numberof rows and columns of matrix 1:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns of matrix 2:");
    scanf("%d %d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter the elments of matrix 1:");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("Enter the elments of matrix 2:");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d",&mat2[i][j]);
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                mat3[i][j]=0;
                for(int k=0;k<c1;k++)
                {
                    mat3[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
        printf("Product of two matrices is:");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d\t",mat3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication is not possible");
    }
}