#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct student {
    int data;
    struct student* next;
}Node;

Node* create() {
    int i;
    Node* head, * p1, * p2;
    p1 = (Node*)malloc(sizeof(Node));
    p1->data = 1;
    p2 = head = p1;
    for (i = 0; i < 9; i++) {
        p1 = (Node*)malloc(sizeof(Node));
        p1->data = i + 2;
        p2->next = p1;
        p2 = p1;
    }
    p2->next = NULL;
    return head;
}

Node* adjust(Node* head, int i, int m) {
    int j;
    Node* p = head;
    if (i == 0) {
        return head;
    }
    for (j = 0; j < i - 1; j++) {
        p = p->next;
    }
   
    Node* q = p->next;
    p->next = q->next;
    q->next = head;
    head = q;
    return head;
}

void print(Node* head) {
    int i;
    Node* p = head;
    for (i = 0; i < 9; i++) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d\n", p->data);
}

int main()
{
    Node* head = create();
    Node* p = head;
    print(head);
    int i, m;
    
    while (scanf("%d", &m) == 1) {
        i = 0;
        while (p) {
            if (p->data == m) {
                head = adjust(head, i, m);
                break;
            }
            else {
                p = p->next;
                i++;
            }
        }
        if (i == 10) {
            printf("can't find!\n");
        }
        else {
            print(head);
        }
    }
    return 0;
}