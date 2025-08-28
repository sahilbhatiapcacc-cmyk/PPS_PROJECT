#include <stdio.h>
int main(){
    int x,y,n;
    
    printf("enter your numbers: ");
    scanf("%d %d",&x ,&y);
    
    printf("\nENTER OPERATION: \n");
    printf("1. ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n");
    printf("5.MODULUS\n");
    printf("enter your choice number: \n");
    scanf("%d",&n);
    
    
    
    switch(n){
        case 1: printf("%d + %d = %d",x,y,x+y);
        break;
        case 2: printf("%d - %d = %d",x,y,x-y);
        break;
        case 3: printf("%d X %d = %d",x,y,x*y);
        break;
        case 4: printf("%d / %d = %d",x,y,x/y);
        break;
        case 5: printf("%d %% %d = %d",x,y,x%y);
        break;
        }
    return 0;
    
}
