/* This  program is to demonstrate ++ and -- operators */

#include <stdio.h>

int main(){

    int x = 10, y = 8;

    printf("\nx = %d\ty = %d",x,y);   // x = 10 and y = 8 //
  
    y = x++; // y = 8 and x = 11 //

    printf("\nAfter post increment\nx = %d\ty = %d",x,y); // x = 11 and y - 8 //

    x--; // x = 10//

    y = ++x;
    printf("\nAfter pre increment\nx = %d\ty = %d",x,y);   // x = 11 and y = 11 //
    
    printf("\n%d(x)-- = %d",x,x--); // x-- = x

    printf("\nx = %d",x); // x = 10 //
    
    x++; // x = 11 //

    printf("\n--x = %d",--x); // x = 10 //
    
    return 0;

}