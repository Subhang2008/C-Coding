// This program is to simulate a shopping cart //

#include <stdio.h>
#include <string.h>

int main(){

    char item[50] = "";
    float price = 0.0;
    int quantity = 0;
    char currency = '$';
    float total = 0.0;

    printf("Name the item you want to buy : ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price of the item?: ");
    scanf("%f",&price);
    
    printf("How many of them do you want to buy?:");
    scanf("%d",&quantity);

    total = price * quantity;

    printf("\nYou have brought %d %s/s\n",quantity,item);
    printf("Total amount to be paid = %c%.2f",currency,total);

}