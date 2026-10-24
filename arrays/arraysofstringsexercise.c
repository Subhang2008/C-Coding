// THIS IS AN EXCERCISE FOR ARRAYS OF STRINGS //

#include <stdio.h>
#include <string.h>

int main(){

    char names[4][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]),i;
    
    for(i = 0; i < rows; i++){
        printf("Enter name%d: ",i+1);
        fgets(names[i],sizeof(names[i]),stdin);
        names[i][strlen(names[i])-1] = '\0';    
    }
    
    for(i=0;i<rows;i++){
        printf("\n%s",names[i]);
    }
    
    return 0;

}