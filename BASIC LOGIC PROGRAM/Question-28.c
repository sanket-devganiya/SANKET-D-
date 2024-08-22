//



#include <stdio.h>

void yearsToDaysAndMonths(int years, int *days, int *months)

 {
    
    const int daysPerYear = 365;
    
    const int daysPerMonth = 30;

    
    *days = years * daysPerYear;


    *months = years * 12;
}

int main() 

{
    int years;
    int days, months;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    yearsToDaysAndMonths(years, &days, &months);

    printf("%d years is approximately %d days and %d months.\n", years, days, months);

    return 0;
}



