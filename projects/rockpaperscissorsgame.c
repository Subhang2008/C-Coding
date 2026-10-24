// To Make a Rock,Paper,Scissors game 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getcomputerchoice();
int getuserchoice();
void checkwinner(int userchoice,int computerchoice);

int main(){

    int userchoice = getuserchoice();
    int computerchoice = getcomputerchoice();

    switch(userchoice){
        case 1:
        printf("You chooe ROCK!\n");
        break;
        case 2:
        printf("You chooe Paper!\n");
        break;
        case 3:
        printf("You chooe Scissors!\n");
        break;
    }   
    
    switch(computerchoice){
        case 1:
        printf("The Computer chose ROCK!\n");
        break;
        case 2:
        printf("The Computer chose Paper!\n");
        break;
        case 3:
        printf("The Computer chose Scissors!\n");
        break;
    }

    checkwinner(userchoice,computerchoice);
    
    return 0;

}

int getcomputerchoice(){
    srand(time(NULL));
    return (rand()%3) + 1;
}

int getuserchoice(){
    int choice = 0;
    
    do{
    printf("Options: ");
    printf("\n1. Rock\n2. Paper\n3. Scissors\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    }while(choice < 1 || choice > 3);
    return choice;
   
}

void checkwinner(int userchoice,int computerchoice){
if( (userchoice == 1 && computerchoice == 3) ||
    (userchoice == 2 && computerchoice == 1) ||
    (userchoice == 3 && computerchoice == 2)){
        printf("You WIN!\n");
    }
else if(userchoice == computerchoice){
    printf("Its a TIE!\n");
}
else printf("You LOSE!\n");
}