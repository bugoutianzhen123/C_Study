#include<stdio.h>
#define N  100

int main(){
   int i,n,s=0;
   for(i=2;i<=N;i+=2){
    s+=i;
   }
   printf("%d",s);
   return 0;
}