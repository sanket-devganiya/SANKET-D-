//WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746



#include <stdio.h>

int main() 
{
    int number, reversed = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    while (number != 0)
    
     {
        int digit = number % 10;  
        reversed = reversed * 10 + digit;  
        number /= 10;  
    }


    printf("Reversed number: %d\n", reversed);

    return 0;
}
