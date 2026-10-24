// To read a file that is present in some other location/adress/path of our choice

#include <stdio.h>

int main(){

    FILE *pReadsubhangfiles = fopen("C:\\Users\\subha\\OneDrive\\Desktop\\Oogwayadvices.txt","r");
    
    char buffer[1024] = {0};

    if(pReadsubhangfiles == NULL){
        printf("Couldn't open the file");
    }
    else{
        while(fgets(buffer,sizeof(buffer),pReadsubhangfiles) != NULL){
            printf("%s",buffer);
        }
    }
    
    fclose(pReadsubhangfiles);

    return 0;

}
