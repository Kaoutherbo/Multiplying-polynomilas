#include"main.h"


int main() {
    int m, n;
    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &m);
    printf("Enter the number of terms in the second polynomial: ");
    scanf("%d", &n);

    // Initialize arrays to store polynomial terms
    struct Term poly1[m];
    struct Term poly2[n];
    struct Term result[m * n]; // The result can have at most m * n terms

    // Input the first polynomial
    printf("Enter the terms of the first polynomial:\n");
    for (int i = 0; i < m; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &poly1[i].coefficient, &poly1[i].exponent);
    }

    // Input the second polynomial
    printf("Enter the terms of the second polynomial:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &poly2[i].coefficient, &poly2[i].exponent);
    }

    // Multiply the polynomials
    int resultIndex = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[resultIndex] = multiplyTerms(poly1[i], poly2[j]);
            resultIndex++;
        }
    }

    // Display the product polynomial
    printf("The product of the two polynomials is: ");
    for (int i = 0; i < resultIndex; i++) {
        displayTerm(result[i]);
        if (i < resultIndex - 1) {
            printf(" + ");
        }
    }

    return 0;
}