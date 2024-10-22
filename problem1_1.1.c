#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int recursive(int n)
{
    if(n>0)
    return n+recursive(n - 1);
    else
        return 0;
}

int main()
{
    int n = 0;
    printf("please into a num     ");
    scanf("%d", &n);
    n = recursive(n);
    printf("The  result is %d ",n);
    return 0;
}