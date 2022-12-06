#include <unistd.h>

int main() {
    int count;
    // In C, there is no type of boolean. Any integer values that are not 0 are considered
    // as true values.
    for(count = 5; count; count--) {
        // for file descriptor, 0 for stdin, 1 for stdout, 2 for stderr
        write(STDOUT_FILENO, "Hello\n", 6);
        write(STDERR_FILENO, ".", 1);
    }

    return 0;
}