// WAP Find out length of string without using inbuilt function


  #include <stdio.h>

int findLength(const char *str)


 {
    int length = 0;
    while (str[length] != '\0')
    
    
     {
        length++;
    }
    return length;
}

int main() 

{
    char str[100];
    

    printf("Enter a string: ");



    fgets(str, sizeof(str), stdin);
    
    int len = 0;

    while (str[len] != '\0')
    
     {
        if (str[len] == '\n')
        
         {
            str[len] = '\0';
            break;
        }
        len++;
    }


    int length = findLength(str);



    printf("Length of the string: %d\n", length);
    
    return 0;
}
