#include <stdio.h>
#include <string.h>

void hbday(int yearsold, char bdayfellow[]){
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear %s!",bdayfellow);
    printf("\nHappy Birthday to you!");
    printf("\nYou are %d years old\n",yearsold);
}

int main(){

    char name[100];
    int age;

    printf("Enter the birthday boy's/girl's name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) - 1] = '\0';
    
    printf("Enter the age of the birthday boy/girl: ");
    scanf("%d",&age);

    hbday(age,name);
    hbday(age,name);
    hbday(age,name);


    return 0;

}