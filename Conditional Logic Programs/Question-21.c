//Write a C program to input basic salary of an employee and calculateits
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 800%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%\


#include <stdio.h>

int main()

 {
    float basicSalary, hra, da, grossSalary;

    
    printf("Enter the basic salary: ");


    scanf("%f", &basicSalary);

    
    if (basicSalary <= 10000) 
    
    {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    } else if (basicSalary <= 20000)
    
     {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    } else
    
     {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }

    
    grossSalary = basicSalary + hra + da;

    
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
 }
