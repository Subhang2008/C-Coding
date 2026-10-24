#include <stdio.h>

int main(){

    double num1,num2;
    char op;
    
    printf("Enter the first number: ");
    scanf("%lf",&num1);

    printf("\nChoose one of the following operators: \n");
    printf("\n+ for Addition\n- for subtraction\n* for multiplication\n/ for division\n:");
    scanf(" %c",&op); // to clear \n from input buffer//

    printf("\nEnter the second number: ");
    scanf("%lf",&num2);

    switch(op){
        case '+':
        printf("\nresult = %.4lf\n",num1+num2);
        break;
        case '-':
        printf("\nresult = %.4lf\n",num1-num2);
        break;
        case '*':
        printf("\nresult = %.4lf\n",num1*num2);
        break;
        case '/':
        if(num2 != 0){
            printf("\nresult = %.4lf\n",num1/num2);
        }
        else printf("\nDivision with 0 is not possible");
        break;
        default:
        printf("Invalid Operation selected");
    }
    return 0;

}