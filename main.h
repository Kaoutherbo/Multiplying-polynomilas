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

// For the first solution (using struct )
void displayTerm(struct Term term);
struct Term multiplyTerms(struct Term term1, struct Term term2);

// For the second solution (using arrays )
int* multiplyPol(int *poly1,int *poly2,int degree1,int degree2);
void displayPol(int *result,int size);
int getSize(char *s);
void getTerms (int *poly,int size,char *s);

#endif