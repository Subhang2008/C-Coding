#include <stdio.h>

//      2D Array = An array where each element is an array
//             SYNTAX -----   array[][] = { {}, {}, {} } 

int main(){

    int numbers[][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {10,11,12}
                    };
    
    for(int i = 0;i < 4;i++){           // outer loop is incharge of rows
       
        for(int j = 0;j < 3;j++){       // inner loop is incharge of columns
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }
                    
    return 0;

}