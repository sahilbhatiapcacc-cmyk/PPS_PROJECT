#include <stdio.h>
int main(){
    int x;
    printf("enter your age: ");
    scanf("%d", &x);
    if (x>=18){
        printf("you are eligible to vote.");
        
    }
    else{
        printf("you are not eligible to vote");
        
    }
    return 0;
    
}
