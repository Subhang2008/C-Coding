// to make a 2D rectangle with symbols and no. of rows and columns mentioned by the user //

#include <stdio.h>

int main(){

    int r,c,rows,cols;
    char sym;

    printf("Enter no. of rows and columns respectively: ");
    scanf("%d %d",&rows,&cols);
    
    printf("Enter the symbol with which u want to make ur rectangle: ");
    scanf(" %c",&sym);

    for(r=1;r<=rows;r++){
        for(c=1;c<=cols;c++){
            printf("%c",sym);
        }
        printf("\n");
    }
    return 0;

}

