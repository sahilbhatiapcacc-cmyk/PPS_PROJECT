#include <stdio.h>
int main(){
    int y;
    printf("enter year: ");
    scanf("%d",&y);
    if(y%4==0){
        printf("%d is LEAP year.",y);
    }
    else {
        printf("%d is NOT LEAP year",y);
        
    }
    return 0;
    
}