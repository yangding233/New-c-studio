#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "sub.h"

typedef struct Node {
    int coef;
    int exp;
    struct Node* next;
} Node;

typedef struct Polynomial {
    Node* head;
} Polynomial;

Polynomial* createPolynomial() {
    Polynomial* poly = (Polynomial*)malloc(sizeof(Polynomial));
    if (!poly) {
        printf("Out of memory!\n");
        exit(1);
    }
    poly->head = NULL;
    return poly;
}

void insertTerm(Polynomial* poly, int coef, int exp) {
    Node** curr = &(poly->head);
    while (*curr != NULL && (*curr)->exp > exp) {
        curr = &((*curr)->next);
    }
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Out of memory!\n");
        exit(1);
    }
    newNode->coef = coef;
    newNode->exp = exp;
    newNode->next = *curr;
    *curr = newNode;
}

void printPolynomial(Polynomial* poly) {
    Node* curr = poly->head;
   
    while (curr != NULL) {
        printf("%dx^%d ", curr->coef, curr->exp);
        curr = curr->next;
    }
    printf("\n");
}

Polynomial* subtractPolynomials(Polynomial* poly1, Polynomial* poly2) {
    Polynomial* result = createPolynomial();
    Node* curr1 = poly1->head;
    Node* curr2 = poly2->head;
    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->exp < curr2->exp) {
            insertTerm(result, curr1->coef, curr1->exp);
            curr1 = curr1->next;
        }
        else if (curr1->exp > curr2->exp) {
            insertTerm(result, -curr2->coef, curr2->exp);
            curr2 = curr2->next;
        }
        else {
            int newCoef = curr1->coef - curr2->coef;
            if (newCoef != 0) {
                insertTerm(result, newCoef, curr1->exp);
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    }
    while (curr1 != NULL) {
        insertTerm(result, curr1->coef, curr1->exp);
        curr1 = curr1->next;
    }
    while (curr2 != NULL) {
        insertTerm(result, -curr2->coef, curr2->exp);
        curr2 = curr2->next;
    }
    return result;
}

void freePolynomial(Polynomial* poly) {
    Node* curr = poly->head;
    while (curr != NULL) {
        Node* temp = curr;
        curr = curr->next;
        free(temp);
    }
    free(poly);
}


