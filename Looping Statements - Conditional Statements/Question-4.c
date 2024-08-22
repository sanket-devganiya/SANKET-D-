//WAP to print table up to given numbers


#include <stdio.h>

int main() 

{
    int n;


    printf("Enter the maximum number for the table: ");


    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++)
    
     {
        printf("Table for %d:\n", i);
        for (int j = 1; j <= 10; j++)
        
         {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

    return 0;
}
