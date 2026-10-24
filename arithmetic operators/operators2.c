// cotinuation of operators1 //

#include <stdio.h>

int main(){

    int x = 3 , y = 2 , r1 = 0;
    float r2 = 0, r3 = 0;
    float z = 2;

    r1 = x * y;
    r2 = x / y;
    r3 = x / z;

    printf("\nx * y = %d",r1);
    printf("\nx / y = %.2f",r2);
    printf("\nx / z = %.2f",r3);

    /* from output you can notice thata x / y gives answer as 1 although it is supposed to be 1.5.
       This is because when we divide by an integer, the decimal value doesnt get retained
       so we use z instead with same value, but it is a float.
      
       NOTE -- so to retain decimal value during division, make sure the variable used as the
       divisor is afloat */
    
    return 0;

}