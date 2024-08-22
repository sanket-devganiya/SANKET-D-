//Find circumference of Triangle formula : triangle = a + b + c 


#include <stdio.h>

int main() {
    float a, b, c, perimeter;

    
    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");

    scanf("%f", &b);

    printf("Enter the length of side c: ");

    scanf("%f", &c);

     
    perimeter = a + b + c;

    printf("The perimeter of the triangle is: %.2f\n", perimeter);

    return 0;
}