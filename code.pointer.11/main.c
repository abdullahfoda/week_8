#include <stdio.h>

#define MAX_SIZE 10


void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}


void multiplyMatrix(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            int sum = 0;
            for (int k = 0; k < cols1; k++) {
                sum += *( *(mat1 + i) + k) * *( *(mat2 + k) + j);
            }
            result[i][j] = sum;
        }
    }
}


void printMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;


    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);


    inputMatrix(mat1, rows1, cols1);


    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);


    inputMatrix(mat2, rows2, cols2);

    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied!\n");
        return 0;
    }


    multiplyMatrix(mat1, mat2, result, rows1, cols1, cols2);


    printf("Resultant matrix after multiplication:\n");
    printMatrix(result, rows1, cols2);

    return 0;
}
