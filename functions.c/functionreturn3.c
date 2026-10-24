#include <stdio.h>

int getmax(int x,int y,int z){
    if (x>y && x>z){
        return x;
    }
    else if(y>z){
        return y;
    }
    else{
        return z;
    }
}

int main(){

    int x,y,z;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    
    int max = getmax(x,y,z);

    printf("\nThe greatest number among the given numbers is %d",max);
   
    return 0;

}