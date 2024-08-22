//.Calculate 5 numbers from user and calculate number of even and odd usingof while 



#include <stdio.h>

int main()

 {
    int i = 0;

    int number;

    int evenCount = 0;

    int oddCount = 0;

    while (i < 5) 
    
    {
        printf("Enter number %d: ", i + 1);

        scanf("%d", &number);

        if (number % 2 == 0)
         {
            evenCount++;
        } else
        
         {
            oddCount++;
        }

        i++;
    }

    printf("Number of even numbers: %d\n", evenCount);

    
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}
