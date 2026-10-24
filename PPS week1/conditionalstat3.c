#include <stdio.h>

int main(){

    int A,B,C;

    printf("Enter the values of A,B and C respectively : ");
    scanf("%d %d %d",&A,&B,&C);

    (A>B) && (A>C)?printf("A is largest"):(B>C)?printf("B is largest"):printf("C is largest");
    
    return 0;

}