#define _CRT_SECURE_NO_WARNINGS

#ifndef STACKSADT_H_
#define STACKSADT_H_

#include <stdio.h>
#include <stdlib.h>
struct Lnode;
typedef struct Lnode node;

struct LSTACK;
	typedef struct LSTACK STACK;


STACK* createStack();
int pushStack(STACK* s, int* x);
int emptyStack(STACK* s);
int* popStack(STACK* s);
void destroyStack(STACK* s);

#endif 
