/* This program is to find the net amount paid by customer for a product(mobile) for given mrp*/

#include <stdio.h>

int main(){

    float mrp = 0, discount = 0, delivery = 0, cashback = 0,  coupon = 0;

    printf("Enter the mrp of the mobile,delivery charges and coupon(if applicable) respectively : ");
    scanf("%f %f %f", &mrp, &delivery, &coupon);

    discount = mrp * 0.15;

    cashback = mrp * 0.05;

    printf("\nNet amount to be paid = %.2f", mrp - discount - cashback - coupon + delivery);

    return 0;

}