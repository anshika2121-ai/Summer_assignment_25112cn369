// addition of matrix
#include <stdio.h>
#define SIZE 3
int main() {
    int A[SIZE][SIZE] = {{1, 2, 3}, {3, 5, 9}, {7, 8, 9}};
    int B[SIZE][SIZE] = {{2, 4, 5}, {8, 5, 4}, {7, 2, 1}};
    int result[SIZE][SIZE];
    // Adding matrices
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    // Printing result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}


//subtraction of matrix
#include <stdio.h>
#define SIZE 3

int main() {
    int A[SIZE][SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int B[SIZE][SIZE] = {{1, 1, 1}, {5, 5, 2}, {7, 8, 9}};
    int result[SIZE][SIZE];
    // Subtracting matrices
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
    // Printing result
    printf("Resultant Matrix (Subtraction):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//transpose of matrix

 #include <stdio.h>
#define SIZE 3
int main() {
    int matrix[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transpose[SIZE][SIZE];
    // Transposing the matrix
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    // Printing transposed matrix
    printf("Transposed Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//find diagonal sum
#include <stdio.h>
#define SIZE 3
int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 3, 6},
        {7, 9, 2}
    };   
    int sum_1 = 0;
    int sum_2 = 0;
    for (int i = 0; i < SIZE; i++) {
        sum_1 += matrix[i][i];
        sum_2 += matrix[i][SIZE - 1 - i];
    }
    printf("Sum of Primary Diagonal: %d\n", sum_1);
    printf("Sum of Secondary Diagonal: %d\n", sum_2);

    return 0;
}