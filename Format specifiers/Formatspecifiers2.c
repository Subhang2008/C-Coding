// Continuation of Format specifiers 1 //

#include <stdio.h>

int main(){

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%f\n",price1);
    printf("%f\n",price2);
    printf("%f\n",price3);
    
    printf("\n");

    printf("%+010.2f\n",price1); // first 0 is for preceding 0's instead of spaces //
    printf("%+010.2f\n",price2); // then the + is to show positive signs //
    printf("%+010.2f\n",price3); /* the 10 is to specify width as 10 and .2 to specify 2 decimal 
                                    places after the decimal point*/
                                 // NOTE --- even the + and dot count for counting the width//

    return 0;

}