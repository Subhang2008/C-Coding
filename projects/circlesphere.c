#include <stdio.h>
#include <math.h>

#define pi 3.14159265359
int main(){

    double radius = 0,area=0,surface_area=0,volume=0;

    printf("Enter the radius : ");
    scanf("%lf",&radius);

    area = pi * pow(radius,2);
    surface_area = 4 * pi * pow(radius,2);
    volume = (4.0/3.0) * pi * pow(radius,3);

    printf("\nArea = %.2lf",area);
    printf("\nSurface Area = %.2lf",surface_area);
    printf("\nVolume = %.2lf",volume);
    
    return 0;

}