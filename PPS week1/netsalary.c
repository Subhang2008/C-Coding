/* This salary helps to calculate the net salary of an employee */

#include <stdio.h>

int main(){

    float BS = 0, HRA = 0, DA = 0, TA = 0, PT = 0, NS = 0;

    printf("\nEnter your basic salary,house rent allowance, dearness allowance,transport allowance\nand professional tax respectively : ");
    scanf("\n%f %f %f %f %f", &BS, &HRA, &DA, &TA, &PT);

    NS = BS + HRA + DA + TA - PT;

    printf("\nNet salary = %.2f",NS);

    return 0;

}