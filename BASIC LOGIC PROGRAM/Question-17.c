 #include <stdio.h>

int main() {
    float salary;
    float insurancePremium;
    float premiumRate = 0.05;  // Corrected the variable name and added the semicolon

    printf("Enter the salary: ");
    scanf("%f", &salary);

    insurancePremium = salary * premiumRate;  // Corrected the variable name

    printf("The insurance premium based on a salary of %.2f is: %.2f\n", salary, insurancePremium);  // Fixed the semicolon issue

    return 0;  // Added return statement for main function
}
