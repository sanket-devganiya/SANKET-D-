//Write a program in C to find the maximum number of characters in a string

 


 #include <stdio.h>

char findMaxChar(const char *str) 

{
    int count[256] = {0}; 


    char maxChar = '\0';


    int maxCount = 0;

    while (*str)
    
     {
        count[(unsigned char)*str]++;


        if (count[(unsigned char)*str] > maxCount) 
        {
            maxCount = count[(unsigned char)*str];


            maxChar = *str;
        }
        str++;
    }

    return maxChar;
}

int main() {
    char str[] = "Hello,devganiya , sanket !";


    char maxChar = findMaxChar(str);

    printf("The character with the maximum occurrences is: '%c'\n", maxChar);

    return 0;
}
