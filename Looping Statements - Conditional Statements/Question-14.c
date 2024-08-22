//.Accept 5 numbers from user and find those numbers factorials


#include <stdio.h>


int factorial(int n)
 {
    int fact = 1;
    while (n > 0)
    
     {
        fact *= n;
        n--;
    }
    return fact;
}

int main()
 {
    int numbers[5];

    
    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    
     {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }


    printf("\nFactorials of the entered numbers:\n");

    for (int i = 0; i < 5; i++)
    
     {
        printf("Factorial of %d is %d\n", numbers[i], factorial(numbers[i]));
    }

    return 0;
}
