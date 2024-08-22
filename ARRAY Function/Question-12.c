//WAP to accept 5 students name and store it in array

 #include <stdio.h>

#define NUM_STUDENTS 5
#define MAX_NAME_LENGTH 50

int main() 

{
    char names[NUM_STUDENTS][MAX_NAME_LENGTH];


    printf("%d sanket devganiya :\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++)
    
     {
        printf("Student %d: ", i + 1);


        fgets(names[i], MAX_NAME_LENGTH, stdin);
        
    
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    
    printf("\nsamarth devganiya :\n");


    for (int i = 0; i < NUM_STUDENTS; i++) 
    
    {
        printf("Student %d: %s\n", i + 1, names[i]);
    }

    return 0;
}
