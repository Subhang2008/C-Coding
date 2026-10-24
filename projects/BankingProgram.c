// To make a banking program where u can deposit money, withdraw money, 
// check your balance or exit the program

#include <stdio.h>

float deposit();
float withdraw(float balance);
void checkbalance(float balance);

int main(){

    int choice;
    float balance = 0.0;

do{
        printf("\nOptions:\n");
        printf("\n1. Check Balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("\nSelect an option: ");
        scanf("%d",&choice);
        
        switch(choice){
        case 1:
        checkbalance(balance);
        break;
        case 2:
        balance += deposit();
        break;
        case 3:
        balance -= withdraw(balance);
        break;
        case 4:
        printf("\nThank you for using our bank!\n");
        break;
        default:
        printf("\nInvalid option, choose 1-4 options\n");
        break;
    }
    
}while(choice != 4);

    return 0;
    
}

void checkbalance(float balance){
    printf("\nYour balance = $%.2f\n",balance);
}

float deposit(){
    float amount;
    printf("\nEnter the amount of money(in $) you want to deposit: ");
    scanf("%f",&amount);
    if(amount<0){
        printf("Invalid amount\n");
        return 0.0;
    }
    else{
        printf("\nSuccessfully deposited $%.2f\n",amount);
        return amount;
    }
      
}

float withdraw(float balance){
    float amount;
    printf("\nEnter the amount of money(in $) you want to withdraw: ");
    scanf("%f",&amount);
    if(amount<0){
        printf("Invalid amount!\n");
        return 0.0;
    }
    else if(amount > balance){
            printf("\nInsufficient Funds! Your balance is $%.2f only\n",balance);
            return 0.0;
        }
    else {
        printf("\nSuccessfully withdrew $%.2f\n",amount);
        return amount;
    }
}
    

