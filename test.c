#define _CRT_SECURE_NO_WARNINGS


//struct STUDENT
//{
//	char name[21];
//	int id;
//	struct STUDENT* next;
//};
//typedef struct STUDENT STU;
//int main()
//{
//	STU* p, * head, * tail;
//	int n = 3, i;
//	p = (struct STUDENT*)malloc(sizeof(struct STUDENT));
//	head = p;
//	tail = p;
//	head->next = NULL;
//
//	for (i = 0; i < n; i++)
//	{
//		p = (struct STUDENT*)malloc(sizeof(struct STUDENT));
//		printf("������������");
//		scanf("%s", &p->name);
//		printf("������ѧ�ţ�");
//		scanf("%d", &p->id);
//		tail->next = p;
//		tail = p;
//		tail->next = NULL;
//	}
//	p = head->next;
//	while (p != NULL)
//	{
//		printf("������%s ѧ�ţ�%d\n", p->name, p->id);
//		p = p->next;
//
//	}
//
//
//	return 1;
//}