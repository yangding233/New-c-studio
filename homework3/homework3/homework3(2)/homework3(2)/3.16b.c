#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


void Delete(int* x, int* L)
{

	for (int i = 0;i < *x ; i++)
	{
		for (int j = i + 1; j < *x - 1; j++)
		{
			if (L[i] == L[j])
			{
				for (int k = j; k < *x-1; k++)
				{
					L[k] = L[k + 1];
				}
				(*x)--;
			} 
			else
				j++;
		}
		
		

	}
}


int main()
{
	int a[] = { 1,2,2,3,3,5,3,6 };
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < len;i++)
	{
		printf("%d ", a[i]);
	}
	
	Delete(&len, a);
	printf("\nlast: ");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
}
















//
//#include <stdio.h>
//
//#define MAXSIZE 100
//
//typedef struct {
//    int array[MAXSIZE];
//    int size;
//} LIST;
//
//typedef int POSITION;
//
//
//POSITION Find(int x, LIST* L) {
//    for (int i = 0; i < L->size; i++) {
//        if (L->array[i] == x) {
//            return i;
//        }
//    }
//    return L->size;
//}
//
//void Delete(int x, LIST* L) {
//    if (x >= L->size || x < 0) {
//        printf("\n Element not found in the list");
//        return;
//    }
//    for (int i = x; i < L->size - 1; i++) {
//        L->array[i] = L->array[i + 1];
//    }
//    L->size--;
//}
//
//void RemoveDuplicates(LIST* L) {
//    int i, j;
//    for (i = 0; i < L->size; i++) {
//        j = i + 1;
//        while (j < L->size) {
//            if (L->array[i] == L->array[j]) {
//                Delete(j, L);
//            }
//            else {
//                j++;
//            }
//        }
//    }
//}
//
//
//void PrintList(LIST* L) {
//    for (int i = 0; i < L->size; i++) {
//        printf("%d ", L->array[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    LIST L = { {1, 2, 2, 3, 4, 4, 5}, 7 };
//    printf("Original List: ");
//    PrintList(&L);
//    RemoveDuplicates(&L);
//    printf("List after removing duplicates: ");
//    PrintList(&L);
//    return 0;
//}