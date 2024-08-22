// Convert days into months

 
#include <stdio.h>


int daysToMonths(int days) {

    const int daysPerMonth = 30;

    return days / daysPerMonth;
}

int main() {
    int days;

    printf("Enter the number of days: ");


    scanf("%d", &days);

    int months = daysToMonths(days);


    printf("%d days is approximately %d months.\n", days, months);

    return 0;
}
