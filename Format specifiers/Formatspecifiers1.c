// This code is to learn about format specifiers //

/* Format specifier = Special tokens that begin with a %symbol
                      Followed by a character that specifies the
                      data type and optional modifiers
                     (width,precision,flags).
                      They control how date is displayed or
                      interpreted 
*/

#include <stdio.h>

int main(){

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%d\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);
    
    printf("\n");
    
    printf("%4d\n",num1);
    printf("%4d\n",num2);
    printf("%4d\n",num3);
   
    printf("\n");
    
    printf("%+d\n",num1);
    printf("%+d\n",num2);
    printf("%+d\n",num3);

    printf("\n");

    printf("%-4d\n",num1);
    printf("%-4d\n",num2);  // - to the left of 4 is to left align in output //
    printf("%-4d\n",num3);

    printf("\n");
    printf("%04d\n",num1);
    printf("%04d\n",num2);  // 0 to the left of 4 is to fill the spaces with 0's //
    printf("%04d\n",num3);
    
    return 0;

}