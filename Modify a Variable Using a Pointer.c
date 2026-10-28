#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Before modification = %d\n", x);

    *ptr = 20;

    printf("After modification = %d\n", x);

    return 0;
}