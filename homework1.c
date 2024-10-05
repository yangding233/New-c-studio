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

//
//char find_char(char const* source, char const* chars) {
//    const char* p1 = source;
//    const char* p2;
//
//    while (*p1) {
//        p2 = chars;
//        while (*p2) {
//            if (*p1 == *p2) {
//                return *p1;  // Return the matching character directly
//            }
//            p2++;
//        }
//        p1++;
//    }
//    return '\0';  // Return null character if no match is found
//}
//
//int main()
//{
//	const char str1[] = "abcde2fghi3jk4l";
//    const char str2[] = "34";
//    char ret = find_char(str1, str2);
//    
//
//    if(ret != NULL)
//    {
//
//        printf("%c ", ret);
//    }
//   
//
//
//}





















//int main()
//{
//    const char str1[] = "abcde2fghi3jk4l";
//    const char str2[] = "34";
//    char* ret;
//
//    ret = strpbrk(str1, str2);
//    if (ret)
//    {
//        printf("第一个匹配的字符是： %c\n", *ret);
//    }
//    else
//    {
//        printf("未找到字符");
//    }
//
//    return(0);
//}

//
//
//    while (str1[i]!= '\0')
//    {
//        i++;
//        count++;
//    }
//
//    char arr3[i];
//    printf("%d", count);
//    printf("%d", i);
//
//    for (int j = 0; j < i; j++)
//    {
//        if (str1[j] == str2[k])
//        {
//
//        }
//    }
//    return 0;
//}
