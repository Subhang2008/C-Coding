/* This program helps the user to calculate the volume of a sphere */

#include <stdio.h>
#include <math.h>

#define pi 3.14159265359

int main(){

    float r = 0, V = 0;

    printf("Enter the radius of the sphere : ");
    scanf("%f",&r);

    V = 4/3.0 * pi * pow(r,3);
    
    printf("The volume of the sphere corresponding to the given radius = %.2f",V);
   
    return 0;

}