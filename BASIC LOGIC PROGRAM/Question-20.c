//Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.


                        #include <stdio.h>

void main()


 {
    float monthlysalary, insurancePremium, loanpremium, total;

    printf("Enter salary: ");


    scanf("%f", &monthlysalary);


    insurancePremium = monthlysalary / 10;



    loanpremium = monthlysalary / 10;

   

    total = monthlysalary - (insurancePremium + loanpremium);


             printf("Your insurance premium is: %f\n", insurancePremium);


    printf("Your loan premium is: %f\n", loanpremium);


                     printf("Your remaining salary is: %f\n", total);
}