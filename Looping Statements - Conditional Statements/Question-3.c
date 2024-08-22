//WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd number//s



#include <stdio.h>

int main() {
    int numbers[10];
    
    int count_even = 0, count_odd = 0;


    int sum_even = 0, sum_odd = 0;


    for (int i = 0; i < 10; i++)
    
     {
        printf("Enter number %d: ", i + 1);

        scanf("%d", &numbers[i]);
    }

    
    for (int i = 0; i < 10; i++) 
    
    {
        if (numbers[i] % 2 == 0) 
        
        {
            count_even++;
            sum_even += numbers[i];
        } else
        
         {
            count_odd++;
            sum_odd += numbers[i];
        }
    }

    
    printf("Number of even numbers: %d\n", count_even);
    printf("Number of odd numbers: %d\n", count_odd);
    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
