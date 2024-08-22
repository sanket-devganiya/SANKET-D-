//C Program to Reverse a Number Using FOR Loop  Series Program:

//1 + 2 + 3 + 4 + 5 + ... + n



#include <stdio.h>

int main()

 {
    int n, sum = 0;

    printf("Enter a positive integer: ");


    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    
     {
        sum += i;
    }

    printf("Sum of first %d natural numbers: %d\n", n, sum);


    return 0;
}
