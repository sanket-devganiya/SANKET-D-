//Accept the input month number and print number of days in that month. 


#include <stdio.h>

int main() {
    int monthNumber;

    
    printf("Enter the month number (1-12): ");
    
    scanf("%d", &monthNumber);

    
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    
    if (monthNumber >= 1 && monthNumber <= 12)
    
     {
        int days = daysInMonth[monthNumber];
        
        if (monthNumber == 2)
        
         {
        
            printf("Number of days in February: %d\n", days);
        } else 
        
        {
            printf("Number of days in month %d: %d\n", monthNumber, days);
        }
    } else
    
     {
        printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }

    return 0;
}
