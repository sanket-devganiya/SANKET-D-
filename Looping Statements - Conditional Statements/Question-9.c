//Write a program make a summation of given number (E.g., 1523 Ans: -11)



 #include <stdio.h>

int main()

 {
    int number, sum = 0;



    printf("Enter a number: ");


    scanf("%d", &number);

    
    int is_negative = number < 0;
    if (is_negative)
    
     {
        number = -number;
    }


    while (number > 0) 
    
    {
        sum += number % 10;  
        number /= 10; 
    }

    
    if (is_negative)
    
     {
        sum = -sum;
    }


    printf("Summation of digits is %d\n", sum);

    return 0;
}
