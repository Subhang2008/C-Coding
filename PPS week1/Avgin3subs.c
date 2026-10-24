/* This program is to calculate average marks of a student  
    in 3 subjects */

#include <stdio.h>

int main(){

    int PPS = 0, MAC = 0, DE = 0, total= 0;
    float avg = 0;

    printf("\nEnter your marks in PPS, MAC and DE respectively :");
    scanf("\n%d %d %d",&PPS, &MAC, &DE);

    total = PPS + MAC + DE;
    avg = total/3.0;

    printf("\nTotal marks in 3 subs = %d\n\nAvg marks in 3 subs = %.2f",total,avg);

    return 0;

}