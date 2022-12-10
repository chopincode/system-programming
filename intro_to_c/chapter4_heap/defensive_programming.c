#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char* key;
    char* value;
    struct node* next;
};

typedef struct node node_t;

node_t* node_create(char* key, char* value) {
    printf("Creating node %s -> %s", key, value);
    node_t* node = (node_t*)malloc(sizeof(node_t));

    node-> key = key;
    node -> value = value;
    return node;
}

void node_destroy(node_t* p) {
    free(p->key);
    free(p->value);
    memset(p, 0, sizeof(node_t));
    free(p);
}