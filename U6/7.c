#include<stdio.h>
#include<math.h>
#define EPS 0.000001

int main(){
    int i;
    float x=0.5,y=x,s=x;
    for (i=1;fabs(y)>EPS;i++){
        y=-y*x*x/i;
        s +=y/(2*i+1);
    }
    printf("%f",s);

    return 0;
}