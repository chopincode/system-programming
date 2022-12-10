#include <stdio.h>

// argc -> number of argument
// argv -> an array of argument values
int main(int argc, char* argv[]) {
    printf("argv[0] = %s\n", argv[0]);
    printf("argv[argc] = %p\n", argv[argc]);
    printf("argc = %d\n", argc);

    for(int count = 1; count < argc; count++) {
        printf("%d: %s\n", count, argv[count]);
    }
    return 0;
}