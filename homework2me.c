

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int del_substr(char *arr1, char *arr2)
{
    char *p1 = arr1;
    char *p2 = arr2;

    while(*p1)
    {
        if(*p1 == *p2)
        {
            char *temp = p1;
            while (*temp && *p1 && *p2 == *temp)
            {
                temp++;
                p2++;
            }
            if(*p2 == '\0')
            {
                while(*temp)
                {
                    *p1 = *temp;
                    temp++;
                    p1++;
                }
                *p1 = '\0';
                return 1;
            }

        }
        p1++;
    }
    return 0;
}


int main()
{
    char arr1[] = "ABCDEFGABC";
    char arr2[] = "ABC";

    int i = del_substr(arr1, arr2);

    printf("output is %d \n", i); // Verify the returned value

    char *p = arr1;
    printf("arr1 = %s ", p); // Verify the final result of arr1

    return 0;
}