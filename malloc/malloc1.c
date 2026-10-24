//      malloc()  =   A function in C that dynamically  allocates
//                    a specified number of bytes in memory 
// NOTE = malloc() requires #include <stdlib.h> header file

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_of_subjects;
    
    printf("Enter the no. of subjects you have: ");
    scanf("%d",&num_of_subjects);

    char *grades = malloc(num_of_subjects * sizeof(char)); // this is like taking space 
                                                           // for rent from heap

    if(grades == NULL){
        printf("Memory Allocation failed!");
        return 1;
    }                                                       
    
    else {
        for(int i=0;i<num_of_subjects;i++){
        printf("Enter your grade in subject %d: ",i+1);
        scanf(" %c",&grades[i]); 
        }
        printf("\n");
        printf("Your grades are:\n");
        for(int i=0;i<num_of_subjects;i++){
        printf("%c ",grades[i]);
        }
    }
    
    free(grades);  // returning "rented" space back to the heap/OS
    grades = NULL; // Avoids dangling pointers
    return 0;

}