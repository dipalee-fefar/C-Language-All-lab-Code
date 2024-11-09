#include <stdio.h>
#include <stdlib.h>

int main() {
    char choice;
    
    printf("Do you want to shutdown your computer (y/n)? ");
    scanf("%c", &choice);

    if (choice == 'y' || choice == 'Y') {
        // For Windows
        #ifdef _WIN32
            system("shutdown /s /t 0");
        #endif

        // For Linux
        #ifdef __linux__
            system("shutdown now");
        #endif
    }

    return 0;
}

