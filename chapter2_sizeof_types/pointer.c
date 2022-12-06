#include <stdio.h>

int main() {
    int data[8];
    printf("data is at %p\n", data);
    printf("data + 1 is at %p\n", data + 1);
    printf("data + 2 is at %p\n", data + 2);

    *(data) = 100;
    *(data + 1) = 101;
    *(data + 2) = 102;

    data[3] = 103;
    data[4] = 104;

    for (int i = 0; i < 5; i++) {
        printf("Using pointer deference: %d\n", *(data + i));
        printf("Using [] to access data: %d\n", data[i]);
        printf("------------------------------\n");
    }

    return 0;
}