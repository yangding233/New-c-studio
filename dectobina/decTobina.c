#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "stacksADT.h"

int main(void)
{
    unsigned int num;
    int *digit;
    STACK *stack;
    stack = createStack();

    // prompt and read a number
    printf("Enter an integer:      ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = (int *)malloc(sizeof(int));
        *digit = num % 2;
        pushStack(stack, digit);
        num = num / 2;
       
    }

    printf("The binary number is : ");
    while (!emptyStack(stack))
    {
        digit = (int *)popStack(stack);
        printf("%1d", *digit);
    } // while
    printf("\n");

    // Destroying Stack
    destroyStack(stack);
    return 0;
} // main



