#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "DigitalClock.h"

int main()
{
    time_t currentTime = time(NULL);
    struct tm *localTime = localtime(&currentTime);

    // Extract hours, minutes, and seconds
    int hours = localTime->tm_hour;
    int minutes = localTime->tm_min;
    int seconds = localTime->tm_sec;

    // Print the digital clock
    printClock(hours, minutes, seconds);

    // Wait for one second
    sleep(1);
    return 0;
}



