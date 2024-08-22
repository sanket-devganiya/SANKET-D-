//Find area of Rectangle Formula : A=wl 

#include <stdio.h>

int main() {
    float width, length, area;

    printf("Enter the width of the rectangle: ");

    scanf("%f", &width);

    printf("Enter the length of the rectangle: ");


    scanf("%f", &length);

    area = width * length;

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}