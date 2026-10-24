/* This program is to calculate y coordinate by using straight line equation
    (y = mx + c)  */

#include <stdio.h>

int main(){

    float m = 0, x = 0, c = 0, y = 0;

    printf("Enter the values of gradient,x-coordinate and y-intercept respectively : ");
    scanf("%f %f %f", &m, &x, &c);

    y = m*x + c;
    
    printf("The y-coordinate corresponding to the given details = %.2f",y);
    
    return 0;

}