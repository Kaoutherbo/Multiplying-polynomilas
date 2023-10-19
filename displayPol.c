#include"main.h"

void displayPol(int *result,int size)
{
    // Display the result polynomial
    printf("Result of polynomial multiplication:\n");
    for (size_t i = 0; i <= size; i++) {
        printf("%d*x^%d ", result[i], i);
        if (i < size)
            printf("+ ");
    }

}