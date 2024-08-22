//      WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array
 

 #include <stdio.h>

#define MAX 10 

void printMatrix(int matrix[MAX][MAX], int rows, int cols)

 {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], 

int rows, int cols)

 {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int a[MAX][MAX], int b[MAX][MAX],

 int result[MAX][MAX], int rows, int cols) 
 
 {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int a[MAX][MAX], int b[MAX][MAX],


 int result[MAX][MAX], int rowA, int colA, int rowB, int colB)
 
  {
    if (colA != rowB) {
        printf("Error: Matrices cannot be multiplied.\n");
        return;
    }
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];


    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowsB, &colsB);
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &b[i][j]);
        }
    }


    if (rowsA == rowsB && colsA == colsB)
    
    
     {
        printf("Matrix Addition:\n");

        addMatrices(a, b, result, rowsA, colsA);

        printMatrix(result, rowsA, colsA);


        printf("Matrix Subtraction:\n");

        subtractMatrices(a, b, result, rowsA, colsA);

        printMatrix(result, rowsA, colsA);

    } else {
        printf("Matrices dimensions do not match
        
         for addition or subtraction.\n");
    }


    if (colsA == rowsB) 
    
    {
        printf("Matrix Multiplication:\n");

        multiplyMatrices(a, b, result, rowsA, colsA, rowsB, colsB);

        printMatrix(result, rowsA, colsB);
    } else
    
     {
        printf("Matrices dimensions do 
        
        not match for multiplication.\n");
    }

    return 0;
}