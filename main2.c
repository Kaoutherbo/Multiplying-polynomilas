#include "main.h"

int main() {
    int  i, j;

    // Input the degrees of the two polynomials
    int degree1 = getSize("Enter the degree of the first polynomial: ");
    int degree2 = getSize("Enter the degree of the second polynomial: ");

    // Create arrays to store the coefficients of the two polynomials
    int poly1[degree1 + 1];
    int poly2[degree2 + 1];

    // Input coefficients for the polynomials
    getTerms(poly1, degree1, "Enter the coefficients of the first polynomial:\n");
    getTerms(poly2, degree2, "Enter the coefficients of the second polynomial:\n");

    // Multiply the two polynomials
    int *result = multiplyPol(poly1, poly2, degree1, degree2);

    // Display the result polynomial
    displayPol(result, degree1 + degree2);

    // Free allocated memory
    free(result);

    return 0;
}

// Get the degree of the polynomial
int getSize(char *s)
{
    int size;
    printf(s);
    scanf("%d",&size);
    if(size < 0){
        printf("Error,please Enter a valid degree ");
        getSize(s);
    }else{
        return size;
    }
}

// Input coefficients for the polynomial
void getTerms (int *poly,int size,char *s)
{

    printf(s);
    for (int i = 0; i <= size; i++) {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly[i]);
    }

}