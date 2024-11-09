#include <stdio.h>

int main() {
    float basic_salary, gross_salary, da, hra;

    
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    
    if (basic_salary >= 30000) {
        da = 0.95 * basic_salary;
        hra = 0.30 * basic_salary;
    } else if (basic_salary >= 20000) {
        da = 0.90 * basic_salary;
        hra = 0.25 * basic_salary;
    } else if (basic_salary >= 10000) {
        da = 0.80 * basic_salary;
        hra = 0.20 * basic_salary;
    } else {
        printf("Invalid basic salary entered.\n");
        return 1; 
    }

    
    gross_salary = basic_salary + da + hra;

    
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("DA: %.2f\n", da);
    printf("HRA: %.2f\n", hra);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}

