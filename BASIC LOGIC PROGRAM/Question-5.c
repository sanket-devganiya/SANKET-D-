//Find Area of Cube formula : A = 6a2 


#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the length of the side of the cube: ");
    scanf("%f", &side);

    
    area = 6 * side * side;

    
    printf("The surface area of the cube is: %.2f\n", area);

    return 0;
}
