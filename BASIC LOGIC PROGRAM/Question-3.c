//WAP to Find Area And Circumference of Circle

#include <stdio.h>


#include <math.h> 

int main() {
    double radius, area, circumference;




    printf("Enter the radius of the circle: ");

    scanf("%lf", &radius);



    area = M_PI * radius * radius;

    circumference = 2 * M_PI * radius;


    printf("Area: %.2lf\n", area);

    printf("Circumference: %.2lf\n", circumference);

    return 0;
}
