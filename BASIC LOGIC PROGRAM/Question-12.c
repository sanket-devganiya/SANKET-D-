//Accept number of students from user. I need to give 5 apples to eachstudent. How many apples are required?

#include <stdio.h>

int main()

 {
    int students, apples;



    printf("Enter the number of students: ");

    
    scanf("%d", &students);

    apples = students * 5;

    printf("The total number of apples required is: %d\n", apples);

    return 0;
}