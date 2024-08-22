//WAP to calculate swap 2 numbers with using of multiplication and division.


#include <stdio.h>

int main() 

{
    int a, b;

    printf("Enter two numbers: ");

    scanf("%d %d", &a, &b);

    a = a * b; 

    b = a / b; 

    a = a / b;   

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}