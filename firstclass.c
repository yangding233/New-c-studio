//#include <stdio.h>
//
//int main()
//{
//	printf("hello world");
//	return 0;
//}

//ctrl + F5 ���ٵ���
#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//����ᱨ��Ҫ�����ϱ�ʹ�� #define _CRT_SECURE_NO_WARNINGS
//	printf("%d", a + b);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//extern int a;//���������ⲿ�ķ���
//
//#define MAX 100    //define����ı�ʶ������
//
//enum Color    //ö�ٳ���
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
//	const int b = 20;     //const���εĳ�����
//	//int arr[b] = { 0 };     //����b�ᱨ����Ϊb���ǳ������ǳ�����
//	
//	printf("%d\n", MAX);
//	int c = MAX;                
//	printf("%d\n", c);
//
//	enum Color d = red;    // enum ʹ�÷���
//
//	printf("%d\n", red);   //ö�ٳ�����Ҳ��һ��һ��ֵ
//
//	//int f = 'asa';      //���ﲻ֪�����Ժ���˵
//	//printf("%d",f);
//
//
//
//	char arr1[] = "advent";    //�ַ���ĩβ������\0
//	char arr2[] = { 'a','d','v','e','n','t'};     //��������ӡ�˺ܶ����룬��Ϊ����û��\0, ��ӡ�������ڴ��еĶ���
//	char arr3[] = { 'a','d','v','e','n','t','\0'};
//	printf("%s\n %s\n", arr1, arr3);
//
//	printf("\\d\n");        //��������һ��'\',���Դ�ӡ'\d'
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
	char arr[11] = "helloworld";      //ע�⣺\0Ҳռ��һ���ַ�,����arr[11]ʵ��ֻ�ܷ��ʵ�arr[10]=\0

	int arr1[3] = { 1,2,3 };
	printf("%c\n", arr[10]);
	printf("%d\n", arr1[2]);              




	return 0;
}
