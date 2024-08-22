//Accept 5 expense from user and find average of expense


#include <stdio.h>

int main() {
    float expenses[5];

    float sum = 0.0;
    
    float average;

    
    printf("Enter 5 expenses:\n");


    for (int i = 0; i < 5; i++) {


        printf("Expense %d: ", i + 1);


        scanf("%f", &expenses[i]);


        sum += expenses[i];
    }

    
    average = sum / 5;

    
    printf("Average expense: %.2f\n", average);



    return 0;
}
