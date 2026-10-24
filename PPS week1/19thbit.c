#include <stdio.h>
#include <math.h>

int main(){

    float x,y,z,R1,R2,R3,R4,R5; 

    printf("Enter the values of x,y,z respectively :");
    scanf("%f %f %f",&x , &y, &z);

    R1 = (pow((pow(x,2) + pow(y,2)),3/2.0) + log(x + y))/sqrt(x-y);


    
    printf("R1 = %f",R1);
    
    return 0;

}