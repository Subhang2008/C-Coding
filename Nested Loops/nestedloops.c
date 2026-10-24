#include <stdio.h>

int main(){

for(int i=1;i<4;i++){  // outer loop used to run the inner loop 3 times //
    
    for(int j=1;j<=10;j++){ // this  is the inner loop //
        printf("%d ",j);
    }
    printf("\n");
}
    return 0;

}