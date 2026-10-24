#include <stdio.h>
#include <stdbool.h>
    int main(){

        int i,N,sum;
        i = 1;
        sum = 0;
        
        printf("Enter the last natural number:");
        scanf("%d",&N);


        while (i<=N)
        {
            if (i%2==0)
            {
                printf("\n%d is even",i);                
            }
            else printf("\n%d is odd",i);

            
            sum = sum + i;
            i = i + 1;
        }

        printf("\n\nSum of first %d natural numbers is %d",N,sum);
        
        return 0;

    }

        