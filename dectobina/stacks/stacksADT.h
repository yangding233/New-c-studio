#define _CRT_SECURE_NO_WARNINGS

#ifndef STACKSADT_H_
#define STACKSADT_H_

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	int data;
	struct node* next;
} node, * Lnode;

typedef struct
{
	node* top;
	int size;


} STACK;


STACK* createStack();
int pushStack(STACK* s, int* x);
int emptyStack(STACK* s);
int* popStack(STACK* s);
void destroyStack(STACK* s);

#endif 
