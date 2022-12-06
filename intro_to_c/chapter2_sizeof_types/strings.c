#include <stdio.h>
#include <string.h>

int main() {
    // C string contains another \0 at end of string
    printf("Size of hello is %lu\n", sizeof("hello"));

    // to find this special \0 char
    char* ptr = "hello";
    int len = strlen(ptr);
    int count = 0;
    while (*ptr) {
        printf("%c", *ptr);
        ptr++;
        count++;
    }
    printf("Characters we found: %d\n", count);

    printf("Using strlen to find string length: %d\n", len);
}