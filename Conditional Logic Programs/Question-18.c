//Write a C program to calculate profit and loss on a transaction.





#include <stdio.h>

int main()

 {
    float costPrice, sellingPrice, profitLoss;


    printf("Enter the cost price of the item: ");
    scanf("%f", &costPrice);
    
    printf("Enter the selling price of the item: ");
    scanf("%f", &sellingPrice);
    

    profitLoss = sellingPrice - costPrice;
    

    if (profitLoss > 0)
    
     {
        printf("Profit: %.2f\n", profitLoss);
    } else if (profitLoss < 0) 
    
    {
        printf("Loss: %.2f\n", -profitLoss);
    } else
    
     {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
