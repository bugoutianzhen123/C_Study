#include<stdio.h>
#define N 10

int main(){
    int i,j,s=0;
    for(i=1,j=1;i<=N;i++){
       j*=i;
       s+=j;
    }
    printf("%d",s);
    return 0;
}