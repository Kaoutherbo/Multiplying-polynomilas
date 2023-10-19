#include "main.h"

int main() {
    int degree1, degree2, i, j;

    // Input the degrees of the two polynomials
    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &degree1);
    printf("Enter the degree of the second polynomial: ");
    scanf("%d", &degree2);

    // Create arrays to store the coefficients of the two polynomials
    int poly1[degree1 + 1];
    int poly2[degree2 + 1];

    // Input coefficients for the first polynomial
    printf("Enter the coefficients of the first polynomial:\n");
    for (i = 0; i <= degree1; i++) {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly1[i]);
    }

    // Input coefficients for the second polynomial
    printf("Enter the coefficients of the second polynomial:\n");
    for (i = 0; i <= degree2; i++) {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly2[i]);
    }

    // Multiply the two polynomials
    int *result = multiplyPol(poly1, poly2, degree1, degree2);

    // Display the result polynomial
    displayPol(result, degree1 + degree2);

    // Free allocated memory
    free(result);

    return 0;
}
