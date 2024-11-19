#include <stdio.h>
#include "gcd.h"

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD using the iterative function
    int gcdIter = gcdIterative(num1, num2);
    printf("GCD (Iterative) of %d and %d: %d\n", num1, num2, gcdIter);

    // Calculate GCD using the recursive function
    int gcdRecur = gcdRecursive(num1, num2);
    printf("GCD (Recursive) of %d and %d: %d\n", num1, num2, gcdRecur);

    return 0;
}
