#include <stdio.h>

typedef enum{
                SUCCESS,FAILURE,PENDING  // here SUCCESS gets assigned value 0 ,
}Status;                                  // FAILURE gets assigned value 1,
                                         // PENDING gets assigned value 2 and so on automatically

void connectstatus(Status status);

int main(){

    Status status = SUCCESS;
    
    connectstatus(status);

    return 0;

}

void connectstatus(Status status){
    switch(status){
        case SUCCESS:
        printf("Connected Successfully");
        break;
        case FAILURE:
        printf("Could not connect");
        break;
        case PENDING:
        printf("Connecting........");
        break;
        default:
        printf("You have done something wrong");
        break;
    }
}