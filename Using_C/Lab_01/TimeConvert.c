//TimeConvert
#include <stdio.h>

int main() {

    int total_seconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    // printf("%d hours %d minutes %d seconds\n", hours, minutes, seconds);

    return 0;
}