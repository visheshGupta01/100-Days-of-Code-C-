#include <stdio.h>

int main()
{
    int time_in_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &time_in_seconds);

    hours = time_in_seconds / 3600;
    time_in_seconds %= 3600;
    minutes = time_in_seconds / 60;
    seconds = time_in_seconds % 60;

    printf("Time in HH:MM:SS format is %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}