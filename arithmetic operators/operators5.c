//This is continuation of operators 4 //
// We will deal with augmented assignment operators //

#include <stdio.h>

int main(){

    int x = 10, y = 20, z = 30 ;
    float s = 35;
    
    x+=2 ; // this is same as x = x + 2, it is a shortcut//
    y-=2 ; // this is same as y = y - 2, it is a shortcut//
    z*=2 ; // this is same as z = z * 2, it is a shortcut//
    s/=2 ; // this is same as s = s / 2, it is a shortcut// 

    printf("%d",x);
    printf("\n%d",y);
    printf("\n%d",z);
    printf("\n%.2f",s);

    return 0;

}