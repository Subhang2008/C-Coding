#include <stdio.h>
#include <string.h>

int main(){

    char name[50] = "";
    char adjective1[50]="";
    char verb[50]="";
    char adjective2[50]="";
    char animal[50] = "";
    char adjective3[50]="";

    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';
    
    printf("Enter adjective1: ");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1) - 1] = '\0';
    
    printf("Enter a verb(ending with -ing): ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb) - 1] = '\0';
    
    printf("Enter adjective2: ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter a animal's name: ");
    fgets(animal,sizeof(animal),stdin);
    animal[strlen(animal)-1] = '\0';

    printf("Enter adjective3: ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("\n%s is a %s human\n",name,adjective1);
    printf("You can always see %s %s everywhere.\n",name,verb);
    printf("%s has a very %s face\n",name,adjective2);
    printf("%s behaves like a %s\n",name,animal);
    printf("Overall, %s is a %s person.",name,adjective3);
    
    return 0;

}