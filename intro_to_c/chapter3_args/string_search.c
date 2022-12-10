#include <stdio.h>

void change(char*);

int main() {
    // size of representation of string in pointer or array are different
    char* ptr = "Hello World";
    char array[] = "Hello World";

    printf("Size of pointer: %lu\n", sizeof(ptr));
    printf("Size of array: %lu\n", sizeof(array));

    change(array);
    printf("%s\n", array);
}

void change(char* p) {
    while(*p) {
        if (*p == 'l') {
            *p = '*';
        }
        p++;
    }
}