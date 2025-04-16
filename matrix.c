#include<stdio.h>
void readMatrix(int[5][5], int, int);
void printMatrix(int[5][5], int, int);
void add(int[5][5], int[5][5], int[5][5], int, int);
void transpose(int[5][5], int[5][5], int, int);
void multi(int[5][5], int[5][5], int[5][5], int, int,int);
int main() {
    int matrix1[5][5], matrix2[5][5];
    int sumMatrix[5][5], transposeMatrix[5][5], multiMatrix[5][5];
    int row1,row2, col1,col2, op, subop;
    char cont;
        do {
        printf("\nChoose an option:\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Transpose\n");
        printf("3. Matrix Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                printf("Enter the rows and columns for mat 1: ");
                scanf("%d,%d", &row1, &col1);
                printf("Enter the rows and columns for mat 2: ");
                scanf("%d,%d", &row2, &col2);
                if(row1==row2 && col1==col2)
                {
                    readMatrix(matrix1, row1, col1);
                    readMatrix(matrix2, row2, col2);
                    add(matrix1, matrix2, sumMatrix, row1, col1);
                    printf("matriX 1:\n");
                    printMatrix(matrix1, row1, col1);
                    printf("matriX 2:\n");
                    printMatrix(matrix2, row2, col2);
                    printf("Addition of matrices:\n");
                    printMatrix(sumMatrix, row1, col1);
                }
                else{
                    printf("Addition not possible:\n");
                }
                break;
        case 2:
                printf("Enter the number of rows and columns for mat 1: ");
                scanf("%d,%d", &row1, &col1);
                readMatrix(matrix1, row1, col1);
                transpose(matrix1, transposeMatrix, row1, col1);
                printf("matriX 1:\n");
                printMatrix(matrix1, row1, col1);
                printf("Transpose of matrice is:\n");
                printMatrix(transposeMatrix, row1, col1);
                break;
        case 3:
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
                else{
                    printf("Multiplication not possible:\n");
                }
                break;
        case 4:
                printf("Quitting the program");
                break;
            default:
                printf("Invalid option!\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &cont);           
    } 
    while (cont == 'y' || cont == 'Y');
    printf("Quitting the program\n");
    return 0;
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
void add(int matrix1[5][5], int matrix2[5][5], int sumMatrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void transpose(int matrix1[5][5],int transposeMatrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposeMatrix[i][j] = matrix1[j][i];
        }
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