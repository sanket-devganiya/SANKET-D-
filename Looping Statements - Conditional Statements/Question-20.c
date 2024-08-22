//  WAP program to print below output using for loop

//01  02  03  04  05  06  07  08  09  10
//11  12  13  14  15  16  17  18  19  20


 




























#include <stdio.h>

int main() {
    int i;

    // Loop to print numbers from 1 to 20
    for(i = 1; i <= 20; i++) {
        // Print each number with leading zeros for single-digit numbers
        printf("%02d", i);

        // Add space between numbers except after the last one
        if (i != 20) {
            printf("   ");
        }

        // Add a new line after the first 10 numbers
        if (i == 10) {
            printf("\n");
        }
    }

    return 0;
}