#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Pseudo-random = Appear random but are determined by a mathematical formula that uses a
//                 seed value to generate a predictable sequence of numbers.

// More advanced methods: Mersenne Twister or /dev/random

int main(){

    srand(time(NULL));

    int min = 50;
    int max = 100;
    
    int randomnum1 = (rand() % (max - min + 1)) + min;
    int randomnum2 = (rand() % (max - min + 1)) + min;
    int randomnum3 = (rand() % (max - min + 1)) + min;
    
    printf("%d %d %d",randomnum1,randomnum2,randomnum3);
    return 0;

}