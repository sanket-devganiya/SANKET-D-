// WAP to reverse a string and check that the string is palindrome or not
//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address
//andage
//b. Write a program of structure for five employee that
//provides the following information -print and display
//empno, empname, address andage


 #include <stdio.h>
#include <string.h>


struct Employee 

{
    int empno;
    char empname[50];
    char address[100];
    int age;
};


void reverseString(char str[])


 {
    int length = strlen(str);
    char temp;
    int start = 0;
    int end = length - 1;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}


int isPalindrome(char str[]) 


{
    reverseString(str);
    char original[50];
    strcpy(original, str);
    reverseString(original);
    return strcmp(str, original) == 0;
}

int main() 

{
    
    struct Employee employees[5];

    
    for (int i = 0; i < 5; i++) 
    
    {
        printf("Enter employee %d details:\n", i + 1);
        printf("Empno: ");
        scanf("%d", &employees[i].empno);
        printf("Empname: ");
        scanf("%s", employees[i].empname);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    
    for (int i = 0; i < 5; i++) 
    
    {
        printf("\nEmployee %d details:\n", i + 1);
        printf("Empno: %d\n", employees[i].empno);
        printf("Empname: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
        printf("Empname is %s palindrome\n", employees[i].empname,
        
         isPalindrome(employees[i].empname) ? "a" : "not a");
    }

    return 0;
}