#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int coef;
    int exp;
    struct Node *next;
} Node;

typedef struct Polynomial
{
    Node *head;
} Polynomial;

Polynomial *createPolynomial();
void insertTerm(Polynomial *poly, int coef, int exp);
void printPolynomial(Polynomial *poly);
Polynomial *multiplyPolynomials(Polynomial *poly1, Polynomial *poly2);
void freePolynomial(Polynomial *poly);

Polynomial *createPolynomial() 
{
    Polynomial *poly = (Polynomial *)malloc(sizeof(Polynomial));
    if (!poly)
        return NULL;
    poly->head = NULL;
    return poly;
}

void insertTerm(Polynomial *poly, int coef, int exp) 
{
    Node **curr = &(poly->head);
    while (*curr != NULL && (*curr)->exp > exp)
    {
        curr = &((*curr)->next);
    }
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->coef = coef;
    newNode->exp = exp;
    newNode->next = *curr;
    *curr = newNode;
}

void printPolynomial(Polynomial *poly) 
{
    Node *curr = poly->head;
    while (curr != NULL)
    {
        printf("%dx^%d ", curr->coef, curr->exp);
        curr = curr->next;
    }
    printf("\n");
}


Polynomial *subtractPolynomials(Polynomial *poly1, Polynomial *poly2) 
{
    Polynomial *result = createPolynomial();
    Node *curr1 = poly1->head;
    Node *curr2 = poly2->head;
    while (curr1 != NULL && curr2 != NULL)
    {
        if (curr1->exp < curr2->exp)
        {
            insertTerm(result, curr1->coef, curr1->exp);
            curr1 = curr1->next;
        }
        else if (curr1->exp > curr2->exp)
        {
            insertTerm(result, -curr2->coef, curr2->exp);
            curr2 = curr2->next;
        }
        else
        {
            int newCoef = curr1->coef - curr2->coef;
            if (newCoef != 0)
            {
                insertTerm(result, newCoef, curr1->exp);
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    }
    while (curr1 != NULL)
    {
        insertTerm(result, curr1->coef, curr1->exp);
        curr1 = curr1->next;
    }
    while (curr2 != NULL)
    {
        insertTerm(result, -curr2->coef, curr2->exp);
        curr2 = curr2->next;
    }
    return result;
}

void freePolynomial(Polynomial *poly) 
{
    Node *curr = poly->head;
    while (curr != NULL)
    {
        Node *temp = curr;
        curr = curr->next;
        free(temp);
    }
    free(poly);
}

int main()
{
    Polynomial *poly1 = createPolynomial();
    insertTerm(poly1, -1, 2);
    insertTerm(poly1, -1, 0);
    Polynomial *poly2 = createPolynomial();
    insertTerm(poly2, -1, 2);
    insertTerm(poly2, -1, 1);
    printf("Polynomial 1: ");
    printPolynomial(poly1);
    printf("Polynomial 2: ");
    printPolynomial(poly2);
    Polynomial *sub = subtractPolynomials(poly1, poly2);
    printf("subtraction: ");
    printPolynomial(sub);
    freePolynomial(sub);
    freePolynomial(poly1);
    freePolynomial(poly2);

    return 0;
}