//Write a program in C to compare two strings without using string library
//functions.


#include <stdio.h>

int compareStrings(const char *str1, const char *str2)

 {
    while (*str1 && (*str1 == *str2))
    
     {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    
    int result = compareStrings(str1, str2);
    
    if (result == 0) 
    
    {
        printf("The strings are equal.\n");


    } else if (result < 0)
    
     {
        printf("The first string is less than the second.\n");
    } else
    
     {
        printf("The first string is greater than the second.\n");
    }

    return 0;
}
