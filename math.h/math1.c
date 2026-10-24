#include <stdio.h>
#include<math.h>

int main(){

    float x = 100,k=0;

    //x = sqrt(x); (calculates square root of x)
    //x = pow(x,2); (calculates square of x)
    //x = round(x); ( rounds up x as per normal rounding rules)
    //x = ceil(x); (rounds up x to the next integer)
    //x = floor(x); (rounds up x to the previous integer)
    /*x = abs(x); (gives the positive value of x,
                   if decimal it rounds to previous
                   integer for example -3.9 absolute value is 3)*/
    //k = log(x); (calculates natural log of x)
    //k = log2(x); calculates log base 2 of x , similarly we can choose any base for log function)
    //x = sin(x) ( here x will be consider as radians)
    //x = cos(x) ( here x will be consider as radians)
    //x = tan(x) ( here x will be consider as radians)
    
    k = log10(x);

    printf("%f",k);

}