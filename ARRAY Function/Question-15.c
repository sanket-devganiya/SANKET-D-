//.Store 5 numbers in array and sort it in ascending order


 #include <stdio.h>

#define SIZE 5

void bubbleSort(int arr[], int size)

 {
    for (int i = 0; i < size - 1; i++) 
    
    {
        for (int j = 0; j < size - i - 1; j++) 
        
        {
            if (arr[j] > arr[j + 1])
             {
                
                int temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;
            }
        }
    }
}

int main() 

{
    int numbers[SIZE];


    printf("Enter %d numbers:\n", SIZE);


    for (int i = 0; i < SIZE; i++)
    
     {
        printf("Number %d: ", i + 1);


        scanf("%d", &numbers[i]);
    }

    bubbleSort(numbers, SIZE);


    printf("\nNumbers in ascending order:\n");

    for (int i = 0; i < SIZE; i++)
    
     {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
