#include <stdio.h>
#include <string.h>

int main(){

    char adjective1[50]="";
    char verb[50]="";
    char adjective2[50]="";
    char adjective3[50]="";
    char adjective4[50]="";
    
    printf("Enter adjective1: ");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1) - 1] = '\0';
    
    printf("Enter a verb(ending with -ing) :");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb) - 1] = '\0';
    
    printf("Enter adjective2 :");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter adjective3 :");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("Enter adjective4 :");
    fgets(adjective4,sizeof(adjective4),stdin);
    adjective4[strlen(adjective4) - 1] = '\0';

    printf("\nHarith is a %s guy\n",adjective1);
    printf("You can always find him %s at the bar\n",verb);
    printf("I saw his %s face for the first time in vardhaman\n",adjective2);
    printf("I was %s\n",adjective3);
    printf("Harith x Subhang is a %s combo",adjective4);
    
    return 0;

}