    #include <stdio.h>
    #include <math.h>
    int main(){
        double a,b,c,dis,root1,root2,root3;
       printf("enter coefficient of quadratic equation: ");
       scanf("%lf %lf %lf", &a,&b,&c);
       
       dis = b*b - 4*a*c;
        if(dis>0){ 
            root1 = (-b + sqrt(dis)) / (2*a);
            root2 = (-b - sqrt(dis)) / (2*a);
            printf("the roots are: ");
            printf("%.2lf , %.2lf", root1 , root2);
        }
       else if(dis==0){
           root3 = (-b) /(2*a);
           printf("the root is: ");
           printf("%.2lf", root3);
       }
       else {
           printf("roots are complex");
           
       }
       return 0;
    }
