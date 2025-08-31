#include <stdio.h>
int main(){
    char x;
    printf("enter colour of traffic light: ");
    scanf(" %c",&x);
    switch(x){
        case 'r': 
        case 'R': 
        printf("red-stop");
        break;
        case 'y':
        case 'Y': 
        printf("yellow-wait");
        break;
        case 'g':
        case 'G': 
        printf("green-go");
        break;
        default: printf("invalid colour");
        
    }
    return 0;
}
