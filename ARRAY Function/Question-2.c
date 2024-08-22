//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)




 #include <stdio.h>

int main()

 {
    int choice;
    float num1, num2, result;

    
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    
    switch (choice)
    
     {
        case 1:
            result = num1 + num2;
            printf("Result of addition: %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result of subtraction: %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result of multiplication: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result of division: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
