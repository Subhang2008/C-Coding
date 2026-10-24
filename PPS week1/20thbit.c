/* This program is to evaluate the following expressions */

#include <stdio.h>

int main(){

    int  a = 5, b = 10, c = 15, d = 20, e = 25, f = 30, g = 35, h = 40;

    printf("\nR = a + b * c - d / e = %d",a + b * c - d / e);

    printf("\nR = (a + b) * c - d / (e - f) = %d",(a + b) * c - d / (e - f));

    printf("\nR = a * b + c / d - e + f = %d",a * b + c / d - e + f);

    printf("\nR = a + b * c / d - e * f + g = %d",a + b * c / d - e * f + g);

    printf("\nR = (a + b * c) / (d - e) + f * (g - h) = %d", (a + b * c) / (d - e) + f * (g - h));
    
    return 0;

