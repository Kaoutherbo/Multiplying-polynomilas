#include"main.h"

// Function to multiply two polynomial terms
struct Term multiplyTerms(struct Term term1, struct Term term2) {
    struct Term result;
    result.coefficient = term1.coefficient * term2.coefficient;
    result.exponent = term1.exponent + term2.exponent;
    return result;
}