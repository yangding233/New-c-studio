#include <stdio.h>
#include <string.h>



char* find_char(char const* str1, char const* str2)
{

    int i = 0;
    while (str1[i] != '\0')
    {
        if (str2[0] == str1[i])
        {

            return (char*)&str2[0];
        }
        i++;

    }
    printf("don't have");
    return NULL;
}

int main()
{
	const char str1[] = "abcde2fghi3jk4l";
    const char str2[] = "34";
    char* ret = find_char(str1, str2);
    

    if(ret != NULL)
    {

        printf("%c ", *ret);
    }
   


}
