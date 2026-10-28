#include <stdio.h>

int main() {
    unsigned char reg = 0;

    reg |= (1 << 3);
    printf("After setting bit 3 = %u\n", reg);

    reg &= ~(1 << 3);
    printf("After clearing bit 3 = %u\n", reg);

    reg ^= (1 << 2);
    printf("After toggling bit 2 = %u\n", reg);

    return 0;
}