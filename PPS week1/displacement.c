/* This program is to help the user calculate displacement by using the formula
    s = ut + 1/2at^2  */

#include <stdio.h>
#include <math.h>

int main(){ 

    float s = 0, u = 0, t = 0, a = 0;

    printf("Enter the values of initial velocity(in m/s),time(in s) and acceleration(in m/s^2) : ");
    scanf("%f %f %f", &u, &t, &a);

    s = u*t + 1/2.0*a*pow(t,2);

    printf("The value of displacement corresponding to the given details = %.2f",s);
    
    return 0;

}