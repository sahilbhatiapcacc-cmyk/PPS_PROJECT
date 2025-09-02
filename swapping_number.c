#include <stdio.h>
int main(){
    int a,b;
    printf("enter number to be swaped: ");
    scanf("%d %d", &a ,&b);
    printf("previous numbers are- \na = %d, b= %d", a,b);
    
    
    a= a+b;
    b= a-b;
    a= a-b;
    
    printf("\n\nafter swapping no. are- \na= %d  b= %d",a, b);
    
    return 0;
    
}
