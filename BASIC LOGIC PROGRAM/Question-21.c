//.Accept 2 numbers from user and swap 2 numbers with using 3rd variableand without using 3rd variable#include <stdio.h>
 


    #include <stdio.h>

    int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

 
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}