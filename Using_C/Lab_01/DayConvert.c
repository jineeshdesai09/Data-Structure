//DayConvert
#include <stdio.h>

int main()
{
    int totalDays, years, weeks, days;

    printf("Enter the number of days: ");
    scanf("%d", &totalDays);

    years = totalDays /365;
    weeks = (totalDays % 365) /7;
    days = totalDays %7;

    printf("%d days = %d years, %d weeks, and %d days", totalDays, years, weeks, days);

    return 0;
}
