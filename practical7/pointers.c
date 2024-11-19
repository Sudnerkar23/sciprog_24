#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for an array of `size` integers
double* allocateArray(int size) {
    return (double*)malloc(size * sizeof(double));
}

// Function to fill an array with ones
void fillWithOnes(int* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 1;
    }
}

// Function to print an array of integers
void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Function to free allocated memory
void freeArray(void* array) {
    free(array);
}

// Function to calculate the factorial of a number
double factorial(int n) {
    if (n == 0 || n == 1) return 1.0;
    double fact = 1.0;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to estimate `e` using a series expansion up to a given order
double estimateE(int order) {
    double* terms = allocateArray(order + 1);
    if (!terms) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    double sum = 1.0; // First term is 1
    for (int i = 1; i <= order; i++) {
        terms[i] = 1.0 / factorial(i); // x = 1, so terms[i] = 1 / i!
        sum += terms[i];
    }
    freeArray(terms);
    return sum;
}

int main() {
    int maxOrder = 15;
    double trueValue = 2.71828;

    printf("Estimating e using a series expansion:\n");
    for (int order = 1; order <= maxOrder; order++) {
        double estimate = estimateE(order);
        printf("Order %2d: Estimate = %.6f, Error = %.6f\n", order, estimate, trueValue - estimate);
    }

    // Demonstrating basic pointer operations
    int size = 5;
    int* intArray = (int*)malloc(size * sizeof(int));
    if (!intArray) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    fillWithOnes(intArray, size);
    printf("\nArray filled with ones: ");
    printArray(intArray, size);

    freeArray(intArray);

    return 0;
}
