// Write a program in C to count the total number of alphabets, digits and special
//characters in a string.



 #include <stdio.h>


#include <ctype.h>

void countCharacters(const char *str, int *alphabets,

 int *digits, int *specials)

 {
    *alphabets = 0;


    *digits = 0;


    *specials = 0;

    while (*str)
    
     {
        if (isalpha(*str))
        
        
         {
            (*alphabets)++;
        } else if (isdigit(*str)) 
        
        
        {
            (*digits)++;
        } else if (!isspace(*str)) 
        
        
        {
            (*specials)++;
        }
        str++;
    }
}

int main() 


{
    char str[] = "sanket devganiya **** 123456";
    int alphabets, digits, specials;

    countCharacters(str, &alphabets, &digits, &specials);

    printf("Alphabets: %d\n", alphabets);


    printf("Digits: %d\n", digits);


    printf("Special characters: %d\n", specials);

    return 0;
}
