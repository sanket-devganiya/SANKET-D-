//.Calculate sum of 10 numbers using of while loop


#include <stdio.h>

int main()

 {
    int i = 0;
    int number;
    int sum = 0;

    while (i < 10)
    
     {
        printf("Enter number %d: ", i + 1);
        
        scanf("%d", &number);

        sum += number;
        i++;
    }

    printf("The sum of the 10 numbers is: %d\n", sum);

    return 0;
}
