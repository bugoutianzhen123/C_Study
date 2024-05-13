#include<stdio.h>
#define N 100

int main(){
    float i,s=2;
    for(i=2;i<=N;i+=2){
       s*=(i/(i-1))*(i/(i+1));
    }
    printf("%f",s);
    return 0;
}