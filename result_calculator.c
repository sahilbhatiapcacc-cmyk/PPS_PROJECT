/* 
----------------- RESULT CALCULATOR--------------------
*/

#include <stdio.h>
int main(){
    int m1, m2, m3,total;
    float avg;
    
    printf("ENTER MARKS OF FIRST SUBJECT: ");
    scanf("%d", &m1);
    printf("ENTER MARKS OF SECOND SUBJECT: ");
    scanf("%d", &m2);
    printf("ENTER MARKS OF THIRD SUBJECT: ");
    scanf("%d", &m3);
    
    total= (m1+m2+m3);
    avg = (total/3.0);
    printf("\n\n----------RESULT CALCULATOR----------");
    
    printf("\n\nTOTAL:       %d\n", total);
    printf("AVERAGE:      %.2f\n", avg);
    
    if (avg>=90){
        printf("GRADE:            A");
}
    else if(avg>=75){
        printf("GRADE:            B");
}
    else if(avg>=65){
        printf("GRADE:            C");
}
    else if(avg>=50){
        printf("GRADE:            D");
}
    else if(avg>=33){
        printf("GRADE:            E");
}
    else {
        printf("FAIL!!\n");
}

    return 0;
}
