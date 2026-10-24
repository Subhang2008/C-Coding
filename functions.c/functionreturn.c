#include <stdio.h>

// return = returns a value back to where you call a function //

double square(double num){  // we must mention datatype of a function to return a  //
                            // value/variable for a particular data type           //
return num * num;
}
    
double cube(double num){
    return num * num * num;
}

int main(){

    double x = square(2);
    double y = square(4.4);

    double z = cube(3);
    double w = cube(5.3);
    
    printf("%.2lf\n",x);
    printf("%.2lf\n",y);
    printf("%.2lf\n",z);
    printf("%.2lf\n",w);
    
    return 0;

}