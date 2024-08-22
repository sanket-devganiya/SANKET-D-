//Convert school’s name in abbreviated form


#include <stdio.h>

int main () {


char fname [20], mname[20],lname[20];

printf ("enter the firsh name , middle name and last name \n");

scanf("%s %s %s", &fname, &mname, &lname ); 


printf ("abbreviated name:");


printf (" %c.%c.%s\n",fname[0], mname[0], lname );



return  0;


}