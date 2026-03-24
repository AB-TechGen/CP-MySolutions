/* 
What all Standard Boilerplate Codes are available here?

1) Array Handling - Take input from user, show on terminal etc
2) Linked List basics - insertionAtEnd, insertionAtBeginning, deletion, traversal
3) Some useful functions
*/

#include <stdio.h>
#include <stdlib.h>

// Standard Array Handling Boilerplate //
void getArray(int* A, int n) {
    printf("Enter the array (space separated): ");
    for (int i=0; i<n; i++) scanf("%d", &A[i]);
}

void printArray(int* A, int n) {
    printf("Array: ");
    for (int i=0; i<n; i++) printf("%d ", A[i]);
    printf("\n");
};

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int *A = (int* )malloc(n*sizeof(int));
    getArray(A, n);
    printf("Original "); printArray(A, n);

    return 0;
}

// // // Standard Linked List Boilerplate // // // 
struct node {
    int data;
    struct node* next;
};

struct LL {
    struct node* head;
};

void prepend2LL(struct LL* L, int data) {
    struct node* newNode = (struct node* )malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = L->head;
    L->head = newNode;
};

void append2LL(struct LL* L, int data) {
    struct node* newNode = (struct node* )malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    struct node* ptr = L->head;
    if (ptr == NULL) {
        L->head = newNode;
        return;
    }
    while (ptr->next != NULL) ptr = ptr->next;
    ptr->next = newNode;
}

void printLL(struct LL* L) {
    struct node* ptr = L->head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
}

// // // Some useful functions // // //
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}