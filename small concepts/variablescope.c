#include <stdio.h>

/*
variable scope = refers to where a variable is recognized and accessible.

Two variables can have the same name and store different values if they 
are present in different scopes {}
*/


// int result = 0; // this would become global variable, which is hard to debug,   //
                   // so its not advisable to use it                               //

int add(int x,int y){
    
    int result = x + y; // local variable, it is recognized only in add function //
    return result;

}

int subtract(int x,int y){
    
    int result = x - y;
    return result;

}

int main(){

    int x=5;
    int y=6;

    int result = add(3,4);

    int result2 = subtract(x,y);

    printf("%d\n",result);
    printf("%d\n",result2);

    return 0;

}
