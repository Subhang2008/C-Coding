#include <stdio.h>
#include <stdbool.h>

int main(){

        int i,N,osum,esum,sum;
        i = 1;
        osum = 0;
        sum = 0;
        esum = 0;

        printf("Enter the last natural number:");
        scanf("%d",&N);

        while (i<=N)
        {
            if (i%2==0)
            {
                printf("\n%d is an even number",i);
            }
            else 
            {
                printf("\n%d is an odd number",i);
            }
            
            if (i%2==0)
            {
                esum = esum + i;
            } 
            else 
            {
                osum = osum + i;
            }
            sum = sum + i;
            i = i + 1;
        }

        printf("\nThe sum of first %d natural numbers is %d",N,sum);
        printf("\nThe sum of odd numbers in first %d natural numbers is %d",N,osum);
        printf("\nThe sum of even numbers in first %d natural numbers is %d",N,esum);
    
        return 0; 

}