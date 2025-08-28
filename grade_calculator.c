#include <stdio.h>
int main(){
    int x;
    printf("enter your marks out of 100: ");
    scanf("%d",&x);
    if (x>=90 && x<=100){
        printf("\nyour grade is A\n");
    }
    else if(x>=75 && x<90){
        printf("\nyour grade is B\n");
    }
    else if(x>=55 && x<75){
        printf("\nyour grade is C\n");
    }
    else if(x>=33 && x<55){
        printf("\nyour grade is D\n");
    }
    else if(x<33 && x>0){
        printf("\nyour grade is F\n");
    }
    else {
        printf("\nentered marks in invalid\n");
        
    }
    return 0;
}