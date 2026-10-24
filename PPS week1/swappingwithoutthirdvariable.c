/* This program swaps two variables without using third variable */

#include <stdio.h>

int main(){

    float a = 0, b = 0;

    printf("\nEnter the first and second numbers : ");
    scanf("\n%f %f",&a,&b);

    printf("\nBefore swapping, a = %.2f and b = %.2f",a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping, a = %.2f and b = %.2f",a,b);

    return 0;

}