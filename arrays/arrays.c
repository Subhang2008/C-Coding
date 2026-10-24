#include <stdio.h>

//      Array = A fixed-size collection of elements of the same data type 
//              (similar to a variable, but it holds more than 1 value)


int main(){

    int numbers[] = {10,20,30,40,50,60,70,80};
    char grades[] = {'A','B','C','D','E','F'};
    char name[] = "Subhang Amaram";
    int i;
    
    // no. of elements = size of array / size of single element in an array
    int size = sizeof(numbers) / sizeof(numbers[0]); 
    int size2 = sizeof(name)/sizeof(name[i]);

    for(i=0;i<size;i++){
        printf("%d ",numbers[i]);
    }
printf("\n");
    for (i = 0;i<size2;i++){
        printf("%c ",name[i]);
    }
    return 0;

}