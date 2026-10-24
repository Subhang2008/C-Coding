#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    bool isStudent = false;
    char yesno[50] = "";


    printf("Are you a student?(yes/no): ");
    fgets(yesno,sizeof(yesno),stdin);
    yesno[strlen(yesno)-1] = '\0';

    if(strcasecmp(yesno,"yes") == 0){
        isStudent = true;
    }
    else {
        isStudent = false;
    }

    if (isStudent){
        printf("You are a student");
    }
    else{
        printf("You are not a student");
    }
    
    return 0;

}