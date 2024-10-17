#define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// struct node
// {
// 	int v;
// 	struct node* next;
// };

// //创建带头节点的链表
// struct node* list_create()
// {
// 	struct node* list = (struct node*)malloc(sizeof(struct node));
// 	if (list == NULL)
// 	{
// 		return NULL;
// 	}
// 	return list;
// };

// struct node* list_create(int data[],int n)
// {
// 	//创建头节点
// 	struct node* list = (struct node*)malloc(sizeof(struct node));
// 	if (list == NULL)
// 	{
// 		return NULL;
// 	}

// 	struct node*p =list;

// 	for (int i = 0; i < n; i++)
// 	{
// 		struct node* list = (struct node*)malloc(sizeof(struct node));
// 		tmp->value = data[i];

// 		p->next = tmp;

// 		p = p -> next;

// 	}
// 	p->next = NULL;
// };

// struct STUDENT
// {

// 	char name[21];
// 	int id;
// 	struct STUDENT* next;

// };
// typedef struct STUDENT stu;

// int main()
// {
// 	stu* p, * head, * tail;
// 	p = (stu*)malloc(sizeof(stu));
// 	if (p != NULL)
// 	{

// 	}
//     head = p;
// 	tail = p;
// 	head->next = NULL;

// 	int n = 3;
// 	for (int i = 0; i < n; i++)

// 	{
// 		p = (stu*)malloc(sizeof(stu));
// 		printf("the name:\n");
// 		scanf("%s", &p->name);
// 		printf("the id:\n");
// 		scanf("%d", &p->id);
// 		tail->next = p ;
// 		tail = p;
// 		tail->next = NULL;

// 	}

// 	p = head->next;
// 	while (p != NULL)
// 	{
// 		printf("name : %s ///id : %d \n", p->name, p->id);
// 		p = p->next;
// 	}

// 	return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node
{
	int data;
	struct node *next;
} node, *Lnode;

bool initList1(Lnode L) // 不带头结点的单链表
{
	L = NULL; // 空表，暂时还没有任何节点
	return true;
}

bool Empty1(Lnode L) // 不带头结点的单链表
{
	if (L != NULL)
		return true;
	else
		return false;
}

bool initList2(Lnode L) // 带头结点的单链表
{
	L = (node *)malloc(sizeof(node));
	if (L == NULL)
		return false;
	if (L != NULL)
	{
		L->next = NULL;
		return true;
	}
}

bool Empty2(node *L) // 带头结点的单链表
{
	if (L->next != NULL)
		return true;
	else
		return false;
}
node *GetElem(node *L, int i) // i 是想要寻找的长度
{
	int j = 1;
	node *p = L->next;
	if (i == 0)
		return L;
	if (i < 1)
		return NULL;
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

// 按位序插入代码实现

node *ListInsert(node *L, int i, int e) // 在第i个位置插入元素e
{
	if (i < 1)
		return NULL;
	node *p = L;
	int j = 0;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
		return NULL;
	node *s = (node *)malloc(sizeof(node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return p;
}

int main()
{
	node* L;
	Empty2(&L);

	return 0;
}
