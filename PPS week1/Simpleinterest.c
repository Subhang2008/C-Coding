/* This program is to find out the simple interest
    as per the given information*/

#include <stdio.h>

int main(){

    float P = 0, T = 0, R = 0, TA = 0, SI = 0;

    printf("\nEnter principal amount, time(in years) and rate of interest(per anum) respectively: ");
    scanf("\n%f %f %F",&P,&T,&R);

    SI = (P*T*R)/100.0;

    TA = P + SI;

    printf("\nSimple interest = %.2f\n\nTotal amount to be paid = %.2f",SI,TA);

    return 0;

}