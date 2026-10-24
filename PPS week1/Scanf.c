/*This program is to take input of a students roll no, grade and height 
and display the information*/

#include <stdio.h>

int main(){

    int roll_no;
    char grade;
    float height;

    printf("Enter your roll no.");
    scanf("%d",&roll_no);
    printf("\nYour roll no. is %d\n",roll_no);

    printf("\nEnter your grade:");
    scanf("\n%c",&grade);
    printf("\nYour grade is %c\n",grade);

    printf("\nEnter your height:");
    scanf("\n%f",&height);
    printf("\nYour height is %.1f",height);
    
    return 0;

}