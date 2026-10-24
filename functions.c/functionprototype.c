#include <stdio.h>
#include <stdbool.h>

void hello(char name[],int age);
bool agecheck(int age);

int main(){

    hello("Subhang",18);

    if(agecheck(18)){
        printf("You are old enough to fight godzilla");
    }
    else{
        printf("You need to be atleast 16 years old to fight godzilla");
    }

    return 0;

}

void hello(char name[],int age){
    printf("Hello %s!\n",name);
    printf("You are %d years old\n",age);
}

bool agecheck(int age){
    return age>=16;
}