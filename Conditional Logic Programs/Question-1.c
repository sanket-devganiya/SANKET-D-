//Write a C program to accept two integers and check whether they are equalor not




#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two integers: ");


    scanf("%d %d", &a, &b);
    
    if (a == b)
    
     {
        printf("The integers are equal.\n");

    } else {
        printf("The integers are not equal.\n");

    }

    return 0;
}
