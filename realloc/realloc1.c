//      realloc()       =       Reallocation
//                              resize previously allocated memory
//    SYNTAX ---  realloc(pointer(the on we are resizing),size (in bytes by using sizeof));


#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_of_products;
    
    printf("Enter the number of products available at the store: ");
    scanf("%d",&num_of_products);

    float *prices = malloc(num_of_products * sizeof(float));

    if(prices == NULL){
        printf("Error in memory allocation!");
        return 1;
    }

    for(int i = 0; i < num_of_products; i++){
        printf("Enter the price of product%d: ",i+1);
        scanf("%f",&prices[i]);
    }

    int updated_num_of_products;

    printf("Enter the updated number of products available in the store: ");
    scanf("%d",&updated_num_of_products);

    float *temp = realloc(prices,updated_num_of_products * sizeof(float));
    // realloc() will also free old memory
    
    if(temp == NULL){
        printf("Error in reallocation of memory!"); 
    }
    else{
        prices = temp;
        temp = NULL;

        for(int i = num_of_products; i < updated_num_of_products; i++){
        printf("Enter the price of product%d: ",i+1);
        scanf("%f",&prices[i]);
        }

        for(int i = 0; i < updated_num_of_products; i++){
        printf("$%.2f: ",prices[i]);
        }
    }
    

    
 
    free(prices);
    prices = NULL;
    
    return 0;

}