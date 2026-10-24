#include <stdio.h>

int main(){

    float Celsius = 0.0, Fahrenheit = 0.0;
    char choice = '\0';

printf("**********        Temperatureconverter        **********]\n\n");
printf("C -- Convert from Celsius to Fahrenheit\n");
printf("F -- Convert from Fahrenheit to Celsius\n");

do
{
printf("\nEnter your choice(C or F): ");
scanf(" %c",&choice);

if(choice == 'C'){
    printf("\nEnter the temperature in Celsius: ");
    scanf("%f",&Celsius);

    Fahrenheit = (Celsius * 1.8) + 32;
    printf("\n%.1f Celsius = %.1f Fahrenheit",Celsius,Fahrenheit);
}
else if(choice == 'F'){
    printf("\nEnter the temperature in Fahrenheit: ");
    scanf("%f",&Fahrenheit);

    Celsius = (Fahrenheit - 32) * 5.0/9.0;
    printf("\n%.1f Fahrenheit = %.1f Celsius",Fahrenheit,Celsius);
}
else{
    printf("\nInvalid choice! Please enter C or F");
}
} while((choice != 'C')&&(choice !='F'));

return 0;

}