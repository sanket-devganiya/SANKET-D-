// Accept 5 names from user at run time.#include <stdio.h>
 


 #include <stdio.h>

#define MAX_NAME_LENGTH 100
#define NUM_NAMES 5

int main() {
    char names[NUM_NAMES][MAX_NAME_LENGTH];
    int i;

    
    printf("Please enter %d names:\n", NUM_NAMES);


    for (i = 0; i < NUM_NAMES; i++) 
    
    {
        printf("Name %d: ", i + 1);

        fgets(names[i], MAX_NAME_LENGTH, stdin);
        
        
        size_t len = strlen(names[i]);

        if (len > 0 && names[i][len - 1] == '\n')
        
         {
            names[i][len - 1] = '\0';
        }
    }


    printf("\nYou entered the following names:\n");


    for (i = 0; i < NUM_NAMES; i++) 
    
    {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}
