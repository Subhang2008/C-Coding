/* This program helps the user to calculate the area and perimeter of a circle */

#include <stdio.h>
#include <math.h>

#define pi 3.14159265359

int main(){

    float r = 0, area = 0, perimeter = 0;

    printf("\nEnter the radius of the circle : ");
    scanf("\n%f",&r);

    area = pi * pow(r,2);
    
    perimeter = 2 * pi * r;

    printf("\nArea of the circle corresponding to the given radius = %.2f",area);
    printf("\nPerimeter of the circle corresponding to the given radius = %.2f",perimeter);

    return 0;

}