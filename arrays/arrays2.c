#include <stdio.h>

int main(){

    int i;
    int scores[5] = {0};

    for(i=0;i<sizeof(scores)/sizeof(scores[0]);i++){
        printf("Enter score %d: ",i+1);
        scanf("%d",&scores[i]);
    }
    
    for(i=0;i<sizeof(scores)/sizeof(scores[0]);i++){
        printf("%d ",scores[i]);
    }
    
    return 0;

}