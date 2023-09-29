#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_current_time(int *hour, int *minute, int *second) {
    time_t current_time;
    struct tm *time_info;
    time(&current_time);
    time_info = localtime(&current_time);
    *hour = time_info->tm_hour;
    *minute = time_info->tm_min;
    *second = time_info->tm_sec;
}

void draw_clock(int hour, int minute, int second) {
    printf("Current time: %02d:%02d:%02d\n", hour, minute, second);
}

void main() {
    int hour, minute, second;
    while (1) {
        get_current_time(&hour, &minute, &second);
        system("cls");
        draw_clock(hour, minute, second);
        sleep(1);
    }
}

