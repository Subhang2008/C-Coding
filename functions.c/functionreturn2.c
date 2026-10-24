#include <stdio.h>
#include <stdbool.h>

bool agecheck(int age){
    if(age>=18){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if(agecheck(age)){
        printf("\nYou are a major");
    }
    else{
        printf("\nYou are a minor");
    }
    
    return 0;

}