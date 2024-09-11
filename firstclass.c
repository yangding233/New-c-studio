//#include <stdio.h>
//
//int main()
//{
//	printf("hello world");
//	return 0;
//}

//ctrl + F5 快速调试
#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//这里会报错，要在最上边使用 #define _CRT_SECURE_NO_WARNINGS
//	printf("%d", a + b);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//extern int a;//声明来自外部的符号
//
//#define MAX 100    //define定义的标识符常数
//
//enum Color    //枚举常量
//{
//	red,
//	green,
//	blue
//
//};
//
//int main()
//{
//	
//	printf("%d\n", a);
//	
//
//
//	const int b = 20;     //const修饰的常变量
//	//int arr[b] = { 0 };     //这里b会报错，因为b不是常量，是常变量
//	
//	printf("%d\n", MAX);
//	int c = MAX;                
//	printf("%d\n", c);
//
//	enum Color d = red;    // enum 使用方法
//
//	printf("%d\n", red);   //枚举常量中也是一个一个值
//
//	//int f = 'asa';      //这里不知道，以后再说
//	//printf("%d",f);
//
//
//
//	char arr1[] = "advent";    //字符串末尾隐藏了\0
//	char arr2[] = { 'a','d','v','e','n','t'};     //这里后面打印了很多乱码，因为这里没有\0, 打印了其他内存中的东西
//	char arr3[] = { 'a','d','v','e','n','t','\0'};
//	printf("%s\n %s\n", arr1, arr3);
//
//	printf("\\d\n");        //这里多加了一个'\',可以打印'\d'
//
//	
//
//
//	int len = strlen ("anvent");
//
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>



int main()
{
	char arr[11] = "helloworld";      //注意：\0也占用一个字符,这里arr[11]实际只能访问到arr[10]=\0

	int arr1[3] = { 1,2,3 };
	printf("%c\n", arr[10]);
	printf("%d\n", arr1[2]);              




	return 0;
}
