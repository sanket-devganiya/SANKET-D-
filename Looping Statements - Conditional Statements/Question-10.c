//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)




#include <stdio.h>

int main() {
    int number, original_number, first_digit, last_digit;

    
    printf("Enter a number: ");


    scanf("%d", &number);

    
    original_number = number;

    
    if (number < 0) 
    
    {
        number = -number;
    }


    last_digit = number % 10;

    
    while (number >= 10)
    
     {
        number /= 10;
    }
    first_digit = number;


    int sum = first_digit + last_digit;

    
    if (original_number < 0)
    
     {
        sum = -sum;

    }

    
    printf("Summation of first and last digit is %d\n", sum);

    return 0;
}
