#include <stdio.h>

int main(){

    int a,b;
    
    printf("Enter values of a and b : ");
    scanf("%d %d",&a,&b);
    
    (a > b)?printf("\na is larger"):printf("\nb is larger");

    return 0;

}