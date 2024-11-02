#include <stdio.h>

// Function Prototype
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

// Function Definition
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0.0; // Initialize C[i][j] to 0
            for (int k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j]; // Perform multiplication and accumulation
            }
        }
    }
}

int main() {
    int n = 5, p = 3, q = 4;
    double A[n][p], B[p][q], C[n][q];

    // Initialize matrix A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            A[i][j] = i + j;
        }
    }

    // Initialize matrix B
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            B[i][j] = i - j;
        }
    }

    // Initialize matrix C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0.0;
        }
    }

    // Perform Matrix Multiplication
    matmult(n, p, q, A, B, C);

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%3.0f\t", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%3.0f\t", B[i][j]);
        }
        printf("\n");
    }

    // Print Matrix C
    printf("\nMatrix C:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%3.0f\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

