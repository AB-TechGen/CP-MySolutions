#include <stdio.h>
#include <stdlib.h>

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

// 19:38
void middleLL(struct LL* l) {
    struct node* ptr1 = l->head;
    struct node* ptr2 = l->head;
    int count = 0;
    while (ptr1 != NULL) {
        count += 1;
        if (count % 2 == 0) ptr2 = ptr2->next;
        ptr1 = ptr1->next;
    }
    
    printf("Middle node: %d and total nodes: %d", ptr2->data, count);
};

int main() {
    struct LL* L = (struct LL*)malloc(sizeof(struct LL));
    L->head = NULL;

    prepend2LL(L, 5);
    prepend2LL(L, 10);
    prepend2LL(L, 11);
    middleLL(L);

    return 0;
}