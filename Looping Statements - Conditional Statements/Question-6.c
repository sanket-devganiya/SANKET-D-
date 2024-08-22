//WAP to print Fibonacci series up to given numbers



#include <stdio.h>

int main()

 {
    int limit;
    int a = 0, b = 1, next;

    
    printf("Enter the upper limit for Fibonacci series: ");


    scanf("%d", &limit);

    
    printf("Fibonacci series up to %d:\n", limit);

    
    if (limit >= 0) printf("%d ", a);


    if (limit >= 1) printf("%d ", b);

    while (1) 
    
    {
        next = a + b;
        if (next > limit) break;
        printf("%d ", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
