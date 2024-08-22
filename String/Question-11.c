//Write a program in C to read a sentence and replace lowercase characters with
//uppercase and vice versa



#include <stdio.h>


#include <ctype.h>

void swapCase(char *str)

 {
    while (*str)
    
     {
        if (islower(*str))
        
         {
            *str = toupper(*str);
        } else if (isupper(*str))
        
         {
            *str = tolower(*str);
        }
        str++;
    }
}

int main() 

{
    char str[100]; 

    printf("Enter a sentence: ");


    fgets(str, sizeof(str), stdin); 

    swapCase(str);

    printf("Modified sentence: %s", str);

    return 0;
}
