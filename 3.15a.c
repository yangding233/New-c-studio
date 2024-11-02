#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void move(int* a,int i, int into)
{
	for (int j = i; j > 0; j--)
	{
		a[j] = a[j - 1];
	}
	a[0] = into;
	
}



void Find(int* a,int len,int into)
{

	
	int i = 0;
	while(i < len)
	{
		if(a[i] == into)
		{
			move(a,i,into);
			return;
		}

		
		i++;
	}
 printf("we can't find the element\n");


}


int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int len = sizeof(a) / sizeof(a[0]);
	int into;
	printf("Enter the element you want to move to the head of the table(1~9):");

	scanf("%d", &into);
	
	Find(a,len,into);
	
	
	
	
	printf("Array after moving the element: ");
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\nend");
	return 0;

}