//      pointer = A variable that stores the memory address of another variable.
//                BENEFIT: They help avoid wasting memory by allowing you to pass
//                the address of a large data structure instead of copying the entire data

#include <stdio.h>

void birthday(int *age);

int main(){

    int age = 25;
    int *pAge = &age;

    birthday(pAge);

    printf("You are %d years old",age);
    
    return 0;

}

void birthday(int *age){
    (*age)++;
}