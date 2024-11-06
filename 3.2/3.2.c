
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "sub.h"

int main() {
    Polynomial* poly1 = createPolynomial();
    insertTerm(poly1, -1, 2);
    insertTerm(poly1, -1, 0);

    Polynomial* poly2 = createPolynomial();
    insertTerm(poly2, -1, 2);
    insertTerm(poly2, -1, 1);

    printf("Polynomial 1: ");
    printPolynomial(poly1);

    printf("Polynomial 2: ");
    printPolynomial(poly2);

    Polynomial* sub = subtractPolynomials(poly1, poly2);
    printf("Subtraction: ");
    printPolynomial(sub);

    freePolynomial(sub);
    freePolynomial(poly1);
    freePolynomial(poly2);

    return 0;
}
