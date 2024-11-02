#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void move(int *a,int i)
{
    int p = a[i];
    for (int j = i; j > 0;j--)
    {
        a[j] = a[j - 1];
    }
    a[0] = p;
}




bool find(int *a,int len,int into)
{
    for (int i = 0; i < len; i++)
    {
        if(into == a[i])
        {
            
            move(a, i);
            return 1;
        }

    }
    printf("we can't find the element\n");
    return 0;
}








int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(a) / sizeof(a[0]);
    int into;
    scanf("%d",&into);
    find(a, len, into);

    for (int i = 0; i < len;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}