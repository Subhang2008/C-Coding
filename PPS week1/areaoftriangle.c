/* This program helps the user to calculate area of a triangle */

#include <stdio.h>

int main(){

    float b = 0, h = 0, area = 0;

    printf("Enter the measurements of the base and height of the triangle respectively : ");
    scanf("%f %f", &b, &h);
    
    area = 1/2.0 * b * h;

    printf("The area of the triangle corresponding to the given base and height = %.2f",area);

    return 0;

}