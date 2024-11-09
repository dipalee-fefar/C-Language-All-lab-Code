#include <stdio.h>

void check_number(float num) {
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
}

int main() {
    int choice;
    float num;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Check if a number is positive\n");
        printf("2. Check if a number is negative\n");
        printf("3. Check if a number is zero\n");
        printf("4. Quit\n");

        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%f", &num);
                check_number(num);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%f", &num);
                check_number(num);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%f", &num);
                check_number(num);
                break;
            case 4:
                printf("Prg Exiting.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}