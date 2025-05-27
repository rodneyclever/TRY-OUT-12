#include <stdio.h>
#include <stdlib.h>




    int principal = 45000;
    double time = 6.0;
    const double rate = 3.2;
   const double ug = 3500;
   double dollars700 = 700;
   double salary = 600000;
   const double percentofsalary = 0.43;
   double productPrice = 35000;


   int main (){
       double SI = (double)principal * time * rate;

       printf(" NEWEST SIMPLE INTEREST IS %.2lf ", SI);

    const double discountPercentage = 0.15;
    double price = 2500000;
    double DP = discountPercentage * price;
    printf("\nTHE DISCOUNTED PRICE IS %.2lf\n" ,  DP);


       double exchangeRate = ug * dollars700;
    printf("\nTHE EXCHANGE RATE OF 700USD TO UGX IS %.2lf\n" , exchangeRate);

    double const bonus = percentofsalary * salary;
    printf("\nEMPLOYEE BONUS IS %.2lf\n" , bonus);


    double totalCost = productPrice + (rate* productPrice);

    printf("\nTHE TOTAL COST WITH SALES TAX IS %.2lf\n" , totalCost);




    return 0;
}

