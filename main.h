#ifndef MAIN_H
#define MAIN_H
// Header files
#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent a polynomial term
struct Term {
    int coefficient;
    int exponent;
};

// Prototypes for every function in the project
void displayTerm(struct Term term);
struct Term multiplyTerms(struct Term term1, struct Term term2);

#endif