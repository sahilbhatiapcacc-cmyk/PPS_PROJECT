#include <stdio.h>
int main(){
    int x,y;
    printf("enter numbers to check divisibility: ");
    scanf("%d %d", &x,&y);
    if (x%y==0 ){
        printf("%d is divisible by %d",x,y);
    }
    else {
        printf("%d is not divisible by %d", x,y);
        
    }
    return 0;
    
    
}