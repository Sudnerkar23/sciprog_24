#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

#define MAX_FILE_NAME 100

int getMatrixSize(FILE *f);
void loadMatrix(FILE *f, int **square, int n);

int main() {
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *f = fopen(filename, "r");
    if (!f) {
        perror("File opening failed");
        return 1;
    }

    int n = getMatrixSize(f);
    if (n <= 0) {
        printf("Invalid matrix size.\n");
        fclose(f);
        return 1;
    }

    int **square = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        square[i] = (int *)malloc(n * sizeof(int));
    }

    loadMatrix(f, square, n);
    fclose(f);

    if (isMagicSquare(square, n)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is NOT a magic square.\n");
    }

    for (int i = 0; i < n; i++) {
        free(square[i]);
    }
    free(square);

    return 0;
}

int getMatrixSize(FILE *f) {
    int n = 0;
    while (!feof(f)) {
        if (fgetc(f) == '\n') {
            n++;
        }
    }
    rewind(f);  // Reset file pointer for further reading
    return n;
}

void loadMatrix(FILE *f, int **square, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(f, "%d", &square[i][j]);
        }
    }
}

