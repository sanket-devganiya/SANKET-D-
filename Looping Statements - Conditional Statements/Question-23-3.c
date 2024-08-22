//C Program to Reverse a Number Using FOR Loop . 
//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)








#include <stdio.h>

int main()

 {
    int n, totalSum = 10;

    printf("Enter a positive integer: ");


    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    
    {
        int sum = 10;

        for (int j = 1; j <= i; j++) 
        
        {
            sum += j;
        }
        totalSum += sum;
    }

    printf("The result of the series is: %d\n", totalSum);
    return 0;
}


