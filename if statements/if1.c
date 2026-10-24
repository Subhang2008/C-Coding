#include <stdio.h>

int main(){

    int age = 0;

    printf("Enter your age: ");
    scanf("%d",&age);

    if (age >= 65){
        printf("You are a senior citizen");
    }
    else if (age >= 18){
        printf("You are an adult");
    }
    else if (age == 0){
        printf("You are a newborn baby");
    }
    else if (age < 0){
        printf("You aren't born yet ");
    }
    else {
        printf("You are a child");
    }
    
    return 0;

}