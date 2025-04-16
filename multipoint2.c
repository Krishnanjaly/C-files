#include <stdio.h>

void multi(int *mat1, int *mat2, int *mat3, int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(mat3 + i * c2 + j) = 0;
            for (int k = 0; k < c1; k++) {
                *(mat3 + i * c2 + j) += *(mat1 + i * c1 + k) * *(mat2 + k * c2 + j);
            }
        }
    }
}


int main() {
    int mat1[5][5], mat2[5][5], mat3[5][5], r1, r2, c1, c2;

    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns of matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 == r2) {
        printf("Enter the elements of matrix 1:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("Enter the elements of matrix 2:\n");
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                scanf("%d", &mat2[i][j]);
            }
        }

        multi(&mat1[0][0], &mat2[0][0], &mat3[0][0], r1, c1, r2, c2);

        printf("Product of two matrices is:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%d\t", mat3[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Multiplication is not possible\n");
    }

    return 0;
}
