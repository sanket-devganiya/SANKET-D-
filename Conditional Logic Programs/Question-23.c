//Accept month number and display month name

 #include <stdio.h>

int main() {
    int monthNumber;

    
    printf("Enter the month number (1-12): ");
    
    scanf("%d", &monthNumber);

    // Array of month names
    const char *months[] =
    
     {
        "Invalid", "January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October", "November", "December"
    };


    if (monthNumber >= 1 && monthNumber <= 12)
    
     {
        printf("%s\n", months[monthNumber]);
    } else 
    
    {
        printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }

    return 0;
}
