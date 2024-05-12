#include<stdio.h>
#define N  99

int main(){
   int i,n,s=0;
   for(i=1;i<=N;i+=2){
    s+=i*(i+1)*(i+2);
   }
   printf("%d",s);
   return 0;
}