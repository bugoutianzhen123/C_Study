#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    float r1,r2;
    printf("«Î∑÷± ‰»Îa£¨b£¨c£∫\n");
    scanf("%f %f %f",&a,&b,&c);
    r1 = ((0-b) + sqrt(b*b - 4*a*c))/(2*a);
    r2 = ((0-b) - sqrt(b*b - 4*a*c))/(2*a);
    if (r1 == r2){
        printf("x=%f",r1);
    }else{
        printf("x1=%f, x2=%f",r1,r2);
    }
    return 0;
}