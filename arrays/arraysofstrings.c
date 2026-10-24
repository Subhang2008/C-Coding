// WORKING WITH ARRAYS OF STRINGS //

#include <stdio.h>

int main(){

    char fruits[][10] = {"Apple","Banana","Pineapple","Coconut"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'e' ;
    fruits[0][4] = 'A' ;
    
    fruits[1][0] = 'a' ;
    fruits[1][5] = 'b' ;
    
    fruits[2][0] = 'e' ;
    fruits[2][8] = 'P' ;

    fruits[3][0] = 't' ;
    fruits[3][6] = 'C' ;
    
    for (int i=0;i < size;i++){
        printf("%s\n",fruits[i]);    
    }
    
    return 0;

}