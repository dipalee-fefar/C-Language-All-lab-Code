#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    int last_digit = number % 10;

    if (last_digit % 2 == 0) {
        printf("The last digit %d is even.\n", last_digit);
    } else {
        printf("The last digit %d is odd.\n", last_digit);
    }
	 return 0;
}

