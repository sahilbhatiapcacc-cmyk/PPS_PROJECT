/*
Write a program to make a simple calculator (+, -, *, /).
*/


#include <stdio.h>
int main(){
    int x,y,z;
    printf("enter numbers: ");
    scanf("%d %d", &x,&y);
    printf("\n--------LIST OF OPERATION--------\n");
    printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n------------------------\n");
    printf("enter operation to be performed: ");
    scanf("%d",&z);
    switch(z){
        case 1: printf("%d",x+y);
        break;
        case 2: printf("%d",x-y);
        break;
        case 3: printf("%d",x*y);
        break;
        case 4: 
        if (x==0 || y==0){
            printf("invalid.");   
        }
        else {
            printf("%d",x/y);    
        }
        break;
        default: printf("invalid choice.");
}
    return 0;
}
