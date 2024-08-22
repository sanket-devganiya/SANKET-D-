//WAP to convert years into days and days into years



#include <stdio.h>

#define DAYS_PER_YEAR 365


int yearsToDays(int years) {
    return years * DAYS_PER_YEAR;
}


float daysToYears(int days) {
    return (float)days / DAYS_PER_YEAR;
}

int main() {
    int years, days;
    float convertedYears;

    printf("Enter the number of years to convert to days: ");
    scanf("%d", &years);
    days = yearsToDays(years);
    printf("%d years is approximately %d days.\n", years, days);


    printf("Enter the number of days to convert to years: ");
    scanf("%d", &days);
    convertedYears = daysToYears(days);
    printf("%d days is approximately %.2f years.\n", days, convertedYears);

    return 0;
}
