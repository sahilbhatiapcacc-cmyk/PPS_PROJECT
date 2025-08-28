#include <stdio.h>
int main(){
    int x;
    printf("enter number: ");
    scanf("%d",&x);
    if (x>0){
        printf("%d is positive number",x);
    }
    else if(x<0){
        printf("%d is negative", x);
    }
    else {
        printf("%d is zero",x);
    }
    return 0;
}