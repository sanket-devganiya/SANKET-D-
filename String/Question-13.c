 //Write a program in C to remove characters from a string except alphabets.



 #include <stdio.h>

#include <ctype.h>

void removeNonAlpha(char *str) 

{
    char *src = str, *dst = str;
    while (*src) {
        if (isalpha((unsigned char)*src))
        
        
         {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

int main() 

{
    char str[] = "sanket, devganiya prajapati! 123";

    removeNonAlpha(str);

    printf("%s\n", str);

    return 0;
}
