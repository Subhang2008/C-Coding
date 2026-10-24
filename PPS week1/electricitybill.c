/* This program is to find net current bill paid by the customer */

#include <stdio.h>

int main(){

    float n = 0, unitprice = 0, cgst = 0, sgst = 0, service = 0;

    printf("\nEnter the number of volts of electricity used and price per volt : ");
    scanf("\n%f %f",&n ,&unitprice);

    cgst = 3/100.0 * n * unitprice;
    sgst = 3/100.0 * n * unitprice;
    service = 1/100.0 *n * unitprice;

    printf("\nThe net current bill to be paid = %.2f", n * unitprice + cgst + sgst + service);
    
    return 0;

}