/* This program swaps two variables using third variable */

#include <stdio.h>

int main(){

    float a = 0, b = 0, t = 0;
    
    printf("Enter the values of first and second number : ");
    scanf("%f %f",&a,&b);

    printf("\nBefore swapping, a = %.2f and b = %.2f",a,b);

    t = a;
    a = b;
    b = t;
    
    printf("\n\nAfter swapping, a = %.2f and b = %.2f",a,b);
    
    return 0;

}