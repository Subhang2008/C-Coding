/* This program is to explore the putchar() function*/

#include <stdio.h>
#include <conio.h>

int main(){

    int ch;   // -- this is a declaration //
    char c;
    ch = getchar();
    printf("\nch=%d\n",ch);
    putchar(ch);
    getch();
    putchar(c);
    c = getche();
    putchar(c);
    c = getc(stdin);
    putchar(c);
    
    return 0;

}