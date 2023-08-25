#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);
    int m = current_time->tm_mon + 1;
    int dow = (current_time->tm_wday + 7 - (current_time->tm_mday - 1) % 7) % 7;

    char *dayNames[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    printf("Current date: %02d-%02d-%d\n\n", current_time->tm_mday, m, current_time->tm_year + 1900);
    printf("First day of the month: %s\n\n",dayNames[dow-1]);

    int zimax = 31;
    if (m == 2)
        zimax = 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        zimax = 30;

    int zi = 0;

    printf("L  M  M  J  V  S  D\n");

    for (int r = 0; r < 6; r++)
    {
        for (int c = 1; c <= 7; c++)
        {
            if (c == dow && zi == 0)
                zi = 1;
            if (zi > zimax)
            {
                r = 6;
                break;
            }
            if (zi)
                printf("%-3d", zi++);
            else
                printf("   ");
        }
        printf("\n");
    }

    return 0;
}
