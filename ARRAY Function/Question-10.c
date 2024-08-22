//WAP to perform Palindrome number using for loop and function


#include <stdio.h>


int isPalindrome(int num)

 {
    int original = num;


    int reversed = 0;


    for (; num != 0; num /= 10) 
    
    {
        reversed = reversed * 10 + num % 10;
    }


    return (reversed == original);
}

int main() 

{
    int number;

    
    printf("Enter a number: ");

    scanf("%d", &number);


    if (isPalindrome(number))
    
     {
        printf("%d is a palindrome.\n", number);


    } else
     {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
