#include <stdio.h>
#include <windows.h> // works only for windows, use #include<uistd.h> for linux/mac //
/*
    for loop = repeat some code for a limited no. of times
    SYNTAX - for(initialization;condition;update); 
*/

int main(){

for(int i=10;i>=0;i--){
    Sleep(1000); // 1000 milliseconds, and works only on windows
    printf("%d\n",i);
}

printf("\nHAPPY NEW YEAR!");

}