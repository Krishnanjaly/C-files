#include<stdio.h>
void main()
{
    int mat1[5][5],mat2[5][5],mat3[5][5],r1,r2,c1,c2;
    printf("Enter the numberof rows and columns of matrix 1:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns of matrix 2:");
    scanf("%d %d",&r2,&c2);
    int *ptr1=&mat1[0][0];
    int *ptr2=&mat2[0][0];
    int *ptr3=&mat3[0][0];
    if(c1==r2)
    {
        printf("Enter the elments of matrix 1:");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",(ptr1+i*c1+j));
            }
        }
        printf("Enter the elments of matrix 2:");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d",(ptr2+i*c2+j));
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                *(ptr3 + i * c2 + j)=0;
                for(int k=0;k<c1;k++)
                {
                    *(ptr3 + i * c2 + j) += *(ptr1 + i * c1 + k) * *(ptr2 + k * c2 + j);
                }
            }
        }
        printf("Product of two matrices is:\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d\t",*(ptr3+i*c2+j));
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication is not possible");
    }
}