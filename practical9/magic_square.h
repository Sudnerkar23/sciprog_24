#include <stdio.h>
#include <stdlib.h>

int isMagicSquare(int **square, const int n) {
    if (n < 0) {
        return 0;
    }

    int M = (n * (n * n + 1)) / 2;  // Magic constant
    int rowSum, colSum, mainDiagSum = 0, secDiagSum = 0;

    for (int i = 0; i < n; i++) {
        rowSum = colSum = 0;

        for (int j = 0; j < n; j++) {
            rowSum += square[i][j];
            colSum += square[j][i];
        }

        if (rowSum != M || colSum != M) {
            return 0;
        }

        mainDiagSum += square[i][i];
        secDiagSum += square[i][n - i - 1];
    }

    if (mainDiagSum != M || secDiagSum != M) {
        return 0;
    }

    return 1;
}
