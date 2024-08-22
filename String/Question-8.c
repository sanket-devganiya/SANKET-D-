//Write a program in C to count the total number of vowels or consonants in a string.



#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants

(const char *str, int *vowels, int *consonants)

 {
    *vowels = 0;

    *consonants = 0;

    while (*str) 
    
    {
        char ch = tolower(*str);


        if (ch >= 'a' && ch <= 'z')
        
         {
            if (ch == 'a' || ch == 'e' || ch == 'i'
            
                        || ch == 'o' || ch == 'u')
            
            
             {
                (*vowels)++;
            } else
            
            
             {
                (*consonants)++;
            }
        }
        str++;
    }
}

int main() 


{
    char str[] = "sanet , devganiya !";


    int vowels, consonants;


    countVowelsAndConsonants(str, &vowels, &consonants);


    printf("Vowels: %d\n", vowels);


    printf("Consonants: %d\n", consonants);

    return 0;

}
