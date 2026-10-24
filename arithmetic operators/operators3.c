//continuation of operators 2 //

#include <stdio.h>

int main(){

    int x = 10 , y = 2 , z = 3 , s = 5 , r1 = 0, r2 = 0 , r3 = 0;

    r1 = x % y; // % is used to find out the remainder after dividing two numbers //
    r2 = x % z;
    r3 = y % z;

    printf("\nx %% y = %d",r1);
    printf("\nx %% z = %d",r2); // if we only use one %, C thinks we are using it as a format 
    printf("\ny %% z = %d",r3); // specifier. We should use %% to display one % to the user
    
    return 0;

}