#define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// struct node
// {
// 	int v;
// 	struct node* next;
// };

// //������ͷ�ڵ������
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
// 	//����ͷ�ڵ�
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

// 1.����������

bool initList1(Lnode L) // ����ͷ���ĵ�����
{
	L = NULL; // �ձ���ʱ��û���κνڵ�
	return true;
}

bool Empty1(Lnode L) // ����ͷ���ĵ�����
{
	if (L != NULL)
		return true;
	else
		return false;
}

bool initList2(Lnode *L) // ��ͷ���ĵ�����
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

bool Empty2(node *L) // ��ͷ���ĵ�����
{
	if (L->next != NULL)
		return true;
	else
		return false;
}

// ��λ��������ʵ��

node *ListInsert(node *L, int i, int e) // �ڵ�i��λ�ò���Ԫ��e
{										// ��ͷ�ڵ�
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

// node *ListInsert(node *L, int i, int e) // �ڵ�i��λ�ò���Ԫ��e
// {										// ����ͷ�ڵ�
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
// 	int j = 1;//�������
// 	while (p != NULL && j < i - 1)
// 	{
// 		p = p->next;
// 		j++;
// 	}
// 	if (p == NULL)                          //���������InstertNextNode
// 		return NULL;
// 	node *s = (node *)malloc(sizeof(node));
// 	if (s == NULL)
// 		return NULL;
// 	s->data = e;
// 	s->next = p->next;
// 	p->next = s;
// 	return L;
// }

// ָ���ڵ�ĺ�����

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

// ָ���ڵ��ǰ�����

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

// ��λ��ɾ��
bool ListDelete(node *L, int i, int e) // ����e�����ã����Է�����ɾ�����ݵ�dataֵ
{
	if (i < 1)
		return false;

	node *p = L; // ���������GetElem()
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

// ɾ��ָ���ڵ�L
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

// Ѱ��L�е�i���ڵ�

node *GetElem(node *L, int i) // i ����ҪѰ�ҵĳ���//��ͷ�ڵ��������ͷ�ڵ������j=0
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

// ��ֵ����
node *LocateElem(node *L, int e)
{
	node *p = L->next;
	while (p != NULL && p->data != e)
		p = p->next;
	return p;
}

// ���
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

// β�巨����������

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

// ͷ�巨����������

node *List_Headinsert(node *L) // ���������������
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

// ˫����ĳ�ʼ������ͷ�ڵ㣩
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
// ���˫�����Ƿ�Ϊ��
bool Empty(DNode *L)
{
	if (L->next == NULL)
		return true;
	else
		return false;
}

// ˫����Ĳ���
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
// ˫�����ɾ��
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

//˫����ı���


int main()
{
	node *L;
	initList2(&L);
	node *p = ListInsert(L, 1, 1);
	printf("%d", p->next->data);

	return 0;
}

//ѭ��������
bool InitList(Lnode* L)
{
	*L = (node *)malloc(sizeof(node));
	if(L==NULL)
		return false;
	(*L)->next = L;
	return true;
}
//���ѭ���������Ƿ�Ϊ��
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
// 	{ // ����ָ��ĵ�ַ
// 		node *p = ListInsert(L, 2, 2);
// 		if (p != NULL)
// 			printf("%d\n", p->next->data); // Ҫ��ӡ�²���ڵ������
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

// // ������ͷ���ĵ�����
// bool initList2(Lnode *L)
// {
// 	*L = (node *)malloc(sizeof(node));
// 	if (*L == NULL)
// 		return false;
// 	(*L)->next = NULL;
// 	return true;
// }

// // ��������Ƿ�Ϊ�գ���ͷ��㣩
// bool Empty2(node *L)
// {
// 	return (L->next == NULL);
// }

// // ��λ��������ʵ��
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
// 	{									// ����ָ��ĵ�ַ
// 		node *p1 = ListInsert(L, 1, 1); // �Ȳ����һ���ڵ�
// 		if (p1 != NULL)
// 		{
// 			node *p2 = ListInsert(L, 2, 2); // �ٲ���ڶ����ڵ�
// 			if (p2 != NULL)
// 				printf("%d\n", p2->next->data); // ��ӡ�²���Ľڵ�����
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
