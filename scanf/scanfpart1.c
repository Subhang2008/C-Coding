#include <stdio.h>
#include <string.h>

int main (){

    int age = 0;        // although not necessary, it is advisable to set all variables to 0 
    float gpa = 0.0f;   // or null terminator or empty space depending on their data type
    char grade = '\0';  // '\0' represents null terminator //
    char name[50] = "";
    
    printf("Entera your age: ");
    scanf("\n%d", &age);
    printf("\nEnter your gpa: ");
    scanf("\n%f", &gpa);
   
    getchar();
    printf("\nEnter your grade: ");
    scanf("\n%c", &grade);

    getchar();
    printf("\nEnter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // this is to remove the \n
                                   // (new line character)
                                   //after the fgets function//
   
    printf("\nYour age is %d",age);
    printf("\nYour gpa is %.1f",gpa);
    printf("\nYour grade is %c",grade);
    printf("\nYour name is %s",name);


    return 0;

}