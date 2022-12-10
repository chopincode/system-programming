#include <stdio.h>
#include <stdlib.h>

extern char** environ;

int main() {
    char** ptr = environ;

    while(*ptr) {
        printf("%s\n", *ptr);
        ptr++;
    }

    char* secret = getenv("SECRET");
    printf("The secret is %s\n", secret);
    char* dummy_secret = getenv("DUMMY_SECRET");
    printf("Invalid dummy secret is %s\n", dummy_secret);
    return 0;
}