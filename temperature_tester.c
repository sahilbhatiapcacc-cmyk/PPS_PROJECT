/*

----------CELCIUS TO FAHRENHEIT CONVERTOR-----------

#include <stdio.h>
int main(){
    int c;
    
    printf("enter your celcius value: ");
    scanf("%d",&c);
    printf("your celcius value was: %d\n" , c);
    printf("its Fahrenheit value: %d", (c-32)*(5/9));
    return 0;
}
*/

#include <stdio.h>
int main(){
    int f;
    
    printf("enter your Fahrenheit value: ");
    scanf("%d",&f);
    printf("your Fahrenheit value was: %d\n" , f);
    printf("its celcius value: %d", ((f*9/5)-32));
    return 0;
}
