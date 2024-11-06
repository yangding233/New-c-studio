#define _CRT_SECURE_NO_WARNINGS

#ifndef SUB_H_
#define SUB_H_

typedef struct Node Node;

typedef struct Polynomial Polynomial;


Polynomial* createPolynomial();
void insertTerm(Polynomial* poly, int coef, int exp);
void printPolynomial(Polynomial* poly);
Polynomial* multiplyPolynomials(Polynomial* poly1, Polynomial* poly2);
void freePolynomial(Polynomial* poly);

#endif 
