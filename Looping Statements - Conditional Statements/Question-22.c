// Accept 3 numbers from user using while loop and check each numbers palindrome


#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num, remainder;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int num, count = 0;
    
    while (count < 3) 
    
    {
        printf("Enter number %d: ", count + 1);

        
        scanf("%d", &num);
        
        if (isPalindrome(num))
        
         {
            printf("%d is a palindrome.\n", num);
        } else 
        
        {
            printf("%d is not a palindrome.\n", num);
        }
        
        count++;
    }
    
    return 0;
}