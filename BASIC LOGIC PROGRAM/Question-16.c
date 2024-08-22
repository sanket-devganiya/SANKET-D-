// .Convert country’s name in abbreviate for


#include <stdio.h>


int main () {


char fname[30], mname[30],lname[30];


printf ("enter the firsh name , middle name and last name \n");


scanf("%s %s %s", &fname, &mname , &lname); 


printf ("abbreviated name:");


printf ("\n %c . %c. %c",fname[0],mname[0], lname[0] );


return  0;


}