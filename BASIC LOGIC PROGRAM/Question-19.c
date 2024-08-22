// calculate compound interest 

#include <stdio.h>

 void main(){ 


float principal , rate , time , ci ;


printf ("enter your principal amount :");

scanf ("%f", &principal);

printf ("enter rate :");

scanf ("%f", &rate );

printf ("enter time :");

scanf ("%f",&time );

ci = principal * (pow ((1 + rate / 100 ), time ));

printf (" compound interest  is : %f", ci);


 }    

