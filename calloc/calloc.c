// calloc() = Contigous Allocation
//            It allocates memory dynamically and sets all allocated memory/bytes to 0.
//            mallox() ia faster, but calloc() is leads to lesser bugs comparatively 

// SYNTAX -------   malloc(number of elements, size of each (element/datayype) of the element)

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_of_players;

    printf("Enter the number of players that are participating in the game: ");
    scanf("%d",&num_of_players);

    int *scores = calloc(num_of_players,sizeof(int));

    if(scores == NULL){
        printf("Memory allocation failed!");
        return 1;
        }

    else{
        
        for(int i = 0; i < num_of_players;i++){
        printf("Enter the score of player %d: ",i + 1);
        scanf("%d",&scores[i]);
        }
        printf("\n");
        printf("The scores of the players are: \n");
        for(int i = 0; i < num_of_players;i++){
        printf("%d ",scores[i]);
        }

    }

    
    free(scores);
    scores = NULL;
    
    return 0;

}