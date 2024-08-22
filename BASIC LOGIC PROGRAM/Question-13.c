//Find character value from ascii
 

 #include <stdio.h>

 int main ()
 {

        int ascii_value;
        char character;

        printf("enter the ascii value:");
        scanf("%d", &ascii_value);

        character = (char)ascii_value;

        printf("the character for ascii_value %d is %c\n", ascii_value, character);


 }

