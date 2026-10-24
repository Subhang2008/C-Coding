/*This program is to convert temperature
   from Fahrenheight to Celsius */

#include <stdio.h>

int main(){

    float F = 0 , C = 0;
    
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&F);

    C = (F - 32) * 5/9.0;

    printf("The given temperature in celsius = %.2f",C);

    return 0;

}