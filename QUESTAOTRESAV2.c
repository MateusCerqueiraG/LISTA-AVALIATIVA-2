#include <stdio.h>
#include <string.h>

void readMatrix(int matrix[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int result[4][4], int matrixA[4][4], int matrixB[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

void subtractMatrices(int result[4][4], int matrixA[4][4], int matrixB[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
}

void multiplyMatrices(int result[4][4], int matrixA[4][4], int matrixB[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

int main() {
    int matrixA[4][4];
    int matrixB[4][4];
    int result[4][4];
    char operation[5];

    readMatrix(matrixA);
    readMatrix(matrixB);

    scanf("%s", operation);

    if (strcmp(operation, "soma") == 0) {
        addMatrices(result, matrixA, matrixB);
    } else if (strcmp(operation, "sub") == 0) {
        subtractMatrices(result, matrixA, matrixB);
    } else if (strcmp(operation, "mult") == 0) {
        multiplyMatrices(result, matrixA, matrixB);
    }

    printMatrix(result);

    return 0;
}
