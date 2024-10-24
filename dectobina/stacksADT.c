#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "stacksADT.h"

// ����ջ
typedef struct Lnode
{
    int data;
    struct node* next;
};

typedef struct LSTACK
{
    node* top;
    int size;

};


STACK* createStack() {
    STACK* s = (STACK*)malloc(sizeof(STACK));
    if (s == NULL) {
        printf("Out of space!!!");
        return NULL;
    }
    s->top = NULL;
    s->size = 0;
    return s;
}

// ��ջ
int pushStack(STACK* s, int* x) {
    node* p = (node*)malloc(sizeof(node));
    if (p == NULL) {
        printf("NULL");
        return 0;
    }
    p->data = *x;
    p->next = s->top;
    s->top = p;
    s->size++;
    return 1;
}

// ���ջ�Ƿ�Ϊ��
int emptyStack(STACK* s) {
    return s->size == 0;
}

// ��ջ
int* popStack(STACK* s) {
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

// ����ջ
void destroyStack(STACK* s) {
    node* current = s->top;
    node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    free(s);
}

















































//typedef struct node
//{
//	int data;
//	struct node* next;
//} node ;
//
//typedef struct STACK
//{
//	node* top;
//	int size;
//	
//
//}STACK;
//
//STACK* createStack()
//{
//	STACK* s = (STACK*)malloc(sizeof(STACK));
//	if (s == NULL)
//	{
//     printf("Out of space!!!");
//	 return NULL;
//	}
//	s->top = NULL;
//	s->size = 0;	
//
//	return s;
//
//}
//int pushStack(STACK* s, int *x)
//{
//	
//	node* p = (node*)malloc(sizeof(node));
//	if (p == NULL)
//	{
//		printf("NULL");
//		return 0;
//	}
//		
//	p->data = *x;
//	//ͷ�巨
//	p->next = s->top;
//	s->top = p;
//	s->size++;
//	return 1;
//}
//int emptyStack(STACK* s)
//{
//	return (s->size == 0);
//}
//
//int* popStack(STACK* s)
//{
//	if (s->size == 0)
//		return NULL;
//	node* p = s->top;
//	int* x = (int*)malloc(sizeof(int));
//	if (x == NULL)
//		return NULL;
//	*x = p->data;
//	s->top = s->top->next;
//	free(p);
//	s->size--;
//	return x;
//}
//
//void destroyStack(STACK* s)
//{
//	node* current = s->top;
//	node* nextNode;
//	while (current != NULL) {
//		nextNode = current->next;
//		free(current);
//		current = nextNode;
//	}
//	free(s);
//
//}

