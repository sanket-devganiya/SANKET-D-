//Write a program in C to extract a substring from a given string 
 

 #include <stdio.h>

void extractSubstring(const char *src, int start, int length, char *dest)

 {
    int i;
    for (i = 0; i < length && src[start + i] != '\0'; i++)
    
    
     {
        dest[i] = src[start + i];
    }
    dest[i] = '\0'; 
}

int main() {
    char str[] = "Hello, World!";


    char substr[50]; 

    int start = 7;


    int length = 5;

    extractSubstring(str, start, length, substr);

    printf("Original string: %s\n", str);


    printf("Extracted substring: %s\n", substr);

    return 0;
}
