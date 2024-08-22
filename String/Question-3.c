//Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>

int main()

 {
    char str[] = "Hello, World!";


    int length = 0;

    
    while (str[length] != '\0')
    
     {
        length++;
    }

    
    printf("The characters in reverse order are:\n");


    for (int i = length - 1; i >= 0; i--)
    
     {
        printf("%c\n", str[i]);
    }

    return 0;
}
