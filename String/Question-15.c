// Write a program in C to find the largest and smallest words in a string. 


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LEN 100


#define MAX_STR_LEN 1000


void findLargestSmallestWords(const char *str, char *largest, char *smallest)

 {
    char word[MAX_WORD_LEN];


    int len = 0;


    int largestLen = 0, smallestLen = MAX_WORD_LEN;
    
    while (*str)
    
    
     {
        if (isalpha(*str))
        
        
         {
            word[len++] = *str;


        } else if (len > 0) 
        
        {
            word[len] = '\0';


            if (len > largestLen) 
            
            
            {
                largestLen = len;


                strcpy(largest, word);
            }
            if (len < smallestLen)
            
             {
                smallestLen = len;


                strcpy(smallest, word);
            }

            len = 0;

        }

        str++;
    }
    

    if (len > 0)
    
     { 
        word[len] = '\0';


        if (len > largestLen)
        
         {
            largestLen = len;


            strcpy(largest, word);
        }


        if (len < smallestLen) 
        
        {

            smallestLen = len;

            
            strcpy(smallest, word);
        }
    }
}

int main()

 {
    char str[MAX_STR_LEN] = "Find the largest and smallest words in this example.";


    char largest[MAX_WORD_LEN], smallest[MAX_WORD_LEN];
    
    findLargestSmallestWords(str, largest, smallest);
    
    printf("Largest word: %s\n", largest);


    printf("Smallest word: %s\n", smallest);
    
    return 0;
}
