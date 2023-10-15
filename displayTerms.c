#include"main.h"

// Function to display a polynomial term
void displayTerm(struct Term term) {
    if (term.exponent == 0) {
        printf("%d", term.coefficient);
    } else {
        printf("%dx^%d", term.coefficient, term.exponent);
    }
}