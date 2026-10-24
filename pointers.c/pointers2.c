#include <stdio.h>

void birthday(int *age);

int main(){

    int age = 25;

    birthday(&age); //we can directly send an adress to a function that has pointer as a parameter
                    //that has pointer as a parameter
    
    printf("You are %d years old",age);
    
    return 0;

}

void birthday(int *age){
    (*age)++;
}