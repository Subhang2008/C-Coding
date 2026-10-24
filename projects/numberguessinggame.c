// TO MAKE A NUMBER GUESSING GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){

    srand(time(NULL)); 

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;

    int answer = (rand() % (max - min + 1)) + min;

    printf("*****       NUMBER GUESSING GAME        *****\n\n");

    do{
        printf("Guess a number between %d to %d: ",min,max);
        scanf("%d",&guess);    
        tries++;

        if(guess<answer){
            printf("Your guess is lower than the answer\n");
        }
        else{
            printf("Your guess is greater than the answer\n");
        }
    }while(guess != answer);    

    printf("\nYes! The correct answer is %d",answer); 
    printf("\nIt took you %d tries",tries);
    
    return 0;

}