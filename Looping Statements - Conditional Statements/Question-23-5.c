//C Program to Reverse a Number Using FOR Loop
//1 2 3 6 9 18 27 54...

#include <stdio.h>

int main()

 {
    int num, reversed = 0, remainder;
    

    printf("Enter an integer: ");
    
    scanf("%d", &num);
    

    for (; num != 0; num /= 10) 
    
    {
        remainder = num % 10;

        reversed = reversed * 10 + remainder;
    }
    

    printf("Reversed number: %d\n", reversed);
    
    return 0;
}
