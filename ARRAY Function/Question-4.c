// WAP to find factorial using recursion



 #include <stdio.h>


int factorial(int n) 

{
    if (n <= 1)
    
     {
        return 1; 
    } else 
    
    {
        return n * factorial(n - 1);
    }
}

int main()

 {
    int num;
    

    printf("Enter a positive integer: ");

    scanf("%d", &num);
    
    if (num < 0)
    
     {
        printf("Factorial of a negative number is not defined.\n");
    } else
    
    
     {

        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    
    return 0;
}