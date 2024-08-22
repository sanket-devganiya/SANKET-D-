// WAP to accept the height of a person in centimeters and categorize the
// according to their height.

#include <stdio.h>

int main()

 {
    int height;

    
    printf("Enter height in centimeters: ");


    scanf("%d", &height);

    
    if (height < 150)
    
     {
        printf("Short\n");
    } else if (height <= 180) 
    
    {
        printf("Average\n");
    } else
    
     {
        printf("Tall\n");
    }

    return 0;
}
