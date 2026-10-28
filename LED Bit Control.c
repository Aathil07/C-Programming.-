#include <stdio.h>

int main() {
    unsigned char PORT = 0x00;

    PORT |= (1 << 0);
    printf("LED ON: PORT = 0x%02X\n", PORT);

    PORT &= ~(1 << 0);
    printf("LED OFF: PORT = 0x%02X\n", PORT);

    PORT ^= (1 << 0);
    printf("LED TOGGLED: PORT = 0x%02X\n", PORT);

    return 0;
}