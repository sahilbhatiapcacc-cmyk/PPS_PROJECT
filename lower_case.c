#include <stdio.h>
int main(){
    char y;
    printf("enter your alphabet: ");
    scanf("%c",&y);
    if (y>='a' && y<= 'z'){
        printf("%c is lower case.", y);
        
    }
    else if(y>='A' && y<= 'Z'){
        printf("%c is upper case. ", y);
        
    }
    else {
        printf("invalid");
        
    }
    return 0;
    
}