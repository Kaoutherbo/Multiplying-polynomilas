#include"main.h"

int* multiplyPol(int *poly1,int *poly2,int degree1,int degree2){

    int *result = (int *)malloc(sizeof(int)*(degree1 + degree2 + 1));
     // Multiply the two polynomials
    for (size_t i = 0; i <= degree1 + degree2; i++) {
        result[i] = 0;
        for (size_t j = 0; j <= degree1; j++) {
            if (i - j >= 0 && i - j <= degree2) {
                result[i] += poly1[j] * poly2[i - j];
            }
        }
    }

    return result;
}