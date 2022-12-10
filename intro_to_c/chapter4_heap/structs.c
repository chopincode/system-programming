#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};

typedef struct node node_t;

int main() {
    node_t* ptr1 = (node_t*)malloc(sizeof(node_t));
    node_t* ptr2 = (node_t*)malloc(sizeof(node_t));
    ptr1->value = 42;
    ptr2->value=43;
    ptr1->next = ptr2;
    ptr2->next = NULL;

    free(ptr1);
    free(ptr2);
    return 0;
}