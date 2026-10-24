#include <stdio.h>
#include <stdbool.h>

int main(){

    float ticket_price = 10.00;
    bool isStudent = false;
    bool isSenior = false;

    if(isStudent){
        if(isSenior){
            printf("You will get 10%% student discount and 20%% senior discount\n");
            ticket_price *= 0.7;
        }   
        else{
            printf("You will get 10%% student discount\n");
            ticket_price *= 0.9;
        }
    }
    else if(isSenior){
        printf("You will get 20%% senior discount\n");
        ticket_price *= 0.8;
    }
    else printf("You have no discounts available\n");
    
    printf("Ticket price = %.2f",ticket_price);
    return 0;

}