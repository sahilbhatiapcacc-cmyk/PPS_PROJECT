#include <stdio.h>
int main(){
    int x;
    printf("------MONTH NAME------\n---------------\n");
    printf("1.JAN\n2.FEB\n3.MAR\n4.APR\n5.MAY\n6.JUN\n7.JUL\n8.AUG\n9.SEP\n10.OCT\n11.NOV\n12.DEC\n");
    printf("enter month number: ");
    scanf("%d",&x);
    switch(x){
        case 1:printf("JANUARY");
        break;
        case 2:printf("FEBRUARY");
        break;
        case 3:printf("MARCH");
        break;
        case 4:printf("APRIL");
        break;
        case 5:printf("MAY");
        break;
        case 6:printf("JUNE");
        break;
        case 7:printf("JULY");
        break;
        case 8:printf("AUGUST");
        break;
        case 9:printf("SEPTEMBER");
        break;
        case 10:printf("OCTOBER");
        break;
        case 11:printf("NOVEMBER");
        break;
        case 12:printf("DECEMBER");
        break;
        default:
        printf("invalid");
        
        
    }
    return 0;
    
}
