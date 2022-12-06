#include <limits.h>
#include <stdio.h>

int main() {
    printf("Hello C data types\n");
    printf("size of integer: %lu\n", sizeof(int));
    printf("Int min %d\n", INT_MIN);
    printf("Int max %d\n", INT_MAX);

    printf("char is %d bits\n", CHAR_BIT);

    return 0;
}