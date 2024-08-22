//.Accept 2 numbers and find out its sum check it size


#include <stdio.h>

int main() {
    int num1, num2, sum;


    printf("Enter two numbers: ");


    scanf("%d %d", &num1, &num2);


    sum = num1 + num2;

    printf("Sum: %d\n", sum);


    printf("Size of sum: %zu bytes\n", sizeof(sum));

    return 0;
}
