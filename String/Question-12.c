//Write a program in C to find the number of times a given word 'is' appears in
//the given string.


#include <stdio.h>
#include <string.h>

int countOccurrences(const char *str, const char *word)

 {
    int count = 0;


    const char *pos = str;


    while ((pos = strstr(pos, word)) != NULL)
    
     {
        count++;
        pos += strlen(word); 
    }

    return count;
}

int main()

 {
    char str[] = "This is a simple test. Is this program working? Yes, it is!";


    const char *word = "is";

    
    int count = countOccurrences(str, word);

    
    printf("The word '%s' appears %d times.\n", word, count);


    return 0;
}
