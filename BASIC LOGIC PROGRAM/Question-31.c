//Convert kilometers into meters


 #include <stdio.h>


float kilometersToMeters(float kilometers)

 {
    return kilometers * 1000;
}

int main()

 {
    float kilometers, meters;

    printf("Enter the distance in kilometers: ");


    scanf("%f", &kilometers);


    meters = kilometersToMeters(kilometers);

    
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

    return 0;
}
