//Perform 2D matrix array 


#include <stdio.h>

#define ROWS 2

#define COLS 2

void inputMatrix(int matrix[ROWS][COLS], const char *name)

 {
    printf("Enter elements for matrix %s:\n", name);


    for (int i = 0; i < ROWS; i++)
    
     {
        for (int j = 0; j < COLS; j++)
        
         {
            printf("Element [%d][%d]: ", i, j);


            scanf("%d", &matrix[i][j]);


        }
    }
}

void printMatrix(int matrix[ROWS][COLS], const char *name)

 {
    printf("Matrix %s:\n", name);


    for (int i = 0; i < ROWS; i++)
    
     {
        for (int j = 0; j < COLS; j++)
        
         {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[ROWS][COLS],

 int b[ROWS][COLS], int result[ROWS][COLS]) 
 
 {
    for (int i = 0; i < ROWS; i++)
    
     {
        for (int j = 0; j < COLS; j++)
        
         {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() 

{
    int matrix1[ROWS][COLS],
    
    
     matrix2[ROWS][COLS], result[ROWS][COLS];


    inputMatrix(matrix1, "A");


    inputMatrix(matrix2, "B");


    addMatrices(matrix1, matrix2, result);


    printMatrix(matrix1, "A");


    printMatrix(matrix2, "B");


    printMatrix(result, "Result of A + B");

    return 0;
}
