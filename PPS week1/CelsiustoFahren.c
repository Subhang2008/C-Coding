/* This program is to convert temperature from 
   Celsius to Fahrenheit */

#include <stdio.h>

int main(){

    float C = 0, F = 0;

    printf("Enter the temperature in celsius: ");
    scanf("%f",&C);

    F = (C * 1.8) + 32;

    printf("The given temperature in fahrenheit = %.2f",F);
    
    return 0;

}