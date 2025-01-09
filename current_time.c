#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *localTime;

    // Get the current time
    currentTime = time(NULL);

    // Convert to local time format
    localTime = localtime(&currentTime);

    int hour = localTime->tm_hour;   // Current hour (0-23)
    int minute = localTime->tm_min; // Current minute (0-59)

    printf("Current time: %02d:%02d\n", hour, minute);

    return 0;
}
