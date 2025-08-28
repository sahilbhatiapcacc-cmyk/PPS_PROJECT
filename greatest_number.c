#include <stdio.h>
int main(){
    int x,b,z;
    printf("enter three number: ");
    scanf("%d %d %d",&x,&b,&z);
    if((x>b) && (x>z)){
        printf("\n%d is greatest",x);
    }
    else if((b>x) && (b>z)){
        printf("\n%d is greatest",b);
        
    }
    else if((z>x) && (z>b)){
        printf("\n%d is greatest",z);
    
    }
    return 0;
    
}
