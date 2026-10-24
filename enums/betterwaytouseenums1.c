#include <stdio.h>

typedef enum{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4,
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;

int main(){

    Day today = MONDAY;

    printf("todays day number is %d",today); // the constants in enum behave 
                                             // like their integer value
    
    if(today == SUNDAY || today == SATURDAY){
        printf("\nIts weekend");
    }
    else {
        printf("\nIts a weekday");
    }
    return 0;

}
