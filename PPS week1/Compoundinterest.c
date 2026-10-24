/* This program is to calculate compound interest as per given details */

#include <stdio.h>
#include <math.h>

int main(){

   float P = 0, T = 0, R = 0, n = 0, CI = 0, TA = 0;
   
    printf("\nEnter the principal amount,time(in yeaers),rate of interest(per anum) \nand no. of times the interest is compounded per year(n) : ");
    scanf("\n%f %f %f %f", &P, &T, &R, &n);    
    
    TA = P * pow((1 + R/100),n*T);
    CI = TA - P;

    printf("\nCompound interest = %.2f\n\nTotal amount to be paid = %.2f",CI,TA);
    
    return 0;

}