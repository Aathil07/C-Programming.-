#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Red");
            break;
        case 2:
            printf("Green");
            break;
        case 3:
            printf("Blue");
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}