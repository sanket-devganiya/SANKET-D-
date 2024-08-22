//PETTRNS


#include <stdio.h>

int main() 

{
    int i, j;

    
    for(i = 1; i <= 9; i++)
    
     {
        for(j = 1; j <= i; j++)
        
         {
            printf("*");
        }
        printf("\n");
    }

    
    for(i = 8; i >= 1; i--)
    
     {
        for(j = 1; j <= i; j++)
        
         {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}