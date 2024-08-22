//  WAP to show difference between Structure and Union.  




#include <stdio.h>
#include <string.h>


struct Employee 

{
    int empno;
    char empname[50];
    float salary;
};

union Data 

{
    int intValue;
    float floatValue;
    char strValue[50];
};

int main()


 {
    
    struct Employee emp;


    emp.empno = 101;


    strcpy(emp.empname, "SANKET DEVGANIYA  ");


    emp.salary = 80000.00;

    
    union Data data;


    data.intValue = 45;  

    
    printf("Structure:\n");


    printf("Employee Number: %d\n", emp.empno);


    printf("Employee Name: %s\n", emp.empname);


    printf("Salary: %.2f\n", emp.salary);


    printf("\nUnion:\n");


    printf("Integer Value: %d\n", data.intValue);


    data.floatValue = 3.14;


    printf("Float Value: %.2f\n", data.floatValue);


    strcpy(data.strValue, "Hello");


    printf("String Value: %s\n", data.strValue);


    printf("\nAfter changing values in the union:\n");


    printf("Integer Value: %d (may be garbage)\n", data.intValue);


    printf("Float Value: %.2f (may be garbage)\n", data.floatValue);


    printf("String Value: %s\n", data.strValue);

    return 0;
}
