#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


Node* arrayToLinkedList(int arr[], int n) {
    if (n == 0) return NULL;
    Node* head = createNode(arr[0]);
    Node* current = head;
    for (int i = 1; i < n; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }
    return head;
}


void removeDuplicates(Node* head) {
    Node* current = head;
    while (current != NULL && current->next != NULL) {
        Node* runner = current;
        while (runner->next != NULL) {
            if (runner->next->data == current->data) {
                Node* temp = runner->next;
                runner->next = runner->next->next;
                free(temp);
            }
            else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int A[] = { 1, 2, 2, 3, 4, 4, 5 };
    int n = sizeof(A) / sizeof(A[0]);


    Node* head = arrayToLinkedList(A, n);

    printf("Original list: ");
    printList(head);


    removeDuplicates(head);

    printf("List after removing duplicates: ");
    printList(head);


    freeList(head);

    return 0;
}