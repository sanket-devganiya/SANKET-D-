//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)



#include <stdio.h>

int main() 

{
    int number, max_digit = -1;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 0) 
    
    {
        number = -number;
    }

    
    while (number > 0)
    
     {
        int digit = number % 10; 
        if (digit > max_digit)
        
         {
            max_digit = digit;  
        }
        number /= 10;  
    }

    
    printf("Max digit is %d\n", max_digit);

    return 0;
}
