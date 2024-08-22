//Write a program in C to count the total number of words in a string.


#include <stdio.h>


#include <ctype.h>


int countWords(const char *str)

 {
    int count = 0;


    int inWord = 0;

    while (*str)
    
     {
        if (isspace(*str))
        
         {
            inWord = 0;
        } else if (!inWord)
        
         {
            inWord = 1;
            count++;
        }
        str++;
    }
    
    return count;
}

int main() 

{
    char str[] = "sanket devganiya ";


    int wordCount = countWords(str);


    printf("Total number of words: %d\n", wordCount);


    return 0;
}
