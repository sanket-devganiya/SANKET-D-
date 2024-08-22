//Write a program in C to copy one string to another string.



#include <stdio.h>

void copyString(char *dest, const char *src)

 {
    while (*src)
    
     {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; 
}

int main()


 {
    char source[] = "SANKET,DEVGANIYA!";


    char destination[50]; 

    copyString(destination, source);



    printf("Source: %s\n", source);


    printf("Destination: %s\n", destination);

    return 0;
}
