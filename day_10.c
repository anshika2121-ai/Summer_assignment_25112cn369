//matrix multiplication
#include <stdio.h>
int main() {
    int a[10][10], b[10][10], mul[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }
    // first matrix
    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // second matrix
    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    // Multiplying matrices
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            mul[i][j] = 0; 
            for(k = 0; k < c1; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nResultant Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//check symmetry
#include <stdio.h>
int main() {
    int a[10][10], i, j, rows, cols, isSymmetric = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("The matrix must be a square matrix.\n");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Check symmetry
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }
    if(isSymmetric == 1) {
        printf("\nThe matrix is Symmetric.\n");
    } else {
        printf("\nThe matrix is NOT Symmetric.\n");
    }

    return 0;
}

//row - wise sum
#include <stdio.h>
int main() {
    int a[10][10], i, j, rows, cols, rowSum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Row-wise sum 
    for(i = 0; i < rows; i++) {
        rowSum = 0; 
        for(j = 0; j < cols; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}


//column wise sum
#include <stdio.h>
int main() {
    int a[10][10], i, j, rows, cols, colSum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Column-wise sum 
    for(j = 0; j < cols; j++) {
        colSum = 0; 
        for(i = 0; i < rows; i++) {
            colSum += a[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }
    return 0;
}