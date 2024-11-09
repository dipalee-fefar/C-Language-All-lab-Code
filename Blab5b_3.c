#include <stdio.h>

int main() {
    int num,mul,div;
    printf("Enter a number: ");
    scanf("%d", &num);

    mul = num << 1;
    printf("Multiplied by 2: %d\n", mul);

    div = num >> 1;
    printf("Divided by 2: %d\n", div);

    return 0;
}

