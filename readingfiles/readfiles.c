// TO read files on C

#include <stdio.h>
int main(){

    FILE *pPoemfile = fopen("poem.txt","r");

    char buffer[1024] = {0};  
    if(pPoemfile == NULL){
        printf("Couldn't open the file");
        return 1;
    }else{
        while(fgets(buffer,sizeof(buffer),pPoemfile) != NULL){
            printf("%s",buffer);
        }
    }

    fclose(pPoemfile);
    
    return 0;

}