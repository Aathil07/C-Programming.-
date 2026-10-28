#include <stdio.h>

union Data {
    int number;
    float value;
    char ch;
};

int main() {
    union Data d;

    d.number = 100;

    printf("Number = %d\n", d.number);

    return 0;
}