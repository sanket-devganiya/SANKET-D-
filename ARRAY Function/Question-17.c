// WAP to show difference between Structure and Union.




 #include <stdio.h>


struct Employee

 {
    int id;
    char name[30];
    float salary;
};

union Data

 {
    int intValue;
    float floatValue;
    char strValue[30];
};

int main() {
    

    struct Employee emp;
    emp.id = 101;
    snprintf(emp.name, sizeof(emp.name), "SANKET DEVGANIYA ");
    emp.salary = 50000.00;

    
    printf("Structure:\n");


    printf("ID: %d\n", emp.id);


    printf("Name: %s\n", emp.name);


    printf("Salary: %.2f\n\n", emp.salary);

    
    union Data data;


    data.intValue = 42;


    printf("Union (after setting intValue):\n");


    printf("Integer Value: %d\n", data.intValue);



    data.floatValue = 3.14;


    printf("Union (after setting floatValue):\n");


    printf("Float Value: %.2f\n", data.floatValue);


    printf("Integer Value: %d (may be garbage)\n", data.intValue);



    snprintf(data.strValue, sizeof(data.strValue), " SD");


    printf("Union (after setting strValue):\n");


    printf("String Value: %s\n", data.strValue);


    printf("Float Value: %.2f (may be garbage)\n", data.floatValue);


    printf("Integer Value: %d (may be garbage)\n", data.intValue);

    return 0;

}
