#include <stdio.h>

struct Student {
    int rollNo;
    char name[20];
    float mark;
};

int main() {
    struct Student s = {23, "Aathil", 85.5};

    printf("Roll Number = %d\n", s.rollNo);
    printf("Name = %s\n", s.name);
    printf("Mark = %.1f\n", s.mark);

    return 0;
}