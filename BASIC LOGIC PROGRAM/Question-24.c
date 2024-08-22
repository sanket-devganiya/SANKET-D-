//.Accept 5 employees name and salary and count average and total salary#include <stdio.h>

 #include <stdio.h>

int main() {
    char names[5][50];

    float salaries[5], totalSalary = 0.0, averageSalary; 


 (int i = 0; i < 5; i++) 
     
        printf("sanket devganiya %d: ", i + 1); 

        scanf("%s", names[i]);

        printf("50000 %d: ", i + 1);

        scanf("%f", &salaries[i]);

    
        totalSalary += salaries[i];
    

    averageSalary = totalSalary / 5;


    printf("\nTotal Salary = %.2f\n", totalSalary);


    printf("Average Salary = %.2f\n", averageSalary);

    return 0;
}