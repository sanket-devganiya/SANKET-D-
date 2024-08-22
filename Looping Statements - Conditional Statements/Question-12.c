//Program of Armstrong Number in C Using For Loop & While Loop


#include <stdio.h>
#include <math.h>

int main()

 {
    int num, originalNum, sum = 0, digit, n = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    
    for (int temp = num; temp != 0; temp /= 10) 
    
    {
        n++;
    }

    
    for (int temp = num; temp != 0; temp /= 10)
    
     {
        digit = temp % 10;
        sum += pow(digit, n);
    }

    
    if (sum == originalNum) 
    
    {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
