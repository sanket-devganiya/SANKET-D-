//Write a program in C to combine two strings manually


#include <stdio.h>

void combineStrings(char *dest, const char *src1, const char *src2) 

{
    while (*src1) 
    
    {
        *dest++ = *src1++;
    }
    while (*src2) 
    
    {
        *dest++ = *src2++;
    }
    *dest = '\0';
}

int main() 

{
    char str1[] = "sanket, ";

    char str2[] = "devganiya!";


    char result[50]; 
    
    combineStrings(result, str1, str2);


    printf("%s\n", result);


    return 0;
}
