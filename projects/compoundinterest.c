// COMPOUND INTEREST CALCULATOR

#include <stdio.h>
#include <math.h>

int main(){

    double principal_amount = 0,total_amount = 0,rate = 0;
    int years = 0,times_compounded=0;

    printf("Enter the Principal amount: ");
    scanf("%lf",&principal_amount);

    printf("Enter the %%rate of interest(per anum): ");
    scanf("%lf",&rate);
    rate = rate/100;

    printf("Enter the time(in years): ");
    scanf("%d",&years);

    printf("Enter no. of times amount is compounded per year: ");
    scanf("%d",&times_compounded);
    
    total_amount = principal_amount  * pow(1 + rate/times_compounded,times_compounded*years);
    
    printf("******************** COMPOUND INTEREST CALCULATOR  ********************\n\n");
    printf("After %d year(s), the compound interest will be $%.2lf",years,total_amount-principal_amount);
    printf("\nAfter %d year(s), the total amount will be $%.2lf",years,total_amount);
    
    return 0;

}