#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    mode_t mode = S_IRUSR | S_IWUSR;
    // We would like to create a new file and truncate the file if it already exists
    // We also want to specify the mode of the file, aka, who can access to it.
    int fd = open("output.txt", O_CREAT | O_TRUNC | O_RDWR, mode);

    write(fd, "Great!\n", 7);
    close(fd);
}