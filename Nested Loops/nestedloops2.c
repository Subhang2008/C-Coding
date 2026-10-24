// to make a multiplication table using nested loops

#include <stdio.h>

int main(){

    for(int i=1;i<11;i++){
        printf("%d table is ---",i);
        for(int j=1;j<11;j++){
            printf("%3d ",i*j);
        }
        printf("\n");
    }
    
    return 0;

}