// Convert minutes into seconds and hours



#include <stdio.h>

void minutesToSecondsAndHours(int minutes, int *seconds, int *hours) 

{
    *seconds = minutes * 60;
    
    *hours = minutes / 60;
}

int main()

 {
    int minutes;
    int seconds, hours;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    minutesToSecondsAndHours(minutes, &seconds, &hours);

    printf("%d minutes is equal to %d seconds and %d hours.\n", minutes, seconds, hours);

    return 0;
}
