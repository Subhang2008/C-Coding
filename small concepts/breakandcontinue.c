#include <stdio.h>

//break = Break out of a loop (STOP)
//continue = Skip the current cycle/iteration of the loop(SKIP)

int main(){

int i;    

for(i=1;i<=10;i++){
    if(i == 4){
        break;
    }
    printf("%d\n",i);
}

printf("\n");

for(i=1;i<=10;i++){
    if(i == 4){
        continue;
    }
    printf("%d\n",i);
}
}