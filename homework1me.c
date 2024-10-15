// #define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *find_char(char const *a1, char const *a2)
{
    int i = 0;
    while (a1[i]!= '\0')
    {
        
        if(a1[i] == a2[0])
        {
            return (char*) &a2[0];
        }
        i++;
        
    }
    printf("dont find");
    return NULL;
    

    // for ()

    //     printf("%c %c", *a1, *a2);

}




int main()
{
    const char a1[] = "abdosjegs34nif";
    const char a2[] = "34";

    
    
    char *ret = find_char(a1, a2);

    if(ret != NULL)
    {
        printf("%c", *ret);
    }
    return 0;
}