// Find ascii value of given number



#include <stdio.h>

int main() {
    int ascii_value;
    char character;


    printf("enter charectar: ");
    scanf("%c", &character); 

     ascii_value = (int)character;

     printf("THE ASCII VALUE OF %c IS %d\n", character, ascii_value);
     
}


