////////////////malloc memset memcpy 的应用//////////////////////
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

    int* arr1 = malloc (10 * sizeof(int));   //malloc申请的空间不会自动初始化为0
    if (arr1 == 0)
    {
        return 0;
    }
    memset(arr1,0,10 * sizeof(int));
    
    
      
    for(int i = 0; i < 10; i++)
    {
        *(arr1 + i) = i;
        printf("%d ", *(arr1+ i));

    }
    
    int* arr2 = calloc (10 , sizeof(int));   //calloc申请的空间会自动初始化为0
    if (arr2 == 0)
    {
        return 0;
    }
    for(int i = 0; i < 10; i++)
    {
        *(arr2 + i) = i;
        printf("%d ", *(arr2 + i));

    }
    
    int * copy = calloc(15 , sizeof(int));
    if (copy == 0)
    {
        return 0;
    }
    memcpy(copy, arr2, 10 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        
        printf("%d ", *(copy + i));

    }
    
    
    
    
    
    
    
    free(arr1);
    free(arr2);
    arr1 = NULL;
    arr2 = NULL;




    // scanf("%u")
	




	return 0;
}
