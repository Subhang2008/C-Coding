/* This program is to find y coordinate using the formula y = (ax +b)/(ax-b)*/

#include <stdio.h>

int main(){

    float y = 0, a = 0, b = 0, x = 0;

    printf("Enter the values of x-coordinate,a and b : ");
    scanf("%f %f %f", &x, &a, &b);

    y = (a*x + b)/(a*x - b);

    printf("The value of y-coordinate corresponding to the given details = %.2f",y);
    
    return 0;

}