#include <stdio.h>

int main(){

    float pounds = 0.0, kilos = 0.0;
    int choice = 0;

    printf("**********     Weight Converter     **********\n\n");
    printf("1. Kilograms to pounds\n2. Pounds to kilograms");
    
    do
    {
        printf("\n\nEnter your choice (1 or 2): ");
        scanf("%d",&choice);

        if (choice == 1){
       
            printf("\nEnter the weight in kilograms: ");
            scanf("%f",&kilos);

            pounds = kilos * 2.20462;
            printf("\n%.2f kilogram(s) are equal to %.2f pound(s)",kilos,pounds);
            }
        else if(choice == 2){
        
            printf("\nEnter the weight in pounds: ");
            scanf("%f",&pounds);

            kilos = pounds / 2.20462;
            printf("\n%.2f pound(s) are equal to %.2f kilograms(s)",pounds,kilos);
        }
        else{
        printf("\nInvalid choice! Please enter 1 or 2!");
        }
    }while((choice != 1)&&(choice != 2));
    
    return 0;

}