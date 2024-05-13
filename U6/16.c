#include<stdio.h>
#include<math.h>

// int main(){
//     double x1,x2,n;
//     scanf("%f",&n);
//    for(x2=1.0;fabs(x1-x2)>= 0.00001;){
//          x1=x2;
//          x2=(x1+n/x1)/2.0;
//     }
//     printf("%f",x2);
//     return 0;
// }

int main(){
    double x1,x2;
    float n;
    scanf("%f",&n);
    x2=1;
   do{
         x1=x2;
         x2=(x1+n/x1)/2.0;
    }while(fabs(x1-x2)>=0.000001);
    printf("%f",x2);
    return 0;
}