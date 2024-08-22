// WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice




 #include <stdio.h>

void sortArray(int arr[], int size, int ascending) 

{
    int temp;

    for (int i = 0; i < size - 1; i++)
    
     {
        for (int j = i + 1; j < size; j++) 
        
        {
            if ((ascending && arr[i] > arr[j]) || (!ascending && arr[i] < arr[j]))
            
             {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void printArray(int arr[], int size)

 {
    for (int i = 0; i < size; i++)
    
    
     {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 

{
    int size1, size2, choice;

    
    printf("Enter size of first array: ");

    scanf("%d", &size1);

    int arr1[size1];

    printf("Enter %d elements for first array: ", size1);

    for (int i = 0; i < size1; i++)
    
     {
        scanf("%d", &arr1[i]);
    }


    printf("Enter size of second array: ");

    scanf("%d", &size2);

    int arr2[size2];

    printf("Enter %d elements for second array: ", size2);

    for (int i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
    }


    printf("Enter 1 for ascending order or 2 for descending order: ");

    scanf("%d", &choice);

    int ascending = (choice == 1);


    sortArray(arr1, size1, ascending);

    printf("Sorted first array: ");

    printArray(arr1, size1);

    
    sortArray(arr2, size2, ascending);

    printf("Sorted second array: ");

    printArray(arr2, size2);

    return 0;
}
