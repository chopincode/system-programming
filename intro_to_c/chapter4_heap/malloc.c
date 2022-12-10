#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* currentTime() {
    char* result = malloc(128);
    if (!result) return result;

    strcpy(result, "6:36 pm");
    return result;
}

int main() {
    char* ptr = currentTime();
    printf("%s\n", currentTime());
    free(ptr);
    return 0;
}