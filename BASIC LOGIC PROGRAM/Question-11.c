//.Find circumference of square formula : C = 4 * a


#include <stdio.h>


int main()

 {
    float a, c;



    printf("Enter the length of the side of the square: ");

    scanf("%f", &a);

    c = 4 * a;

    printf("The circumference of the square is: %.2f\n", c);


    return 0;
}


