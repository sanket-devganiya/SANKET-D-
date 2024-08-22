//Write a program in C to separate individual characters from a string.


#include <stdio.h>

int main()

 {
    char str[] = "1 2 3 4 5 6 7 8 9!";

    int i = 0;

    printf("The characters in the string are:\n");


    while (str[i] != '\0') 
    
    {
        printf("%c\n", str[i]);

        i++;
    }

    return 0;
}
