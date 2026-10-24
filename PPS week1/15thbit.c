/* This program is to calculate total wage of a worker based on extra hours */

#include <stdio.h>

int main(){

    int wage_8hours = 0, extrahours = 0, extrawageperhour = 0, totalwage = 0;

    printf("Enter the wage for 8 hours, extra hours worked by the worker\nand extra wage per hour respectively : ");
    scanf("%d %d %d", &wage_8hours, &extrahours, &extrawageperhour);

    totalwage = wage_8hours + (extrahours * extrawageperhour);

    printf("Total wage of the worker = %d",totalwage);

    return 0;

}