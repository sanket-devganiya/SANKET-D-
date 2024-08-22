//Find circumference of Rectangle formula : C = 4 * a 

#include <stdio.h>

int main() {
    float width, length, perimeter;

    printf("Enter the width of the rectangle: ");

    scanf("%f", &width);

    printf("Enter the length of the rectangle: ");

    scanf("%f", &length);

    perimeter = 2 * (width + length);

    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
