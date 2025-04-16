#include<stdio.h>
void readMatrix(int[5][5], int, int);
void printMatrix(int[5][5], int, int);
void multi(int[5][5], int[5][5], int[5][5], int, int,int);
int main()
{
    int matrix1[5][5], matrix2[5][5];
    int multiMatrix[5][5];
    int row1,row2, col1,col2;
    printf("Enter the rows and columns for mat 1: ");
    scanf("%d,%d", &row1, &col1);
    printf("Enter the rows and columns for mat 2: ");
    scanf("%d,%d", &row2, &col2);
    if(row2==col1)
        {
            readMatrix(matrix1, row1, col1);
            readMatrix(matrix2, row2, col2);
            multi(matrix1, matrix2, multiMatrix, row1, col2,col1);
            printf("matriX 1:\n");
            printMatrix(matrix1, row1, col1);
             printf("matriX 2:\n");
            printMatrix(matrix2, row2, col2);
            printf("Multiplication of  matrices:\n");
            printMatrix(multiMatrix, row1, col2);
        }
        else
        {
            printf("Multiplication not possible:\n");
        }
}
void readMatrix(int matrix[5][5], int row, int col) {
    printf("Enter the elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int matrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void multi(int matrix1[5][5], int matrix2[5][5], int multiMatrix[5][5], int row, int col,int col1)
{
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            multiMatrix[i][j]=0;
            for (int k=0;k<col1;k++)
            {
                multiMatrix[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

}
