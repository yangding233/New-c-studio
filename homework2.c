#include <stdio.h>
#include <string.h>



int del_substr(char *str, char const *substr) {
    char *p1 = str;  
    char const *p2 = substr;  

   
    while (*p1) {
        if (*p1 == *p2) {
            char *temp = p1;  
            while (*p2 && *temp && *temp == *p2) {
                temp++;
                p2++;
            }
            if (*p2 == '\0') {
                
                while (*temp) {
                    *p1 = *temp;
                    p1++;
                    temp++;
                }
                *p1 = '\0';  
                return 1;  
            }
            p2 = substr;  
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
    
    printf("output is %d \n",i);//Verify the returned value
    
    char* p = arr1;
    printf("arr1 = %s ", p);//Verify the final result of arr1

    return 0;
}