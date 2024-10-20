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

// 1.创建单链表

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

bool initList2(Lnode *L) // 带头结点的单链表
{
	*L = (node *)malloc(sizeof(node));
	if (*L == NULL)
		return false;
	if (*L != NULL)
	{

		(*L)->next = NULL;

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

// 按位序插入代码实现

node *ListInsert(node *L, int i, int e) // 在第i个位置插入元素e
{										// 带头节点
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
	if (s == NULL)
		return NULL;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return L;
}

// node *ListInsert(node *L, int i, int e) // 在第i个位置插入元素e
// {										// 不带头节点
// 	if (i < 1)
// 		return NULL;
// if(i==1)
// {
// 	node *s = (node *)malloc(sizeof(node));
// 	s->date = 3;
// 	s->next = L;
// 	L = s;
// 	return true;
// }
// 	node *p = L;
// 	int j = 1;//这里变了
// 	while (p != NULL && j < i - 1)
// 	{
// 		p = p->next;
// 		j++;
// 	}
// 	if (p == NULL)                          //这里可以用InstertNextNode
// 		return NULL;
// 	node *s = (node *)malloc(sizeof(node));
// 	if (s == NULL)
// 		return NULL;
// 	s->data = e;
// 	s->next = p->next;
// 	p->next = s;
// 	return L;
// }

// 指定节点的后插操作

bool InstertNextNode(node *p, int e)
{
	if (p == NULL)
		return false;
	node *s = (node *)malloc(sizeof(node));
	if (s == NULL)
		return false;
	s->data = e;
	p->next = s->next;
	p->next = s;
	return true;
}

// 指定节点的前插操作

bool InstertNextNode(node *p, int e)
{
	if (p == NULL)
		return false;
	node *s = (node *)malloc(sizeof(node));
	if (s == NULL)
		return false;
	s->next = p->next;
	p->next = s;
	s->data = p->data;
	p->data = e;
	return true;
}

// 按位序删除
bool ListDelete(node *L, int i, int e) // 这里e用引用，可以返回所删除数据的data值
{
	if (i < 1)
		return false;

	node *p = L; // 这里可以用GetElem()
	int j = 0;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	///////////////////////////////
	if (p == NULL)
		return false;
	if (p->next == NULL)
	{
		return false;
	}

	node *q = p->next;
	p->next == q->next;
	e = q->data;

	free(q);
	return true;
}

// 删除指定节点L
bool DeleteNode(node *L)
{
	node *p = L;
	if (p == NULL)
		return false;
	node *q = p->next;
	p->data = p->next->data;
	p->next = q->next;
	free(q);
	return true;
}

// 寻找L中第i个节点

node *GetElem(node *L, int i) // i 是想要寻找的长度//无头节点情况，有头节点情况将j=0
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

// 按值查找
node *LocateElem(node *L, int e)
{
	node *p = L->next;
	while (p != NULL && p->data != e)
		p = p->next;
	return p;
}

// 求表长
int Length(node *L)
{
	int len = 0;
	node *p = L;
	while (p->next != NULL)
	{
		p = p->next;
		len++;
	}
	return len;
}

// 尾插法建立单链表

node *List_Tailinsert(node *L)
{
	int x;
	L = (node *)malloc(sizeof(node));
	node *s, *r = L;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (node *)malloc(sizeof(node));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return L;
}

// 头插法建立单链表

node *List_Headinsert(node *L) // 可用于链表的逆置
{
	node *s = L;
	int x;
	L = (node *)malloc(sizeof(node));
	L->next = NULL;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (node *)malloc(sizeof(node));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}

	return L;
}

// 双链表的初始化（带头节点）
typedef struct DNode
{
	int data;
	struct DNode *next, *prior;
} DNode, *DLNode;

bool InitDLinkList(DLNode *L)
{
	*L = (DNode *)malloc(sizeof(DNode));
	if (L == NULL)
		return false;
	(*L)->prior = NULL;
	(*L)->next = NULL;
	return true;
}
// 检查双链表是否为空
bool Empty(DNode *L)
{
	if (L->next == NULL)
		return true;
	else
		return false;
}

// 双链表的插入
bool InsertNextDNode(DNode *p, DNode *s)
{
	if (p == NULL || s == NULL)
		return false;
	s->next = p->next;
	if (p->next != NULL)
		p->next->prior = s;
	s->prior = p;
	p->next = s;
	return true;
}
// 双链表的删除
bool DeleteNextDNode(DNode *p)
{
	if (p == NULL)
		return false;
	DNode *q = p->next;
	if (q == NULL)
		return false;
	p->next = q->next;
	if (q->next != NULL)
		q->next->prior = p;
	free(q);
	return true;
}

//双链表的遍历


int main()
{
	node *L;
	initList2(&L);
	node *p = ListInsert(L, 1, 1);
	printf("%d", p->next->data);

	return 0;
}

//循环单链表
bool InitList(Lnode* L)
{
	*L = (node *)malloc(sizeof(node));
	if(L==NULL)
		return false;
	(*L)->next = L;
	return true;
}
//检查循环单链表是否为空
bool Empty(node*L)
{
	if(L->next == L)
		return true;
	else
		return false;
}
// int main()
// {
// 	node *L;
// 	if (initList2(&L))
// 	{ // 传递指针的地址
// 		node *p = ListInsert(L, 2, 2);
// 		if (p != NULL)
// 			printf("%d\n", p->next->data); // 要打印新插入节点的数据
// 		else
// 			printf("Insert failed\n");
// 	}
// 	else
// 	{
// 		printf("Failed to initialize list\n");
// 	}
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// typedef struct node
// {
// 	int data;
// 	struct node *next;
// } node, *Lnode;

// // 创建带头结点的单链表
// bool initList2(Lnode *L)
// {
// 	*L = (node *)malloc(sizeof(node));
// 	if (*L == NULL)
// 		return false;
// 	(*L)->next = NULL;
// 	return true;
// }

// // 检查链表是否为空（带头结点）
// bool Empty2(node *L)
// {
// 	return (L->next == NULL);
// }

// // 按位序插入代码实现
// node *ListInsert(node *L, int i, int e)
// {
// 	if (i < 1)
// 		return NULL;
// 	node *p = L;
// 	int j = 0;
// 	while (p != NULL && j < i - 1)
// 	{
// 		p = p->next;
// 		j++;
// 	}
// 	if (p == NULL)
// 		return NULL;
// 	node *s = (node *)malloc(sizeof(node));
// 	if (s == NULL)
// 		return NULL;
// 	s->data = e;
// 	s->next = p->next;
// 	p->next = s;
// 	return p;
// }

// int main()
// {
// 	node *L;
// 	if (initList2(&L))
// 	{									// 传递指针的地址
// 		node *p1 = ListInsert(L, 1, 1); // 先插入第一个节点
// 		if (p1 != NULL)
// 		{
// 			node *p2 = ListInsert(L, 2, 2); // 再插入第二个节点
// 			if (p2 != NULL)
// 				printf("%d\n", p2->next->data); // 打印新插入的节点数据
// 			else
// 				printf("Insert failed at position 2\n");
// 		}
// 		else
// 		{
// 			printf("Insert failed at position 1\n");
// 		}
// 	}
// 	else
// 	{
// 		printf("Failed to initialize list\n");
// 	}
// 	return 0;
// }
