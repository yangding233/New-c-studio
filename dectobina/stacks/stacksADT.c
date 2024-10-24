#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int data;
	struct node* next;
} node ,* Lnode;

typedef struct
{
	node* top;
	int size;
	

}STACK;

STACK* createStack()
{
	STACK* s = (STACK*)malloc(sizeof(STACK));
	if (s == NULL)
	{
     printf("Out of space!!!");
	 return NULL;
	}
	s->top = NULL;
	s->size = 0;	

	return s;

}
int pushStack(STACK* s, int *x)
{
	node* p = (node*)malloc(sizeof(node));
	if (p == NULL)
	{
		printf("NULL");
		return 0;
	}
		
	p->data = *x;
	//ͷ�巨
	p->next = s->top;
	s->top = p;
	s->size++;
	return 1;
}
int emptyStack(STACK* s)
{
	return (s->size == 0);
}

int* popStack(STACK* s)
{
	if (s->size == 0)
		return NULL;
	node* p = s->top;
	int* x = (int*)malloc(sizeof(int));
	*x = p->data;
	s->top = s->top->next;
	free(p);
	s->size--;
	return x;
}

void destroyStack(STACK* s)
{
	node* current = s->top;
	node* nextNode;
	while (current != NULL) {
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
	free(s);

}



