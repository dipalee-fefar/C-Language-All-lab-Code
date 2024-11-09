#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time
    time_t current_time;
    time(&current_time);

    // Convert the current time to string format
    char* time_string = ctime(&current_time);

    // Display the current date and time
    printf("Current Date & Time: %s", time_string);

    return 0;
}

