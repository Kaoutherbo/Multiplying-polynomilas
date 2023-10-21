#include"main.h"

int* multiplyPol(int *poly1, int *poly2, int degree1, int degree2) {
    int *result = (int *)malloc(sizeof(int) * (degree1 + degree2 + 1));

    // Initialize the result array with zeros
    for (int i = 0; i <= degree1 + degree2; i++) {
        result[i] = 0;
    }

    // Multiply the two polynomials
    for (int i = 0; i <= degree1; i++) {
        for (int j = 0; j <= degree2; j++) {
            result[i + j] += poly1[i] * poly2[j];
        }
    }

    return result;
}
